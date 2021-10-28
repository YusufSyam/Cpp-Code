#include<stdio.h>

int main(){
	int i, x;
	int j= 15;
	
	scanf("%d", &x);
	
	i= 10;
	while(i>x){
		printf("%d\n",i);
		j= j-2;
		i= i-2;	
	}
	
	printf("%d",j);
	
    return 0;
}
