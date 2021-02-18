#include<iostream>
#include<math.h>

using namespace std;

double A, B;

class Number{
  private:
    double x, y, z, t;

  public:
    Number(double, double, double, double);
    ~Number();
    void sum();
    void multiply();
    void divide();
    void norma();
};

Number::Number(double a, double b, double c, double d){
  x = a;
  y = b;
  z = c;
  t = d;
}

Number::~Number(){
}

void Number::sum(){

  A = x + z;
  B = y + t;

  cout << "Sum: " << A << " + " << B << "i" << endl;
}

void Number::multiply(){

  A = x*z - y*t;
  B = x*t + y*z;

  cout << "Multiplication: " << A << " + " << B  << "i" << endl;
}

void Number::divide(){

  A = (x*z + t*y)/(pow(z, 2) + pow(t, 2));
  B = (-x*t + y*z)/(pow(z, 2) + pow(t, 2));

  cout << "Division: " << A << " + " << B << "i" << endl;
}

int main(){
  
  double X, Y, Z, T;

  cout << "Complex number: " << endl;

  cout << "\n1. Sum" << endl;
  cout << "2. Multiply" << endl;
  cout << "3. Divide" << endl;
  
  cout << "\nComplex number 1: " << endl;
  cout << "Part real: "; cin >> X;
  cout << "Part imaginary: "; cin >> Y;
  cout << "\nComplex number 2: " << endl;
  cout << "Part real: "; cin >> Z;
  cout << "Part imaginary: "; cin >> T;

  Number n1(X, Y, Z, T);
  n1.sum();
  n1.multiply();
  n1.divide();

  return 0;
}
