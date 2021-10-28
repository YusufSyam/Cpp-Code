#include <iostream>

using namespace std;
 
int main() {
    int a, b, c, d, e;
    
    cin >>a >>b >>c >>d >>e ;
    
    a*=300;
    b*=1500;
    c*=600;
    d*=1000;
    e*=150;
    
    cout << (a+b+c+d+e+225) << endl;
    return 0;
}
