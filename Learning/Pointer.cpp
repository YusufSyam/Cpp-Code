#include <iostream>
#include <iomanip>
 
using namespace std;
 
	void tambah(int *angka){
	*angka +=20;
	}
 
int main() {
	//Pointer adalah sebuah variabel yang berisi alamat variabel lain
 	int angka;
 	
  	printf("Masukkan Angka : ");
  	cin >> angka;
  	
  	//Alamat dari a
  	int *b= &angka;
  	int **c= &b;
  	
  	cout<< "Angka = "<< angka;
  	cout<< "\nAlamat angka = " << b;
	cout<< "\nAlamat angka lagi= " << c;
	printf("\nDiubah jadi angka lagi= %d", *b);
    printf("\n"); 
    
    //Pointer untuk array
    int nilaiArray[5] = {2,5,4,6,7};
	int *pointerArray;
	pointerArray = nilaiArray;
	cout<<"Nilai pada elemen 0 nilaiArray adalah = "<<nilaiArray[0]<<endl;
	cout<<"Nilai pada elemen 0 nilaiArray (Pointer) adalah = "<<*pointerArray<<endl;
	pointerArray++; // naikan alamat yang ditunjuk pointer sejauh 1 integer
	*pointerArray = 10; //Ubah nilai elemen 1 array (nilaiArray) menjadi 10
	cout<<"Nilai pada elemen 1 nilaiArray adalah = "<<nilaiArray[1]<<endl;
	cout<<"Nilai pada elemen 1 nilaiArray (Pointer) adalah = "<<*pointerArray<<endl;
	pointerArray = nilaiArray; //kembalikan pointer pada elemen pertama
	cout<<endl;
	cout<<"Akses nilai semua array dengan pointer dan looping for"<<endl;
	
	for (int i=0; i<5; i++){
	 cout<<"Nilai indeks ["<<i<<"] adalah = "<<*(pointerArray+i)<<endl;
	}
    
    int nilai = 10;
	cout<<"\nNilai variabel nilai adalah = "<<nilai<<endl;
	tambah(&nilai); //Memasukkan alamat variabel nilai pada fungsi tambah
	cout<<"Nilai variabel nilai adalah = "<<nilai<<endl;
    
	return 0;
}
