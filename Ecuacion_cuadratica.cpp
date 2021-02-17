#include <iostream>
#include <math.h>

using namespace std;

void ask();
void equation(double, double, double);

double a, b, c;

int main(){

  ask();

  return 0;
}

void ask(){
  
  cout << "\nFind the solution to the square equation: AX^2 + BX + C = 0\n";
  cout << "\nA: "; cin >> a;
  cout << "B: "; cin >> b;
  cout << "C: "; cin >> c;

  equation(a, b, c);
}

void equation(double a, double b, double c){

  double x1 = 0, x2 = 0, D = 0;

  D = pow(b, 2) - 4*a*c;

  if(D >= 0){
  

     x1 = (-b + sqrt(D))/2*a;
     x2 = (-b - sqrt(D))/2*a;

     cout << "\nSolutions of the equation is " << x1 << " and " << x2 << endl;
  }

  else {

    cout << "\nThe square equation haven't solution in the numbers real \n";
  }
}
