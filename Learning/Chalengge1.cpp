#include<stdio.h>

int main(){
    int angka [3];
	
	for(int i=0; i<3; i++){
		printf("Masukkan nilai %c: ",(i+65));
		scanf("%d", &angka[i]);	
	} 
	
	if(angka[0]<20 && angka[1]>12 && angka[2]<14 && angka[2]>1){
		printf("Produk anda berhasil lolos quality Control");
	}else printf("Produk anda tidak lolos quality Control");
	
    return 0;
}
