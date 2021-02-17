/*Create a program for problem of acceleration constant and velocity constant
CONVERTIR UNIDADES DE MEDIDA!!*/
#include <iostream>
#include <math.h>

using namespace std;

void ask();
void velocidad_constante();
void aceleracion_constante();

double x, v, t;
int opt, opt2;

int main(int argc, char const *argv[])
{
	ask();
	return 0;
}

void ask(){
	cout << "1. Constant velocity" << endl;
	cout << "2. Constant acceleration" << endl;
	cout << "Option: "; cin >> opt;

	switch(opt){
		case 1: 
			velocidad_constante();
			break;
		case 2: 
			aceleracion_constante();
			break;
	}
}

void velocidad_constante(){
	cout << "\nCalculate: " << endl; 
	cout << "1. Velocity" << endl;
	cout << "2. Distance" << endl;
	cout << "3. Time" << endl;
	cout << "Choose an option: "; cin >> opt2;

	switch(opt2){
		case 1: 
			cout << "Distance: "; cin >> x;
			cout << "Time: "; cin >> t;
			v = x/t;
			cout << "V = " << x << "/" << t << endl;
			cout << "Velocity: " << v << endl;
			break;
		case 2:
			cout << "Velocity: "; cin >> v;
			cout << "Time: "; cin >> t;
			x = v*t;
			cout << "X = " << v << "*" << t << endl;
			cout << "Distance: " << x << endl;
			break;
		case 3: 
			cout << "Velocity: "; cin >> v;
			cout << "Distance: "; cin >> x;
			t = x/v;
			cout << "t = " << x << "/" << v << endl;
			cout << "Time: " << t << endl;
			break; 
	}
}

void aceleracion_constante(){

}