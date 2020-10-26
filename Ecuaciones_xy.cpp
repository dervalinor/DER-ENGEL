/*Sie werden ein Programm für lösen die Gleichung erstellen:
aX + bY = c
dX + eY = f*/


//PROGRAM CORRECT 
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
	
	float a, b, c, d, e, f, option; //writen as float for have error in the number
	double X, Y, D, E;

	cout << "Program for test and find solve of two equations " << endl;
	cout << '\n';
	cout << "1. yes 2. no" << endl;
	cout << "Test a the solutions of the equations?: "; cin >> option;

	if (option == 1)
	{
		cout << "a: "; cin >> a;
		cout << "b: "; cin >> b;
		cout << "c: "; cin >> c;
		cout << "d: "; cin >> d;
		cout << "e: "; cin >> e;
		cout << "f: "; cin >> f;
		cout << "X: "; cin >> X;
		cout << "Y: "; cin >> Y;

		D = a*X + b*Y;
		E = d*X + e*Y;

		cout << '\n';

		if (D == c and E == f)

		{
			cout << "Answer: " << endl;
			cout << X << " and " << Y << " are solution of the equations" << endl;
		}

		else{
			cout << "Answer: " << endl;
			cout << X << " and " << Y << " are NOT solution of the equations" << endl;

		}


	}

	if (option == 2)
	{
		cout << "Solve the equations aX + bY = c, dX + eY = f " << endl;

		cout << "a: "; cin >> a;
		cout << "b: "; cin >> b;
		cout << "c: "; cin >> c;
		cout << "d: "; cin >> d;
		cout << "e: "; cin >> e;
		cout << "f: "; cin >> f;

		X = (e*c - b*f)/(a*e - d*b);
		Y = (a*f - d*c)/(a*e - d*b);

		cout << '\n';

		cout << "X: " << X << endl;
		cout << "Y: " << Y << endl;
	}
	
	return 0;
}