#include <iostream>
#include <math.h>

using namespace std;

void ask();
void fuerza(double, double, double);
void distancia(double, double, double);
void carga(double, double, double);

double F, q1, q2, r;
int opcion;

int main(int argc, char const *argv[])
{
	ask();
	return 0;
}

void ask(){
	cout << "Coulomb law" << endl;
	cout << "\n1. Calculate force" << endl;
	cout << "2. Calculate charge 2" << endl;
	cout << "3. Calculate distance" << endl;
	cout << "Choose an option: "; cin >> opcion;
	switch (opcion){
		case 1: 
			cout << "Charge 1: "; cin >> q1;
			cout << "Charge 2: "; cin >> q2;
			cout << "Distance: "; cin >> r;
			fuerza(q1, q2, r);
			break;
		case 2: 
			cout << "Force: "; cin >> F;
			cout << "Distance: "; cin >> r;
			cout << "charge 1: "; cin >> q1;
			carga(F, r, q1);
			break;

		case 3: 
			cout << "Force: "; cin >> F;
			cout << "Charge 1: "; cin >> q1;
			cout << "Charge 2: "; cin >> q2;
			distancia(F, q1, q2);
			break;
	}
}

void fuerza(double q1, double q2, double r){
	F = (9e9*q1*q2)/pow(r, 2);
	cout << "\nF = " << "9*10**9(" << q1 << ")" <<"(" << q2 << ")/(" << r << ")**2" << endl;
	cout << "Force: " << F << endl;
}


void carga(double F, double r, double q1){
	q2 = (pow(r ,2)*F)/(9e9*q1);
	cout << "\nq2 = (" << r << "**2 * " << F << ")/(9e9*" << q1 << ")" << endl;
	cout << "Charge: " << q2 << endl; 
}

void distancia(double F, double q1, double q2){

	if (q1 < 0)
	{
		q1 = -q1;
	}

	if (q2 <0)
	{
		q2 = -q2;
	}

	r = sqrt((9e9*q1*q2)/F);
	cout << "\nr = raiz((9e9*" << q1 << "*" << q2 << "/" << F << ")"<< endl;
	cout << "Distance: " << r << endl;
} 