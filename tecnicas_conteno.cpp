/*You create a program than let make combination, permutation and
variation according to the case */

#include <iostream>
#include <math.h>

using namespace std;

void combination(int, int);
void permutation(int);
void variation(int, int);


int main(int argc, char const *argv[])
{

	int n, r;
	char option[10], option2[10];

	cout << "Matter order?: "; cin >> option;

	if (option == "YES" or option == "yes")
	{
		cout << "all elements?: "; cin >> option2;

		if (option2 == "YES" or option2 == "yes")
		{
			permutation(n);
		}

		else{

			variation(n, r);
		}

	}

	if (option == "NO" or option == "no")
	{	

		combination(n, r);

	}
	
	return 0;
}



void combination(int n, int r){

	int Vari = 0, Facto1 = 1, Facto3 = 1, R = 0;

	R = n - r;


	while(n != 1 or n != 0){

		n = n - 1;
		Facto1 = Facto1*n;
	}


	while(R != 1 or R != 0){

		R = R - 1;
		Facto3 = Facto3*n;
	}

	Vari = Facto1/(r*Facto3);

	cout << "combination: " << Vari << endl; 

}




void permutation(int n){

	int Fact = 1;

	while(n != 1 or n != 0){

		n = n - 1;

		Fact = Fact*n;
	}

	cout << "Permutation: " << Fact << endl;

}




void variation(int n, int r){

	int Var = 0, Facto = 1, Facto2 = 1, R = 0;

	R = n - r;


	while(n != 1 or n != 0){

		n = n - 1;
		Facto = Facto*n;
	}


	while(R != 1 or R != 0){

		R = R - 1;
		Facto2 = Facto2*n;
	}

	Var = Facto/Facto2;

	cout << "variation: " << Var << endl; 
}

