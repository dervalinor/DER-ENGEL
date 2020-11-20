/*Sie werden ein Program für wissen  multiplikation von zwei Matrices*/
#include <iostream>
#include <stdlib.h>

using namespace std;

void ask();
void mult_matrix(int **, int **, int, int, int, int);
void vektor_matrix(int **, int **, int, int, int, int);

int **matrix1, **matrix2, row1, row2, col1, col2; //this is because the multiplication of matrices is
										// matrix mxn and matrix nxp for give mxp
//row1 x col1  row2xcol2 = row1 x col2

int main(int argc, char const *argv[])
{
	
	ask();

	for (int i = 0; i < row1; ++i) 
	{
		delete[] matrix1[i];
	}

	delete[] matrix1;

	for (int i = 0; i < row2; ++i) 
	{
		delete[] matrix2[i];
	}

	delete[] matrix2;

	return 0;
}

void ask(){

	cout << "Multiplication of the two matrices" << endl;

	cout << "\nMatrix 1: " << endl;

	cout << "Number of the row: "; cin >> row1; //NOTE: first ask the rows and columns and after reserve memory
	cout << "Number of the column: "; cin >> col1;

	cout << "\nMatrix 2: " << endl;

	cout << "Number of the row: "; cin >> row2;
	cout << "Number of the column: "; cin >> col2;


	//Now we reserve memory for save the data of the matrices
	matrix1 = new int*[row1];

	for (int i = 0; i < row1; ++i)
	{
		matrix1[i] = new int[col1];
	}

	matrix2 = new int*[row2];

	for (int i = 0; i < row2; ++i)
	{
		matrix2[i] = new int[col2];
	}

	//Now we ask the data to user


	if (row1 > 0 and row2 > 0 and col1 > 0 and col2 > 0 and col1 == row2){

		cout << "\nNumbers of the matrix 1: " << endl;

		for (int i = 0; i < row1; ++i)
		{
			for (int j = 0; j < col1; ++j)
			{
				cout << "Element ["	<< i << "] [" << j << "]: "; cin >> *(*(matrix1 + i) + j);
			}		
		}

		cout << "\nNumbers of the matrix 2: " << endl;

		for (int i = 0; i < row2; ++i)
		{
			for (int j = 0; j < col2; ++j)
			{
				cout << "Element ["	<< i << "] [" << j << "]: "; cin >> *(*(matrix2 + i) + j);

			}
		}


		if (row1 > 1 and row2 > 1 and col1 > 1 and col2 > 2)
		{
			mult_matrix(matrix1, matrix2, row1, row2, col1, col2);
		}

		else{

			vektor_matrix(matrix1, matrix2, row1, row2, col1, col2);

		}

	}

	else {

		cout << "The multiplication can't make" << endl;
	}

}

void mult_matrix(int **matrix1, int **matrix2, int row1, int row2, int col1, int col2){

	int a, b, c = 0, m = 0, p = 0;

	cout << "\nMultiplication of the matrices" << endl;
	cout << '\n';

	for (int i = 0; i < row1; ++i)
	{
			
			//correction make constant the row, YESSSS

			p = i;


			for (int k = 0; k < col2; ++k) //SOLUTION!!!! for have a matrix mxp of matrices mxn and nxp
			{
				for (int l = 0; l < col2; ++l) //the sum each p 
				{


					a = *(*(matrix1 + p) + l);
					b = *(*(matrix2 + l) + k);

					c = c + a*b;
					m = m + 1;

					if (m == col1)
					{
						cout << c << " "; 
						c = 0;
						m = 0;
					}

				}
			}

			


		if (m == 0)
		{

			cout << '\n';

		}

	}

}

void vektor_matrix(int **matrix1, int **matrix2, int row1, int row2, int col1, int col2){

	int a, b, c = 0, m = 0;

	if (row1 == 1 and col2 == 1)
	{
		for (int i = 0; i < col1; ++i)
		{
			a = *(*(matrix1 + 0) + i);
			b = *(*(matrix2 + i) + 0);

			c = c + a*b;
		}

		cout << "\nResult: " << c << endl;
	}

	if (col2 == 1)
	{

					
		//correction make constant column

		cout << "\nResult: " << endl;

		for (int i = 0; i < col2; ++i)
		{
			


					//Yess, all the element of the matrix for column constant
					for (int k = 0; k < row1; ++k)
					{
						for (int l = 0; l < col1; ++l) 
						{


							a = *(*(matrix1 + k) + l);
							b = *(*(matrix2 + l) + 0);

							c = c + a*b;
							m = m + 1;

							if (m == col1)
							{
								cout << c << " " << endl; 
								c = 0;
								m = 0;
							}

						}
					}



		}




	}
	

}