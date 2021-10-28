#include <iostream>
using namespace std;

int main(){
	
	string bintang= "* ";
	int batas;
	int jenisSegitiga;
	
	cout << "\n<>----Masukkan jenis segitiga----<>\n\n 1.  Segitiga siku-siku\n 2.  Segitiga sama sisi\n\n>> ";
	cin >> jenisSegitiga;
	
	cout << "\nJumlah baris : ";
	cin >> batas;
	cout << endl;
	
	switch(jenisSegitiga){
		
		case 1 :
			
			for(int i=0; i<batas; i++){
				cout << bintang <<endl;
				bintang+="* ";
			}
			
			break;
		case 2 :
			
			for(int i=1; i<=batas; i++){
				for(int j=(batas-1); j>=i; j--){
					cout << " ";
				}
				for(int k=1; k<=i; k++){
					cout << bintang;
				}
				cout << endl;
			}
			
			break;
		default :
			
			cout << "Input salah";
			
			break;
	}
		
	return 0;
}
