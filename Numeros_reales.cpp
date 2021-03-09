#include <iostream>
#include <math.h>

using namespace std;

void enter_data();
void potencia(double, int);
void suma_fraccion(double, double, double, double);
void mult_fraccion(double, double, double, double);
void div_fraccion(double, double, double, double);
void irreductible(int, int);
void mayor_fraccion(double, double, double, double);

double a, b, c, d, A, B;
int opt, n;

int main(int argc, char const *argv[])
{
	enter_data();
	return 0;
}

void enter_data(){
	cout << "Operaciones con numeros reales" << endl;
	cout << "\n1- Potencia" << endl;
	cout << "2- suma de fracciones" << endl;
	cout << "3- multiplicacion de fracciones" << endl;
	cout << "4- division de fracciones" << endl;
	cout << "5- mayor fraccion" << endl;

	cout << "\nChoose an option: "; cin >> opt;

	switch(opt){
		case 1: 
			cout << "\nNumero: "; cin >> a;
			cout << "Potencia: "; cin >> n;
			potencia(a, n);
			break;

		case 2: 
			cout << "\nSuma de la fraccion a/b + c/d" << endl;
			cout << "a: "; cin >> a;
			cout << "b: "; cin >> b;
			cout << "c: "; cin >> c;
			cout << "d: "; cin >> d;
			suma_fraccion(a, b, c, d);
			break;

		case 3: 
			cout << "\nMultiplicacion de la fraccion a/b * c/d" << endl;
			cout << "a: "; cin >> a;
			cout << "b: "; cin >> b;
			cout << "c: "; cin >> c;
			cout << "d: "; cin >> d;
			mult_fraccion(a, b, c, d);
			break;

		case 4: 
			cout << "\nDivision de la fraccion a/b : c/d" << endl;
			cout << "a: "; cin >> a;
			cout << "b: "; cin >> b;
			cout << "c: "; cin >> c;
			cout << "d: "; cin >> d;
			div_fraccion(a, b, c, d);
			break;

		case 5:
			cout << "\nEncontrar la mayor fraccion" <<  endl;
			cout << "a: "; cin >> a;
			cout << "b: "; cin >> b;
			cout << "c: "; cin >> c;
			cout << "d: "; cin >> d;
			mayor_fraccion(a, b, c, d);
			break; 
	}
}

void potencia(double a, int n){
	A = 1;
	for (int i = 0; i < n; ++i)
	{
		A = A*a;
		cout << "*" << a;
	}

	cout << a << "**" << n << ": " << A << endl;
}

void suma_fraccion(double a, double b, double c, double d){

	cout << "\nX = " << a << "/" << b << " + " << c << "/" << d << endl;
	cout << "X = " << "[(" << a << "*" << d << ") + (" << b << "*" << c << ")]/" << b << "*" << d << endl;
	cout << "X = " << "[" << a*d  << " + " << b*c << "]/" << b*d << endl;
	cout << "X = " << "[" << a*d + b*c << "]/" << b*d << endl;
	A = a*d + b*c;
	B = b*d;
  	irreductible(A, B);
}

void mult_fraccion(double a, double b, double c, double d){

	cout << "\nX = (" << a << "/" << b << ") * (" << c << "/" << d << ")" << endl;
	cout << "X = (" << a << "*" << c << ")/(" << b << "*" << d << ")" << endl;
	cout << "X = (" << a*c << ")/(" << b*d << ")" << endl;  
	A = a*c;
	B = b*d;
  	irreductible(A, B);
}

void div_fraccion(double a, double b, double c, double d){
	cout << "\nX = (" << a << "/" << b << ") : (" << c << "/" << d << ")" << endl;
	cout << "X = (" << a << "*" << d << ")/(" << b << "*" << c << ")" << endl;
	cout << "X = " << a*d << "/" << b*c << endl;
	A = a*d;
	B = b*c;
  	irreductible(A, B);
}  

void irreductible(int A, int B) {

  for (int i = 1; i < 10; i++) {
    if (A%i == 0 and B%i == 0) {
      std::cout << "Fraction is: " << A/i << "/" << B/i << endl;
    }
  }

}

void mayor_fraccion(double, double, double, double){
	if (a/b > c/d)
	{
		cout << "La fraccion " << a << "/" << b << " > " << c << "/" << d << endl;
	} 

	if(a/b < c/d){
		cout << "La fraccion " << a << "/" << b << " < " << c << "/" << d << endl;
	} else {
		cout << "La fraccion " << a << "/" << b << " = " << c << "/" << d << endl;		
	}
}