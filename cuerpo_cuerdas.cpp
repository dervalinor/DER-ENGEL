#include<iostream>
#include<math.h>

using namespace std;

void ask();
void tension(double, double, double);

double angle1, angle2, mass;

int main(){

  ask();

  return 0;
}

void ask(){
  cout << "Find the tension in equilibrium" << endl;
  cout <<"\nAngle 1: "; cin  >> angle1;
  cout <<"Angel 2: "; cin >> angle2;
  cout <<"weight: "; cin >> mass;

  tension(angle1, angle2, mass);
}

void tension(double angle1, double angle2, double w){
  double f1, f2, f3, ANGLE1, ANGLE2;
  
  ANGLE1 = (angle1*3.141592654)/180;
  ANGLE2 = (angle2*3.141592654)/180;

  f2 = w/(sin(ANGLE2) - cos(ANGLE2)*tan(ANGLE1));
  f1 = -f2*cos(ANGLE2)/cos(ANGLE1);
  f3 = w;

  cout << "Result: " << endl;
  cout << "\nTension 2: " << endl;

  cout << "T2 = " << w << "N/(" << "sin(" << angle2 << ") - " << "cos(" << angle2 << ")*tan(" << angle1 <<"))" << endl;
  cout << "T2 = " << f2 << endl;
  cout << '\n';

  cout << "\nTension 1: " << endl;
  cout << "f1 = -" << f2 << "N" << "*cos(" << angle2 << ")/" << "cos(" << angle1 << ")" << endl;
  cout << "f1 = " << f1 << endl;
  cout << "\n";

  cout << "\nTension 3: " << endl;
  cout << "f3 = " <<  w  << "N" << endl;

}