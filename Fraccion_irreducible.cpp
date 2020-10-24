/*find the fraction irreductible */

#include <iostream>

using namespace std;

void irreductible(int, int);

int main(int argc, char const *argv[]) {

  int A, B;

  std::cout << "Fraction A/B: " << endl;
  std::cout << "A: "; std::cin >> A;
  std::cout << "B: "; std::cin >> B;

  irreductible(A, B);

  return 0;
}

void irreductible(int A, int B) {

  for (int i = 1; i < 10; i++) {
    if (A%i == 0 and B%i == 0) {
      std::cout << "Fraction is: " << A/i << "/" << B/i << endl;
    }
  }

}
