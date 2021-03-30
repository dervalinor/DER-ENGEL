#include <iostream>
#include <math.h>

using namespace std;

void ask();
void periodo_f(double);
void frecuencia_p(double);
void periodo_w(double, double);
void frecuencia_w(double, double);
void posicion(double, double, double);
void velocidad(double, double, double);
void aceleracion(double, double, double);

int opt, opt2;
double fr, w, p, X;
const double PI = 3.141592654;

int main(int argc, char const *argv[])
{
	ask();
	return 0;
}

void ask(){
	cout << "Movimiento oscilador armonico" << endl;
	cout << "\n";
	cout << "1. calcular el periodo" << endl;
	cout << "2. calcular frecuencia" << endl;
	cout << "3. calcular posicion" << endl;
	cout << "4. calcular velocidad " << endl;
	cout << "\n";
	cout << "Elegir una opcion: "; cin >> opt;

	switch(opt){
		case 1:
			cout << "\n1. calcular periodo a partir de la frecuencia"<< endl; 
			cout << "2. calcular periodo con frecuencia angular" << endl;
			cout << "\nElegir una opcion: "; cin >> opt2;

			if (opt2 == 1)
			{
				cout << "Frecuencia: "; cin >> fr;
				periodo_f(fr);
			} else if (opt2 == 2)
			{
				cout << "Masa: "; cin >> m;
				cout << "Constante: "; cin >> k;
				periodo_w(m, k);
			}
			break;

		case 2: 
			cout << "\n1. calcular frecuencia a partir del periodo" << endl;
			cout << "2. calcular frecuencia con la frecuencia angular" << endl;
			cout << "\nElegir una opcion: "; cin >> opt2;

			if (opt2 == 1)
			{
				cout << "Periodo: "; cin >> p;
				frecuencia_p(p);
			} else if (opt2 == 2)
			{
				cout << "Masa: "; cin >> m;
				cout << "Constante: "; cin >> k;
				frecuencia_w(m, k);
			}	

			break;

		case 3: 
			cout << "Amplitud: "; cin >> H;
			cout << "Frecuencia angular: "; cin >> w;
			cout << "Tiempo: "; cin >> t;
			cout << "Fase: "; cin >> ph;
			posicion(H, w, t, ph);
			break;

		case 4: 
			cout << "Amplitud: "; cin >> H;
			cout << "Frecuencia angular: "; cin >> w;
			cout << "Tiempo: "; cin >> t;
			cout << "Fase: "; cin >> ph;
			velocidad(H, w, t, ph);
			break;

		case 5: 
			cout << "Amplitud: "; cin >> H;
			cout << "Frecuencia angular: "; cin >> w;
			cout << "Tiempo: "; cin >> t;
			cout << "Fase: "; cin >> ph;		
			aceleracion(H, w, t, ph);
			break;
	}
}

void periodo_f(double fr){
	p = 1/fr;
	cout << "Periodo: " << p << endl;
}

void frecuencia_p(double p){
	f = 1/p;
}

void periodo_w(double m, double k){
	w = sqrt(k/m);

	p = (2*PI)/w;

	cout << "P = (2*" << PI << ")/" << w << endl;  

	cout << "Periodo: " << p << endl;
}

void frecuencia_w(double m, double k){
	w = sqrt(k/m);

	fr = w/(2*PI);	

	cout << "P = " << w << "/(2*" << PI << ")" << endl;

	cout << "Frecuencia: " << fr << endl;
}

void posicion(double H, double w, double t, double ph){
	X = H*cos(w*t + ph);
	cout << "\nPosition in the time " << t << " and with amplitude " << H << " is: " << endl;
	cout << "\nX = " << H << "*cos(" << w << "*" << t << "+" << ph << ")" << endl;
	cout << "X = " << H << "*cos(" << w*t + ph << ")" << endl;
	cout << "Position is: " << X << endl;
}

void velocidad(double H, double w, double t, double ph){
	X = - H*w*sin(w*t + ph);
	cout << "\nVelocity in the time " << t << " and with amplitude " << H << " is: " << endl;
	cout << "\nV = " << - H << "*" << w << "*sen(" << w << "*" << t << "+" << ph << ")" << endl;
	cout << "V = " << - H*w << "*sen(" << w*t + ph << ")" << endl;
	cout << "Velocity is:  " << X << endl; 

}

void aceleracion(double H, double w, double t, double ph){
	X = - H*pow(w, 2)*cos(w*t + ph);
	cout << "\nAcceleration in the time " << t << " and with amplitude " << H << " is: " << endl;
	cout << "a = " << - H << "(" << w << ")**2" << "*cos(" << w << "*" << t << "+" << ph << ")" << endl;
	cout << "a = " << - H << "*" << pow(w, 2) << "*cos(" << w*t + ph << ")" << endl;
	cout << "Acceleration is: " << X << endl;

}