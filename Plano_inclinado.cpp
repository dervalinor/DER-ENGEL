/*Inclined Plane of two mass hold for string of tension T*/
#include <iostream>
#include <math.h>

using namespace std;

void ask();
void mass_acceleration(double, double, double);

double FN, u, angle, Rad, m, a, T;

int main(int argc, char const *argv[])
{
	
	ask();

	return 0;
}

void ask(){

	cout << "Inclined Plane for find mass, acceleration and tension: " << endl;

	cout << "\nNormal force: "; cin >> FN;
	cout << "Coefficient: "; cin >> u;
	cout << "Angle: "; cin >> angle;

	mass_acceleration(FN, u, angle);
}

void mass_acceleration(double FN, double u, double angle){


	Rad = (angle*3.141592654)/180;

	m = (FN)/(9.8*cos(Rad));

	a = 9.8*(1 + sin(Rad) - u*cos(Rad))/2;

	T = m*(9.8 - a);

	cout << "\nResult: " << endl;

	cout << "Mass: " << m << endl;
	cout << "Acceleration: " << a << endl;
	cout << "Tension: " << T << endl;
}