#include <iostream>
#include <math.h>

using namespace std;

void ask();
void cateto(double, double, int);
void angulo(double, double, int);
void dos_angulos(double, double, double, int);

double side1, side2, side3, angle1, angle2, A, B, ANGLE1, ANGLE2;

int main(int argc, char const *argv[])
{
	
	ask();

	return 0;
}

void ask(){

	int option, option1;

	cout << "Triangle \n";
	cout << "\n1. find the side or hipotenuse \n";
	cout << "2. find side or hipotenuse with angle \n";
	cout << "3. find side or hipotenuse with two angle \n";
	cout << "\nChoose a option: "; cin >> option;

	switch(option){
		case 1:
			cout << "\nCalculate: \n";
			cout << "1. Calculate side \n";
			cout << "2. Calculate hipotenuse \n";
			cout << "\nChoose a option: "; cin >> option1;

			if (option1 == 1)
			{
				cout << "Hipotenuse: "; cin >> side1;
				cout << "Side: "; cin >> side2;
			}

			else{
				cout << "Side 1: "; cin >> side1;
				cout << "Side 2: "; cin >> side2;
			}

			cateto(side1, side2, option1);

			break;

		case 2:

			cout << "\nKnow side: " << endl;
			cout << "1. Adjecent" << endl;
			cout << "2. Opposite" << endl;
			cout << "\nChoose a option: "; cin >> option1;

			if (option1 == 1)
			{
				cout << "Side adjecent: "; cin >> side1;
			}

			else{
				cout << "Side opposite: "; cin >> side1;
			}

			cout << "Angle: "; cin >> angle1;

			angulo(side1, angle1, option1);

			break;

		case 3:

			cout << "1. Calculate x \n";
			cout << "2. Calculate y \n";
			cout << "\nChoose a option: "; cin >> option1;

			if (option1==1)
			{
				cout << "Angle 1: "; cin >> angle1;
				cout << "Angle 2: "; cin >> angle2;
				cout << "y: "; cin >> side3;
			}

			else{

				cout << "Angle 1: "; cin >> angle1;
				cout << "Angle 2: "; cin >> angle2;
				cout << "x: "; cin >> side3;
			}

			dos_angulos(angle1, angle2, side3, option1);

			break;

	}

}

void cateto(double side1, double side2, int option1){


	if (option1 == 1)
	{
		A = sqrt(pow(side1, 2) - pow(side2, 2));
		cout << "A = raiz(" << pow(side1, 2) << "-" << pow(side2, 2) << ")" << endl;
		cout << "Side: " << A;
	}
	else
	{

		A = sqrt(pow(side1, 2) + pow(side2, 2));
		cout << "Hipotenuse: " << A;
	}
}

void angulo(double side1, double angle1, int option1){

	
	ANGLE1 = (angle1*3.141592654)/180;

	if (option1 == 1)
	{
		A = side1*tan(ANGLE1);
		B = side1/cos(ANGLE1);
		cout << "Side opposite: " << A << endl;
		cout << "Hipotenuse: " << B << endl;
	}

	else
	{

		A = side1/tan(ANGLE1);
		cout << side1 << "/tan(" << angle1 << ")" << endl;
		B = side1/sin(ANGLE1);
		cout << "Side adjecent: " << A << endl;
		cout << "Hipotenuse: " << B << endl;
	}
}

void dos_angulos(double angle1, double angle2, double side3, int option1){

	ANGLE1 = (angle1*3.141592654)/180;
	ANGLE2 = (angle2*3.141592654)/180;


	if (option1==1)
	{
		A = (-side3/tan(ANGLE1))/(1/tan(ANGLE1)-1/tan(ANGLE2));
		cout << "\nValue of x: " << A;
	}

	else
	{
		A = side3*(1/tan(ANGLE2)-1/tan(ANGLE1))*tan(ANGLE1);
		cout << "\nValue of y: " << A;		
	}
}