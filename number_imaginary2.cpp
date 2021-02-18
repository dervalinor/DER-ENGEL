#include<iostream>
#include<math.h>

using namespace std;

double A, B;

class Raiz{
  private:
    double x;

  public:
    Raiz(double);
    ~Raiz();
    void calcular();
};

Raiz::Raiz(double a){
  x = a;
}

Raiz::~Raiz(){
}

void Raiz::calcular(){
  if(x < 0){
    A = -x;
    B = sqrt(A);
    cout << "Result: " << B << "i" << endl;
  }

  else{
    A = sqrt(x);
    cout << "Result: " << A << endl;
  }
}


int main(){

  return 0;
}
