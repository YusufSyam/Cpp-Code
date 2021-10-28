#include <iostream>

using namespace std;

int main(){
	string dia1, dia2, tit2;
	int h1, j1, m1, d1, h2, j2, m2, d2, waktuSisa, a;
	
	cin>> dia1>> h1>> j1>> tit2>> m1>> tit2>> d1>> dia2>> h2>> j2>> tit2>> m2>> tit2>> d2;  
	
	waktuSisa= (((h2-h1)*86400)+((j2-j1)*3600)+((m2-m1)*60)+(d2-d1));
	
	a= waktuSisa/86400;
	printf("%d dia(s)\n",a);
	waktuSisa-= a*86400;
	
	a= waktuSisa/3600;
	printf("%d hora(s)\n",a);
	waktuSisa-= a*3600;
	
	a= waktuSisa/60;
	printf("%d minuto(s)\n",a);
	waktuSisa-= a*60;

	printf("%d segundo(s)\n",waktuSisa);
	
	return 0;
}
