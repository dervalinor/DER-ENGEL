#include <iostream>
#include <math.h>

using namespace std;

void data_enter();
double cos_side(double, double, double);
double cos_angle(double, double, double);
double sen_side(double, double, double);
double sen_angle(double, double, double);
double find_angle(double, double);

int opt, opt1;
double A, B, C, D, angle, angle1, angle2;

int main(int argc, char const *argv[])
{
	data_enter();
	return 0;
}

void data_enter(){
	cout << "Theorem of sine and cosine" << endl;

	cout << "\n1. Theorem of cosine" << endl;
	cout << "2. Theorem of sine" << endl;
	cout << "3. Find the angle" << endl;

	cout << "\nChoose an option: "; cin >> opt;

	switch(opt){
		case 1:

			cout << "\n1. Value of the side A, B and angle C for calculate the side D" << endl;
			cout << "2. Value of the side A, B and D for calculate the angle C: " << endl;
			cout << "\nChoose an option: "; cin >> opt1;

			if (opt1 == 1)
			{
				cout << "A: "; cin >> A;
				cout << "B: "; cin >> B;
				cout << "Angle C: "; cin >> C;
				//	D = sqrt(pow(A, 2) + pow(B, 2) - 2*A*B*cos(Rad));
				cout << "\n";
				cout << "D = sqrt(" << A << "**2" << " + " << B << "**2" << " - 2 *" << A << "*" << B << "*cos(" << C << "))" << endl;
				cout << "D = sqrt(" << pow(A, 2)  << " + " << pow(B, 2) << " - " << 2*A*B << "*cos(" << C <<")" << ")" << endl;
				cout << "\nSide D: " << cos_side(A, B, C);
			}

			else if (opt1 == 2)
			{
				cout << "A: "; cin >> A;
				cout << "B: "; cin >> B;
				cout << "D: "; cin >> D;
				//C = (pow(A, 2) + pow(B, 2) - pow(D, 2))/(2*A*B);	
				cout << "C = acos(" << A << "**2  + " << B << "**2" << " - " << D << "**2)/(2*" << A << "*" << B << ")" << endl;
				cout << "C = acos(" << pow(A, 2) << " + " << pow(B, 2) << " - " << pow(D, 2) << ")/(2*" << A << "*" << B << ")" << endl;
				cout << "C = acos(" << pow(A, 2) + pow(B, 2) - pow(D, 2) << ")/(" << 2*A*B << ")" << endl;
				cout << "\nAngle C: " << cos_angle(A, B, D);

			}

			break;

		case 2:
			cout << "\nTheorem of sine sinA/B = sinC/D" << endl; 
			cout << "\n1. Calculate the value of side D" << endl;
			cout << "2. Calculate the angle C" << endl;
			cout << "\nChoose an option: "; cin >> opt1;
			if (opt1==1)
			{
				cout << "\n";
				cout << "Angle A: "; cin >> A;
				cout << "Side B: "; cin >> B;
				cout << "Angle C: "; cin >> C;
				//	D = (sin(C)*B)/sin(A);
				cout << "\n";
				cout << "D = (sin("<< C << ")*" << B << ")/sin(" << A << ")" << endl;
				cout << "side D: " << sen_side(A, B, C);
			}

			if (opt1 == 2)
			{
				cout << "\n";
				cout << "Angle A: "; cin >> A;
				cout << "B: "; cin >> B;
				cout << "D: "; cin >> D;
				//	C = (D*sin(A))/B;
				cout << "\n";
				cout << "C = asin(" << D << "*" << "sin(" << A << ")/" << B << endl;
				cout << "Angle C: " << sen_angle(A, B, D);
			}

			break;

			case 3: 
				cout << "Angle A: "; cin >> A;
				cout << "Angle B: "; cin >> B;
				cout << "\n";
				cout << "Angle = " << 180 << " - " << A  << " - " << B << endl;
				cout << "Angle = " << 180 - A - B << endl;
				cout << "Angle = " << find_angle(A, B);
				break;
	}

}

double cos_side(double A, double B, double C){
	double Rad;

	Rad = (C*3.141592654)/180;

	D = sqrt(pow(A, 2) + pow(B, 2) - 2*A*B*cos(Rad));

	return D;
}

double cos_angle(double A, double B, double D){

	C = (pow(A, 2) + pow(B, 2) - pow(D, 2))/(2*A*B);

	angle = acos(C)*180/3.141592654;

	return angle;
}

double sen_side(double A, double B, double C){
	
	angle1 = A*3.141592654/180;
	angle2 = C*3.141592654/180;	

	D = (sin(angle2)*B)/sin(angle1);

	return D;
}

double sen_angle(double A, double B, double D){
	
	angle1 = A*3.141592654/180;	
	C = (D*sin(angle1))/B;
	
	angle = asin(C)*180/3.141592654;

	return angle;
}

double find_angle(double A, double B){
	C = 180-A-B;

	return C;
}