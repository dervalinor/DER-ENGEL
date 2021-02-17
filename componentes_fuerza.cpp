#include<iostream>
#include<math.h>

using namespace std;

void ask();
void component(double, double);

double f, angle;

int main(){

  ask();
  
  return 0;
}

void ask(){
  cout << "Find the component of force" << endl;
  cout << "\nForce:  "; cin >> f;
  cout <<"Angle: "; cin >> angle;
  
  component(f, angle);
}

void component(double f, double angle){
  double fx, fy, ANGLE;
  
  ANGLE = (angle*3.141592654)/180;
  fx = f*cos(ANGLE);
  fy = f*sin(ANGLE);

  cout << "Fx: " << fx << endl;
  cout << "Fy: " << fy << endl;
}
