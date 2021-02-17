#include <iostream>
#include <math.h>

using namespace std;

void ask();
bool circunferencia(double, double);
void trigonometrica(double, double);
void encontrar(double);

double x, y, R;
int opt;

int main(int argc, char const *argv[])
{
	
	ask();

	return 0;
}

void ask(){

	cout << "Circunference and function trigonometry\n";
	cout << "\n1. Review if a point belong to the circunference\n";
	cout << "2. Obtain function trigonometry of points of the circunference\n";
	cout << "3. Find the value of x or y for circunference unitary\n";

	cout << "\nChoose an option: "; cin >> opt;

	switch(opt){

		case 1: 
			cout << "\n";
			cout << "x: "; cin >> x;
			cout << "y: "; cin >> y;
			

			if (circunferencia(x, y) == true)
			{
				cout << "The point P(" << x << "," << y << ") belong to the circunference unitary\n";
			}

			else {
				cout << "The point P(" << x << "," << y << ") NOT belong to the circunference unitary\n";
			}

			break;
		case 2: 
			cout << "\n";
			cout << "x: "; cin >> x;
			cout << "y: "; cin >> y;
			trigonometrica(x, y);		
			break;

		case 3:
			cout << "\n";
			cout << "Value of x or y: \n";
			encontrar(x); 
			break; 
	}
}

bool circunferencia(double x, double y){
	
	bool band = false;

	R = pow(x, 2) + pow(y, 2);

	if (R == 1) /*case for number of three tenth*/
	{
		band = true;
	}

	return band;
}

void trigonometrica(double x, double y){
	cout << "Function trigonometry of the point P(" << x << "," << y << "): \n";
	if (circunferencia(x, y) == true)
	{
		cout << "\n1. SinA = " << y << endl;
		cout << "2. cosA = " << x << endl;
		cout << "3. tanA = " << y/x << endl;
		cout << "4. cotA = " << x/y << endl;
		cout << "5. secA = " << 1/x << endl;
		cout << "6. cscA = " << 1/y << endl;
	}

	else {
		cout << "can NOT find function trigonometry because P(" << x << "," << y << ") NOT belong to the circunference unitary\n";
	}
}

void encontrar(double x){
	R = sqrt(1 - pow(x, 2));
	cout << "Value: " << R << endl;
}