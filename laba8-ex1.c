#include <stdio.h>
#include <math.h>
#include <locale.h>


#define ARR_SIZE 6000


double FindVw(double rA, double omegaE, double fi);
double FindRp(double omegaE, double rA, double i, double mu);
double FindVa(double rA, double mu, double rP);

int main() {
	setlocale(LC_ALL, "Russian");

	double mu = 398600.4;
	double omegaE = 7.2921159 * pow(10, -5);
    double rA = 45000;
	double i = 63.4;


	double rP = FindRp(mu , omegaE, rA, i);

	FILE *SPEEDS = fopen("values.txt", "w");


	for (int j = 1; j < ARR_SIZE; j++) {

		int rA = j * 10;

		double fvw = FindVw(rA, omegaE, i); 
		double fva = FindVa(rA, mu, rP);

		char str[200];

		if (fvw <= fva) {
			snprintf(str, 200, "%d %f\n", j, fvw); 
			
		}
		else {
			snprintf(str, 200, "%d %f\n", j, fva); 
		}

		fprintf(SPEEDS, str);
			
		
	}

	fclose(SPEEDS);
	return 0;
}


double FindVa(double rA, double mu, double rP) {

	return sqrt(2 * mu * rP / (rA * (rA + rP)));

}

double FindRp(double omegaE, double rA, double i, double mu) {
	
	return pow(omegaE, 2) * pow(rA, 4) * pow(cos(i), 2) / (2 * mu - pow(omegaE, 2) * pow(rA, 3) * pow(cos(i), 2));
}

double FindVw(double rA, double omegaE, double i) {

	return omegaE * rA * cos(i);
}


