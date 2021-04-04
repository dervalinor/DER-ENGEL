#include <iostream>
#include <math.h>

using namespace std;

void ask();
bool circunferencia(double, double, double, double);
void trigonometrica(double, double, double, double);
void encontrar(double, double);
void irreductible(int, int);

double R = 0;
int opt, A, B;

int main(int argc, char const *argv[])
{
	
	ask();

	return 0;
}

void ask(){

	double x1, x2, y1, y2;//IMPORTANT IS BEST DECLARATE VARIABLE FOR FUNCTION INSIDE OF FUNCTION MAIN OR FUNCTION ASK 

	cout << "Circunference and function trigonometry P(a/b , c/d)\n";
	cout << "\n1. Review if a point belong to the circunference\n";
	cout << "2. Obtain function trigonometry of points of the circunference\n";
	cout << "3. Find the value of x or y for circunference unitary\n";

	cout << "\nChoose an option: "; cin >> opt;

	switch(opt){

		case 1: 
			cout << "\n";
			cout << "x1: "; cin >> x1;
			cout << "x2: "; cin >> x2;
			cout << "y1: "; cin >> y1;
			cout << "y2: "; cin >> y2;

			cout << "\n";

			cout << "R = (" <<  x1 << "/" << x2 << ")**2"  << " + (" << y1 << "/" << y2 << ")**2" << endl;
			cout << "R = " << pow(x1, 2) << "/" << pow(x2, 2) << " + " << pow(y1, 2) << "/" << pow(y2, 2) << endl;


			cout << "R = (" << pow(x1, 2) << "*" << pow(y2, 2) << " + " << pow(x2, 2) << "*" << pow(y1, 2) << ")/(" << pow(x2, 2) << "*" << pow(y2, 2) << ")" << endl;
			cout << "R = (" << pow(x1, 2)*pow(y2, 2) << " + " << pow(x2, 2)*pow(y1, 2) << ")/(" << pow(x2, 2)*pow(y2, 2) << ")" << endl;
			cout << "R = (" << pow(x1, 2)*pow(y2, 2) + pow(x2, 2)*pow(y1, 2) << ")/(" << pow(x2, 2)*pow(y2, 2) << ")" << endl;					  					  
			
			A = pow(x1, 2)*pow(y2, 2) + pow(x2, 2)*pow(y1, 2);
			B = pow(x2, 2)*pow(y2, 2);

			irreductible(A, B);

			cout << "Result = " << (pow(x1, 2)/pow(x2, 2)) + (pow(y1, 2)/pow(y2, 2)) << endl;			

			if (circunferencia(x1, x2, y1, y2) == true)
			{
				cout << "The point P(" << x1 << "/" << x2 << "," << y1 << "/" << y2 << ") belong to the circunference unitary\n";
			}

			else {
				cout << "The point P(" << x1 << "/" << x2 << "," << y1 << "/" << y2 << ") NOT belong to the circunference unitary\n";
			}
			

			break;
		case 2: 
			cout << "\n";
			cout << "x1: "; cin >> x1;
			cout << "x2: "; cin >> x2;
			cout << "y1: "; cin >> y1;
			cout << "y2: "; cin >> y2;
			trigonometrica(x1, x2, y1, y2);		
			break;

		case 3:
			cout << "\n";
			cout << "Value x1 or y1: "; cin >> x1;
			cout << "Value  x2 or y2: "; cin >> x2;
			encontrar(x1, x2); 
			break; 
	}
}

bool circunferencia(double x1, double x2, double y1, double y2){
	
	bool band = false;

	R = (pow(x1, 2)/pow(x2, 2)) + (pow(y1, 2)/pow(y2, 2)); 

	if (R > 0.99 and R <= 1)
	{
		band = true;
	}
                                      
	return band;
}

void trigonometrica(double x1, double x2, double y1, double y2){
	cout << "Function trigonometry of the point P(" << x1 << "/" << x2 << "," << y1 << "/" << y2 << "): \n";
	if (circunferencia(x1, x2, y1, y2) == true)
	{
		cout << "\n1. SinA = y = " << y1 << "/" << y2 << " = " << y1/y2 << endl;
		cout << "2. cosA = x = " << x1 << "/" << x2 << " = " << x1/x2 << endl;
		cout << "3. tanA = " << y1 << ":" << y2 << "/" << x1 << ":" << x2 << " = (" << y1 << "*" << x2 << ")/(" << y2 << "*" << x1 << ")" << (y1*x2)/(y2*x1) << endl;
		cout << "4. cotA = " << x1 << ":" << x2 << "/" << y1 << ":" << y2 << " = (" << y1  << "*" << x2 << ")/(" << y2 << "*" << x1 << ") = " << (y1*x2)/(y2*x1) << endl;
		cout << "5. secA = 1/(" << x1 << ":" << x2 << ") = " << x2 << "/" << x1 << " = " << x2/x1 << endl;
		cout << "6. cscA = 1/(" << y1 << ":" << y2 << ") = "<< y2 <<"/" << y1 << " = " <<  y2/y1 << endl;
	}

	else {
		cout << "can NOT find function trigonometry because P(" << x1 << "/" << x2 << "," << y1 << "/" << y2 << ") NOT belong to the circunference unitary\n";
	}
}

void encontrar(double x1, double x2){

	R = sqrt(1 - pow(x1, 2)/pow(x2, 2));
	cout << "R = sqrt( 1 - (" << x1 << "/" << x2 << ")**2)" << endl;
	cout << "R = sqrt( 1 - " << pow(x1, 2) << "/" << pow(x2, 2)<< ")" << endl;
	cout << "R = sqrt({" << pow(x2, 2)<< " - " << pow(x1, 2) << "}/" << pow(x2, 2) << ")" << endl;
	cout << "R = sqrt({" << pow(x2, 2) -  pow(x1, 2) << "}/" << pow(x2, 2) << ")" << endl;
	cout << "R = " << sqrt(pow(x2, 2) -  pow(x1, 2)) << "/" << sqrt(pow(x2, 2)) << endl;
	A = sqrt(pow(x2, 2) -  pow(x1, 2));
	B = sqrt(pow(x2, 2));

	irreductible(A, B);

	cout << "\n";

	cout << "Value: " << R << endl;
}

void irreductible(int A, int B) {

  for (int i = 1; i < 10; i++) {
    if (A%i == 0 and B%i == 0) {
      std::cout << "  = " << A/i << "/" << B/i;
    }
  }

} 