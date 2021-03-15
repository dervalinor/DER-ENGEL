#include <iostream>
#include <math.h>

using namespace std;

void enter_data();
void formula_impirica(double, double, double);
void pendiente(double, double, double, double);
void recta(double, double, double, double);

int opt;
double m = 0, i = 0, j = 0;

int main(int argc, char const *argv[])
{
	enter_data();
	return 0;
}

void enter_data(){
	double x1, x2, y1, y2, A, B, C;
	cout << "Equation of the stright line" << endl;
	cout << "\n1. Emplicit formula to explicit" << endl;
	cout << "2. Slope of the line" << endl;
	cout << "3. Stright line of two points" << endl;

	cout <<"\nChoose an option: "; cin >> opt;

	switch(opt){
		case 1: 
			cout << "Stright line emplicit to explicit of Ax + By + C = 0" << endl;
			cout << "\nA: "; cin >> A;
			cout << "B: "; cin >> B;
			cout << "C: "; cin >> C;
			formula_impirica(A, B, C);
			break;

		case 2: 
			cout << "Find the slope of the points (x1, y1) and (x2, y2)" << endl;
			cout << "\nx1: "; cin >> x1;
			cout << "x2: "; cin >> x2;
			cout << "y1: "; cin >> y1;
			cout << "y2: "; cin >> y2;
			pendiente(x1, x2, y1, y2);
			break;

		case 3: 
			cout << "Stright line of the (x1, y1) and (x2, y2)" << endl;
			cout << "\nx1: "; cin >> x1;
			cout << "x2: "; cin >> x2;
			cout << "y1: "; cin >> y1;
			cout << "y2: "; cin >> y2;
			recta(x1, x2, y1, y2);			
			break;
	}		
}

void formula_impirica(double A, double B, double C){
	i = -A/B;
	j = -C/B;
	cout << "Y = (" << -A << "/ " << B << ")" << "X" << -C << "/" << B << endl;
	cout << "Y = " << i << "X" << " + " << j << endl;
}

void pendiente(double x1, double x2, double y1, double y2){

	cout << "m = (" << y2 << " - " << y2 << ")/(" << x2 << " - " << x1 << ")";
	cout << "m = (" << y2 - y1 << ")/(" << x2 - x1 << ")" << endl;
	cout << "m = " << m << endl;
}

void recta(double x1, double x2, double y1, double y2){
	m = (y2 - y1)/(x2 - x1);
	cout << "y = " << m << "x" << " + ("<< -m*x1 + y1 << ")"<< endl; 
}