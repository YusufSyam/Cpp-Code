#include <iostream>

using namespace std;

int main(){
	double a;
	int b;
	for(int i=0; i<6; i++){
		cin>> a;
		if(a>0) b++;
	}
	
	printf("%d valores positivos\n",b);
	return 0;
}
