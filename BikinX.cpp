#include <iostream>
using namespace std;

int main(){
	
	string bintang= "*";
	int batas;
	
	cin >> batas;
	
		for(int i=0; i<batas; i++){
			for(int j=0; j<batas; j++){
				if(j==i) cout << bintang;
				else if(i+j==(batas-1)) cout << bintang;
				else cout << " ";
			}
			cout << "\n";
		}
		
	return 0;
}
