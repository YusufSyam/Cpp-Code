#include <iostream>

using namespace std;

int main (){
	int baris1, kolom1;
	
	cout << "Baris matriks pertama : "; cin >> baris1;
	cout << "Kolom matriks pertama : "; cin >> kolom1;
	cout << "\nMatriks 1\n";
	
	int matriks1[baris1][kolom1];
	for(int i=0; i<baris1; i++){
		for(int j=0; j<kolom1; j++){
			cin >> matriks1[i][j];
		}
	}
	
	cout << "\n";
	int baris2, kolom2;
	
	cout << "Baris matriks kedua   : "; cin >> baris2;
	cout << "Kolom matriks kedua   : "; cin >> kolom2;
	cout << "\nMatriks 2\n";
	
	int matriks2[baris2][kolom2];
	for(int i=0; i<baris2; i++){
		for(int j=0; j<kolom2; j++){
			cin >> matriks2[i][j];
		}
	}
	
	cout << "\nMatriks 1 x Matriks 2" << endl;
	
	if(kolom1==baris2){
		int matriks3[baris1][kolom2];
		cout << "\n";
		for(int i=0; i<baris1; i++){
			for(int j=0; j<kolom2; j++){
				for(int k=0; k<kolom1; k++){
					matriks3[i][j]+= (matriks1[i][k]*matriks2[k][j]);
				}
				cout << matriks3[i][j] << "\t";
			}
			cout << "\n";
		}
	}else{
		cout << "\nPerkalian matriks tidak memungkinkan";
	}

     return 0;
}
