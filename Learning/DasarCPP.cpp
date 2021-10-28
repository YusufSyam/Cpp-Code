#include <iostream>
#include <iomanip>
#include <stdio.h>
//#include<conio.h> 
#include<math.h>
 
using namespace std;
 
int main() {
	//Input/output
 	int angka;
 	
  	printf("Masukkan Angka : ");
  	cin >> angka;
  	cout << angka;
  	
  	//Input di output
  	int money;
	cout << "\nUang = "<< (cin >> money, money) << " $";
  	
  	//Akar
  	printf("\nPangkat2 angka = %d\nAkar pangkat2 angka = %.2f",(int)pow(angka,2), (double)sqrt(angka));
    
    int a;
    scanf("%d", &a);
    printf("\n%d",a);
    
    //gets, getchar, getch
    
	return 0;
}
