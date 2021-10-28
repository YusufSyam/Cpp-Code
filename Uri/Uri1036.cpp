#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double a,b,c, x;
    cin >> a >> b >> c;
    
    if((b*b)-(4*a*c)<0 || a==0) printf("Impossivel calcular\n");
    else{
	    printf("R1 = %.5f\n",(-b+sqrt((b*b)-(4*a*c)))/(2*a));
	    printf("R2 = %.5f\n",(-b-sqrt(b*b-(4*a*c)))/(2*a));
	}
    return 0;
}
