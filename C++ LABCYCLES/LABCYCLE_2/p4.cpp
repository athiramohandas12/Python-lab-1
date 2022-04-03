#include <iostream>
using namespace std;

class Matrix{
	int rows,coloumns;
	int **matrix;
public:
	Matrix(){}
	Matrix(int r,int c){
		rows=r;
		coloumns=c;
		matrix = new int *[rows];
		for (int i = 0; i < rows; ++i) {
			matrix[i] = new int [coloumns];
		}
	}
	void getRowsandColoumns(){
		cout<<"Enter the number of rows and coloumns"<<endl;
		cin>>rows>>coloumns;
	}
	void allocateMatrix();
	void getMatrix();
	void displayMatrix();
	void operator+(const Matrix&);
	void operator*(const Matrix&);

	~Matrix(){
		for (int i = 0; i < rows; ++i) {
			delete matrix[i];
		}
		cout<<"Memory Released"<<endl;
		delete matrix;
	}
};

void Matrix::allocateMatrix(){
	matrix = new int *[rows];
	for (int i = 0; i < rows; ++i) {
		matrix[i] = new int [coloumns];
	}
}

void Matrix::getMatrix(){
	cout<<"Enter the elements of matrix"<<endl;
	for (int i = 0; i < rows; ++i) {
		cout<<"Row "<<i+1<<endl;
		for (int j = 0; j < coloumns; ++j) {
			cin>>matrix[i][j];
		}
	}
}
//function to display the matrix entered.
void Matrix::displayMatrix(){
	cout<<"Dimension of Matrix "<<rows<<"x"<<coloumns<<endl;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < coloumns; ++j) {
			cout<<matrix[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
void Matrix::operator+(const Matrix&a){
	if(rows==a.rows and coloumns==a.coloumns){
		Matrix sum(rows,coloumns);
		for (int i = 0; i < rows; ++i) {
			for (int j = 0; j < coloumns; ++j) {
				sum.matrix[i][j]=matrix[i][j]+a.matrix[i][j];
			}
		}
		sum.displayMatrix();
	}
	else{
		cout<<"Addition is not possible for this matrix"<<endl;
	}
}

void Matrix::operator *(const Matrix&a){
	if (coloumns==a.rows) {
		Matrix productMatrix(rows,a.coloumns);
		for (int i = 0; i < rows; ++i) {
			for (int j = 0; j < a.coloumns; ++j) {
				int sum=0;
				for (int k = 0; k < coloumns; ++k) {
					sum = matrix[i][k]*a.matrix[k][j]+sum;
					productMatrix.matrix[i][j] = sum;
				}
			}
		}
		productMatrix.displayMatrix();
	} else {
		cout<<"Multiplication not possible for this matrix"<<endl;
	}
}
int main() {
	int ch;
	cout<<"*********Welcome***********"<<endl;

		Matrix matrix1;
		cout<<"First Matrix "<<endl;
		matrix1.getRowsandColoumns();
		matrix1.allocateMatrix();
		matrix1.getMatrix();

		Matrix matrix2;
		cout<<"Second Matrix"<<endl;
		matrix2.getRowsandColoumns();
		matrix2.allocateMatrix();
		matrix2.getMatrix();

		cout<<endl;
		cout<<"First Matrix"<<endl;
		matrix1.displayMatrix();
		cout<<endl;
		cout<<"Second Matrix"<<endl;
		matrix2.displayMatrix();

		do {
			int ch1;
			cout<<"\n1.Addition of two matrix\n2.Multiplication of two matrix"<<endl;
			cin>>ch1;
			switch (ch1) {
				case 1:
					matrix1+matrix2;
					break;
				case 2:
					matrix1*matrix2;
					break;
				default:
					break;
			}
			cout<<"\n1.Continue\n2.Exit"<<endl;
			cin>>ch;
		} while (ch==1);

	 
	return 0;
}