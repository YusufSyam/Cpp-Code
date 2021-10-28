#include <iostream>

using namespace std;

int main(){
    int n, uang;
    
    cin >> n;
    
    cout << n <<"\n";
    cout << n/100 << " nota(s) de R$ 100,00\n";
    uang = (n%100);
    cout << uang/50 << " nota(s) de R$ 50,00\n";
    uang = (uang%50);
    cout << uang/20 << " nota(s) de R$ 20,00\n";
    uang = (uang%20);
    cout << uang/10 << " nota(s) de R$ 10,00\n";
    uang = (uang%10);
    cout << uang/5 << " nota(s) de R$ 5,00\n";
    uang = (uang%5);
    cout << uang/2 << " nota(s) de R$ 2,00\n";
    uang = (uang%2);
    cout << uang/1 << " nota(s) de R$ 1,00\n";
    return 0;
}
