/*Mixed number to fraction*/
#include <iostream>
#include <math.h>

using namespace std;

void fraction(int, int, int);

int main(int argc, char const *argv[]) {

  int a, b, c;

  std::cout << "\nMixed number a(b/c) to fraction" << endl;
  std::cout << "a: "; std::cin >> a;
  std::cout << "b: "; std::cin >> b;
  std::cout << "c: "; std::cin >> c;

  fraction(a, b, c);

  return 0;
}

void fraction(int a, int b, int c) {

  int D = 0;
  D = a*c + b;

  std::cout << "\nFraction is: ";
  std::cout << D << "/" << c << endl;

}
