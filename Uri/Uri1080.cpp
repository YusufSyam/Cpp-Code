#include <iostream>

using namespace std;

int main(){
	int a, ind, maks= 0;
	for(int i=1; i<=100; i++){
		cin>> a;
		if(a>=maks){
			ind= i;
			maks= a;
		}
	}
	
	printf("%d\n%d\n", maks, ind);
	
	return 0;
}
