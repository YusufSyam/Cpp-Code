#include <iostream>

using namespace std;

void fungsi(int *a);

int kuadrat(int *b){
	*b*= *b; 
}

int main(){
	int a= 8;
	
	cout << "Address a= " << &a << endl;
	cout << "Nilai a= " << a << endl;	
	printf("Ini fungsi...\n");
	fungsi(&a);
	
	
	int &b= a;
	kuadrat(&b); // kalau nilai b diubah, nilai a juga berubah
	
	cout << "Address a sesudah b dikuadratkan= " << &a << endl;
	cout << "Nilai a sesudah b dikuadratkan= " << a << endl;	
	
	return 0;
}

void fungsi(int *a){
	cout << "Address a dalam fungsi= " << a << endl;
	cout << "Nilai a dalam fungsi= " << *a << endl;
}
