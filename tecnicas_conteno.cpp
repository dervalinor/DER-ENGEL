/*You create a program than let make combination, permutation and
variation according to the case */

#include <iostream>
#include <math.h>

using namespace std;

void combination(double, double);
void permutation(double);
void variation(double, double);


int main(int argc, char const *argv[])
{

	double n, r, option, option2;

	cout <<  "1. yes 2. no " << endl;
	cout << "Matter order?: "; cin >> option;

	if (option == 1)
	{
		cout << "all elements?: "; cin >> option2;

		if (option2 == 1)
		{
			cout << "you give the value of n: "; cin >> n;
			permutation(n);
		}

		if(option2 == 2){


			cout << "you give the value of n: "; cin >> n;
			cout << "you give the value of r: "; cin >> r;
			variation(n, r);
		}

	}

	if (option == 2)
	{	
		cout << "you give the value of n: "; cin >> n;
		cout << "you give the value of r: "; cin >> r;
		combination(n, r);

	}
	
	return 0;
}



void combination(double n, double r){

	double Vari = 0, Facto1 = 1, Facto3 = 1, R1 = 0, Facto4 = 1;

	R1 = n - r;


	while(n > 0){

		Facto1 = Facto1*n;
		n = n - 1;

	}

	while(r > 0){
		Facto4 = Facto4*r;
		r = r - 1;
	}

	while(R1 > 0){

		Facto3 = Facto3*R1;
		R1 = R1 - 1;

	}

	Vari = (Facto1)/(Facto4*Facto3);

	cout << "combination: " << Vari << endl; 

}




void permutation(double n){

	double Fact = 1;

	while(n > 1){


		Fact = Fact*n;
		n = n - 1;

	}

	cout << "Permutation: " << Fact << endl;

}




void variation(double n, double r){

	double Var = 0, Facto = 1, Facto2 = 1, R = 0;

	R = n - r;


	while(n > 1){

		Facto = Facto*n;
		n = n - 1;

	}


	while(R > 1){

		Facto2 = Facto2*R;
		R = R - 1;

	}

	Var = Facto/Facto2;

	cout << "variation: " << Var << endl; 
}

