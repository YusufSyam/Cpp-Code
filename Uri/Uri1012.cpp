#include <iostream>
 
using namespace std;
 
int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    
    printf("%d eh o maior\n", (a>=(b>=c? b=b : b=c)? a : b));
    return 0;
}
