#include <iostream>
using namespace std;
 
int main() {
	int T;
	cin >> T;
	
	int input[T];
	int maks= 0;
	
	for(int i=0; i<T; i++){
		cin >> input[i];
		if(input[i]>maks) maks= input[i];
	}
	
	cout << maks << endl;
	
	int fibonacci[maks];
	
	for(int i=0; i<maks; i++){
		if(i<2) fibonacci[i]= i;
		else fibonacci[i]= fibonacci[i-1]+fibonacci[i-2];
	}
	
	for(int i=0; i<T; i++){	
		if(input[i]<maks){
			for(int j=1; j<=maks; j++){
				if(input[i]+1==j) cout << "Fib ("<< input[i] << ") = "<< fibonacci[j-1] << endl;
			}
		}else{
			cout << "Fib ("<< input[i] << ") = "<< fibonacci[maks-1] << endl;
		}
	}
 
    return 0;
}
