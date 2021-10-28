#include <iostream>
#include <math.h>

using namespace std;

int main(){
	double sal;
	cin >> sal;
	
	if(sal <= 2000) printf("Isento\n");
    else{
        sal -= 2000;
        double tax = 0.0;
        int i = 1;
        while (sal > 0) {
            if (i == 1) {
                tax += 0.08 * (sal<1000? sal : 1000);
                i++;
                sal -= (sal<1000? sal : 1000);
            } else if (i == 2) {
                tax += 0.18 * (sal<1500? sal : 1500);
                i++;
                sal -= (sal<1500? sal : 1500);
            } else {
                tax += 0.28 * sal;
                sal = 0;
            }
        }
    	printf("R$ %.2f\n",tax);
    }
	
	return 0;
}
