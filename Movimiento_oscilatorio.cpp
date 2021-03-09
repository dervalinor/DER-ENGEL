#include <iostream>
#include <math.h>

using namespace std;

class Hooke
{
	private:
		double A, B, C;
	public:
		Hooke(double, double);
		~Hooke();
		void force();
		void constant();
		void distance();
};

Hooke :: Hooke(double a, double b){
	A = a;
	B = b;
} 

Hooke :: ~Hooke(){
}

void Hooke :: force(){
	C = -A*B;
	cout << "F = " << - A << "*" << B << endl; 
	cout << "Force: " << C << endl;
}

void Hooke :: constant(){
	C = A/B;
	cout << "Constant: " << C << endl;
}

void Hooke :: distance(){
	C = A/B;

	cout << "Distance: " << C << endl;
}

class Periodo
{
	private:
		double E, F, G;
	public:
		Periodo(double, double);
		Periodo(double);
		~Periodo();
		void period_NoW();
		void period_W();
};

Periodo :: Periodo(double _E, double _F){
	E = _E;
	F = _F;
}

Periodo :: Periodo(double a){
	G = a;
}

Periodo :: ~Periodo(){
}

void Periodo :: period_NoW(){
	cout << "Period: " << 1/G << endl;
}

void Periodo :: period_W(){
	G = 2*3.141592654*sqrt(E/F);
	cout << "Period: " << G << endl;
}

class Ecuacion
{
	private:
		double X, H, w, t, ph;
	public:
	Ecuacion(double, double, double, double);
	~Ecuacion();
	void posicion();
	void velocidad();
	void aceleracion();
};

Ecuacion::Ecuacion(double _H, double _w, double _t, double _ph){
	H =_H;
	w = _w;
	t = _t;
	ph = _ph;
}

Ecuacion::~Ecuacion(){
} 

void Ecuacion::posicion(){
	X = H*cos(w*t + ph);
	cout << "\nPosition in the time " << t << " and with amplitude " << H << " is: " << endl;
	cout << "\nX = " << H << "*cos(" << w << "*" << t << "+" << ph << ")" << endl;
	cout << "X = " << H << "*cos(" << w*t + ph << ")" << endl;
	cout << "Position is: " << X << endl;
}

void Ecuacion::velocidad(){
	X = - H*w*sin(w*t + ph);
	cout << "\nVelocity in the time " << t << " and with amplitude " << H << " is: " << endl;
	cout << "\nV = " << - H << "*" << w << "*sen(" << w << "*" << t << "+" << ph << ")" << endl;
	cout << "V = " << - H*w << "*sen(" << w*t + ph << ")" << endl;
	cout << "Velocity is:  " << X << endl; 
}

void Ecuacion::aceleracion(){
	X = - H*pow(w, 2)*cos(w*t + ph);
	cout << "\nAcceleration in the time " << t << " and with amplitude " << H << " is: " << endl;
	cout << "a = " << - H << "(" << w << ")**2" << "*cos(" << w << "*" << t << "+" << ph << ")" << endl;
	cout << "a = " << - H << "*" << pow(w, 2) << "*cos(" << w*t + ph << ")" << endl;
	cout << "Acceleration is: " << X << endl;
 }

int main(int argc, char const *argv[])
{
	

	cout << "Oscillatory Motion" << endl;


	return 0;
}