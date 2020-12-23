#include<math.h>
#include<stdlib.h>
#include<stdint.h>


double numeratore(unsigned int n) {

	double num = pow((-1), n);
	return num;
}

double fattoriale(double z) {

	int i;
	double res = 1;
	for (i = 1; i <= z; ++i) {
		res *= i;
	}
	return res;
}

double denominatore(unsigned int n) {

	double y = ((2 * n) + 1);
	double den = fattoriale(y);
	return den;
}

double angolo(double x, unsigned int n) {

	double ang = pow(x, (2 * n) + 1);
	return ang;
}

double calcola_seno(double x){
	
	unsigned int k = 20;
	double seno = 0;
	for (unsigned int n = 0; n < k; ++n) {
		seno = seno + ((numeratore(n) / denominatore(n)) * angolo(x, n));
	}
	return seno;
}

int main(void){

	double pi = 3.14159265358979323846264338327950288;
	double x = pi / 3;
	double senx = calcola_seno(x);
	return 0;
}