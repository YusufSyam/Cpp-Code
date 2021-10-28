#include <iostream>

using namespace std;

int main(){
	int a= 8;
	
	int &b= a;
//	printf("%d",b);
	
	cout<< &a<< endl;
	cout<< b<< endl;	
	cout<< &b<< endl;
	
	int *c= &b;
	cout<< "ALAMAT C 1 "<<c<< endl;	
//	cout<< "ALAMAT C 2 "<<&c<< endl;
	cout<< *c << endl;
	
	a= 10;
	cout<< a<< endl;	
	cout<< b<< endl;
	cout<< *c<< endl;
	
	*c= 5;
	cout<< a<< endl;	
	cout<< b<< endl;
	cout<< *c<< endl;
	
	
	
	
	cin.get();
	return 0;
}
