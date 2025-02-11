#pragma once
#define _USE_MATH_DEFINES
#include<cmath>
#include<iostream>
#include<vector>
#include <ctime>
#include<cstdlib>
#include <algorithm>
using namespace std;

void getTable1st(vector<double>&p, vector<int>&ns, vector<int>&ys, vector<int>&xs, int N, int M, int r, int n);

void getTable2nd(int* ks, double* x_mid, double* Dn, double* S, 
	double* R, double* Me, 
	vector<double>& p, vector<int>& ns, vector<int>& ys, vector<int>& xs, int N, int M, int r, int n);

double fac(int n);

double Gamm(double a);

double funcForHi(double x, double r);

vector<int> getXs(int N, int M, int r, int n);