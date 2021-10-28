#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double a,b;
    cin >> a >> b;
    
    if(a==1) printf("Total: R$ %.2f\n", (double)(b*4));
    else if(a==2) printf("Total: R$ %.2f\n", (double)(b*4.5));
	else if(a==3) printf("Total: R$ %.2f\n", (double)(b*5));
	else if(a==4) printf("Total: R$ %.2f\n", (double)(b*2));
	else if(a==5) printf("Total: R$ %.2f\n", (double)(b*1.5));
	    
    return 0;
}
