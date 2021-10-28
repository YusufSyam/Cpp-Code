#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int a,b;
    double c;
    
    cin >> a;
    cin >> b;
    cin >> c;
    
    cout << fixed << setprecision(2) << "NUMBER = " << a << endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << (b*c) << endl;
    return 0;
}
