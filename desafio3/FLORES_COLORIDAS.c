#include <stdio.h>
#include <math.h>

#define pi 3.1415926535897
double sT, sCircOUT, sCircIN;

void sCalc(double a, double b, double c) {
	double rCircIN;
	double rCircOUT, semiP;

	// http://www.mathopenref.com/trianglecircumcircle.html
	rCircOUT = ((a * b * c) / sqrt((a + b + c) * (b + c - a) * (c + a - b) * (a + b - c)));
	
	// Por Herao
	semiP = (a + b + c) / 2;
	sT = sqrt(semiP * ((semiP - a) * (semiP - b) * (semiP - c)));

	// S = p * r >>> r = S / p
	rCircIN = sT / semiP;


	sCircOUT = (pow(rCircOUT, 2) * pi) - sT;
	sCircIN = pow(rCircIN, 2) * pi;
	sT = sT - sCircIN;

}

int main () {
	double a, b, c;

	while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
	{
		sCalc(a, b, c);
		printf("%.4lf %.4lf %.4lf\n", sCircOUT, sT, sCircIN);
	}

  return 0;
}