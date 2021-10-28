# include <iostream> 

using namespace std;

int main(){
	
	int N;
	cin >> N;
	
	int fibonacci [N];
	for(int i=0; i<N; i++){
		if(i==0){
			fibonacci[0]= 0;	
		}
		if(i==1){
			fibonacci[1]= 1;
		}
		if(i>1){
			fibonacci[i]= fibonacci[i-1]+fibonacci[i-2];
		}
		
		if(i==(N-1)) cout << fibonacci[i] << endl;
		else cout << fibonacci[i] << " ";
	}
	
	
	return 0;
}
