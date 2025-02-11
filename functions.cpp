#include"names_of_functions.h"

double fac(int n) {
	if (n == 0) {
		return 1;
	}
	int i = n;
	int fact = 1;
	while (n / i != n) {
		fact = fact * i;
		i--;
	}
	return fact;
}

double Gamm(double a) {
	if (a == 1.) {
		return 1;
	}
	if (a == 0.5) {
		return sqrt(M_PI);
	}
	else {
		return (a - 1) * Gamm(a - 1);
	}
}

double funcForHi(double x, double r) {
	if (x <= 0) {
		return 0;
	}
	double a = pow(2, -(r / 2.));
	double b = pow((Gamm(r / 2.)), -1);
	double c = pow(x, (r / 2. - 1));
	double d = exp(-x / 2.);
	return a*b*c*d;//pow(2, -(r / 2.)) * pow(floor(Gamm(r / 2.)), -1) * pow(x, (r / 2. - 1)) * exp(-x / 2.);
}
vector<int> getXs(int N, int M, int r, int n) {
	vector<int>xi;
	int low_brdr = max(0, r + M - N);
	int high_brdr = min(M, r);
	for (int i = 0; i < n; i++) {
		//vector<double> ran(r);
		int M_curr = M, N_curr = N;
		double t, probab = double(M) / N;
		double model_k = 0;//количество перегоревших
		for (int j = 0; j < r; j++) {
			t = double(rand()) / RAND_MAX;
			if (t < probab) {
				if (M_curr > 0) { M_curr--; }
				model_k++;
			}
			if (N_curr > 1) {
				N_curr--;
			}
			probab = double(M_curr) / N_curr;
		}
		xi.push_back(model_k);
	}
	sort(xi.begin(), xi.end());
	return xi;
}

void getTable1st(vector<double>&pp, vector<int>&nss, vector<int>&yss, vector<int>&xss, int N, int M, int r, int n)	 {//реальные вероятности
																											//количество каждого значения св в выборке
																											//все возможные значения св
																											//все значения св в выборке
	srand(time(0));
	vector<double>pi;
	vector<int>xi;
	vector<int>yi;
	vector<int>ni;
	int low_brdr = max(0, r + M - N);
	int high_brdr = min(M, r);
	int number_of_k = high_brdr - low_brdr + 1;
	int k = low_brdr;
	double c = (fac(M) * fac(N - M) * fac(r) * fac(N - r)) / fac(N);
	for (int i = 0; i < number_of_k; i++) { //считаем реальные вероятности
		pi.push_back(c / (fac(k) * fac(M - k) * fac(r - k) * fac(N - M - r + k)));
		k++;
	}
	pp = pi;
	for (int i = 0; i < number_of_k; i++) { // заполняем множество возможных значений св
		yi.push_back(low_brdr + i);
		ni.push_back(0);
	}
	for (int i = 0; i < n; i++) {
		//vector<double> ran(r);
		int M_curr = M, N_curr = N;
		double t, probab = double(M)/N;
		double model_k = 0;//количество перегоревших
		for (int j = 0; j < r; j++) {
			t = double(rand()) / RAND_MAX;
			if (t < probab) {
				if (M_curr > 0) { M_curr--; }
				model_k++;
			}
			if (N_curr > 1) {
				N_curr--;
			}
			probab = double(M_curr) / N_curr;
		}
		if (model_k<low_brdr || model_k>high_brdr) {
			i--;
		}
		else {
			xi.push_back(model_k);
			ni[model_k-low_brdr]++;
		}
	}
	//double sum = 0;
	//for (int u = 0; u < n; u++) { //моделируем распределение
	//	k = low_brdr;
	//	double t = double(rand()) / RAND_MAX;
	//	sum = p[0];
	//	for (int i = 1; i < number_of_k + 1; i++) {
	//		if (t <= sum) {
	//			ns[i - 1] += 1;
	//			xs.push_back(k);
	//			break;
	//		}
	//		if (i == number_of_k) { break; }
	//		sum += p[i];
	//		k += 1;
	//	}
	sort(xi.begin(), xi.end());
	xss = xi;
	nss = ni;
	yss = yi;
}

void getTable2nd(int*ks, double* x_mid, double *Dn, double *S, double *R, double *Me,vector<double>& p, vector<int>& ns, vector<int>& ys, vector<int>& xs, int N, int M, int r, int n) {//наиболее вероятное, 
																											//выборочное среднее, их разность не передаю,
																											// дисперсия, выборочная дисперсия,
																											// размах выборки, выборочная медиана
	double drob = double(M + 1) * (r + 1) / (N + 2);
	double k1, k2;
	int low_brdr = max(0, r + M - N);
	int high_brdr = min(M, r);
	int number_of_k = high_brdr - low_brdr + 1;
	int k;
	if (drob == floor(drob)) {//если число целое
		k1 = drob;
		k2 = drob - 1;
		*ks = (k1 + k2) / 2;
	}
	else {
		*ks = floor(drob);
	}
	double summary = 0;
	for (int i = 0; i < number_of_k; i++) {
		summary += ns[i] * ys[i];
	}
	*x_mid = summary / n;

	//Dn
	*Dn = 0;
	double mun = 0, munsq = 0;
	k = low_brdr;
	for (int i = 0; i < number_of_k; i++) {
		mun += k * p[i];
		munsq += k * k * p[i];
		k++;
	}
	*Dn = munsq - mun * mun;

	//S
	*S = 0;
	for (int i = 0; i < number_of_k; i++) {
		for (int j = 0; j < ns[i]; j++) {
			*S += pow((*x_mid - ys[i]), 2);
		}
	}
	*S /= n;

	*R = xs[n - 1] - xs[0];

	*Me = 0;
	if (n % 2 == 1) {
		*Me = xs[n / 2];
	}
	else {
		*Me = double(xs[n / 2 + 1] + xs[n / 2]) / 2;
	}
}

void func() {
	srand(time(0));
	int N, M, r;
	double sum = 0;
	cout << "enter N,M,r:\n";
	cin >> N >> M >> r;
	int low_brdr = max(0, r + M - N);
	int high_brdr = min(M, r);
	int number_of_k = high_brdr - low_brdr + 1;
	vector<double> p(number_of_k);
	int k = low_brdr;
	double c = (fac(M) * fac(N - M) * fac(r) * fac(N - r)) / fac(N);
	for (int i = 0; i < number_of_k; i++) {
		p[i] = c / (fac(k) * fac(M - k) * fac(r - k) * fac(N - M - r + k));
		k++;
	}
	vector<int>ns(number_of_k);
	vector<int>ys(number_of_k);
	for (int i = 0; i < number_of_k; i++) {
		ys[i] = low_brdr + i;
		ns[i] = 0;
	}
	int n;//количество экспериментов
	cout << "enter number of experiments: \n";
	cin >> n;
	vector<int>xs;
	for (int u = 0; u < n; u++) {
		k = low_brdr;
		double t = double(rand()) / RAND_MAX;
		sum = p[0];
		for (int i = 1; i < number_of_k + 1; i++) {
			if (t <= sum) {
				ns[i - 1] += 1;
				xs.push_back(k);
				break;
			}
			if (i == number_of_k) { break; }
			sum += p[i];
			k += 1;
		}
	}

	//вывод для первого пункта
	cout << "\nyi:   ";
	for (int i = 0; i < number_of_k; i++) {
		cout << ys[i] << "     ";
	}
	cout << '\n';
	cout << "ni:   ";
	for (int i = 0; i < number_of_k; i++) {
		cout << ns[i] << "     ";
	}
	cout << '\n';
	cout << "ni/n: ";
	for (int i = 0; i < number_of_k; i++) {
		cout << double(ns[i]) / n << "     ";
	}
	cout << '\n';
	cout << "pi: ";
	for (int i = 0; i < number_of_k; i++) {
		cout << p[i] << "     ";
	}


	//пункт 2

	//среднее выборочное и наиболее вероятное значение
	double drob = double(M + 1) * (r + 1) / (N + 2);
	double k1, k2, ks;
	if (drob == floor(drob)) {//если число целое
		k1 = drob;
		k2 = drob - 1;
		ks = (k1 + k2) / 2;
	}
	else {
		ks = floor(drob);
	}
	double x_mid, summary = 0;
	for (int i = 0; i < number_of_k; i++) {
		summary += ns[i] * ys[i];
	}
	x_mid = summary / n;
	cout << "\nk = " << ks << "\nx_mid = " << x_mid;

	//D
	double D = 0;
	for (int i = 0; i < number_of_k; i++) {
		if (D < abs(double(ns[i]) / n - p[i])) {
			D = abs(double(ns[i]) / n - p[i]);
		}
	}
	cout << "\nD = " << D;

	//Dn
	double Dn = 0;
	double mun = 0, munsq = 0;
	k = low_brdr;
	for (int i = 0; i < number_of_k; i++) {
		mun += k * p[i];
		munsq += k * k * p[i];
		k++;
	}
	Dn = munsq - mun * mun;
	cout << "\nDn = " << Dn;

	//S
	double S = 0;
	for (int i = 0; i < number_of_k; i++) {
		for (int j = 0; j < ns[i]; j++) {
			S += pow((x_mid - ys[i]), 2);
		}
	}
	S /= n;
	cout << "\nS = " << S;

	double diffDnS = abs(S - Dn);
	cout << "\n|S-Dn| = " << diffDnS;

	sort(xs.begin(), xs.end());

	double R = xs[n - 1] - xs[0];
	cout << "\nR = " << R;

	double Me = 0;
	if (n % 2 == 1) {
		Me = xs[n / 2 + 1];
	}
	else {
		Me = double(xs[n / 2 + 1] + xs[n / 2]) / 2;
	}
	cout << "\nMe = " << Me;
}