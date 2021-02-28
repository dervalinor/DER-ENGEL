#include <iostream>
#include <math.h>

using namespace std;

void enter_data();
void area(double, double, int);
void perimetro(double vektor[], int);

int opt, opt1;
double A, B, Area = 0, vektor[4], n;

int main(int argc, char const *argv[])
{
	enter_data();
	return 0;
}

void enter_data(){
	cout << "Calculate: " << endl;
	cout << "\n1. Area" << endl;
	cout << "2. Perimeter" << endl;
	cout << "\nChoose an option: "; cin >> opt;

	switch(opt){
		case 1:
			cout << '\n';
			cout << "Calculate the area: " << endl;
			cout << "\n1. Rectangle" << endl; 
			cout << "2. Triangle" << endl;
			cout << "Choose an option: "; cin >> opt1;
			cout << "\n";

			if (opt1 == 1)
			{
				cout << "Area of rectangle of sides A and B: " << endl;
				cout << "A: "; cin >> A;
				cout << "B: "; cin >> B;
			}
			else if(opt1 == 2){
				cout << "Area of triangle of sides A and B: " << endl;
				cout << "A: "; cin >> A;
				cout << "B: "; cin >> B;					
			}

			area(A, B, opt1);
			break;

		case 2:
			cout << '\n';
			cout << "Calculate the perimeter: " << endl;
			cout << "\n1. Parallelogram" << endl;
			cout << "2. Triangle" << endl;
			cout << "Choose an option: "; cin >> opt1;
			cout << "\n";

			if (opt1 == 1)
			{
				cout << "Perimeter of parallelogram of sides A, B, C and D: " << endl;
				n = 4;
				for (int i = 0; i < n; ++i)
				{
					cout << "Side " << i << ": "; cin >> vektor[i];
				}

			}
			else if(opt1 == 2){
				cout << "Perimeter of triangle of sides A, B and C: " << endl;
				n = 3;
				for (int i = 0; i < 3; ++i)
				{
					cout << "Side " << i << ": "; cin >> vektor[i];
				}					
			}

			perimetro(vektor, n);

			break;

	}
}

void area(double A, double B, int opt1){
	if (opt1 == 1)
	{
		Area = A*B;

		cout << "Area of rectangle: " << endl;
		cout << '\n';
		cout << "Area = " << A << "*" << B << endl;
		cout << "Area = " << Area << endl;		
	}

	else if (opt1 == 2) {
		Area = (A*B)/2;		
		cout << "Area of triangle: " << endl;
		cout << '\n';
		cout << "Area = (" << A << "*" << B << ")/2"<< endl;
		cout << "Area = (" << A*B << ")/2" << endl;
		cout << "Area = " << Area << endl;		
	}
}

void perimetro(double vektor[], int n){
	Area = 0;
	for (int i = 0; i < n; ++i)
	{
		Area = Area + vektor[i];
		if (i == 0)
		{
		 	cout << "Perimeter = " << vektor[i] << " + ";
		}	
		else if (i > 0 and i < n - 1){
			cout << vektor[i] << " + ";
		} else if (i == n - 1)
		{
			cout << vektor[i] << endl;
		}	
	}

	cout << "Perimeter = " << Area << endl;
}