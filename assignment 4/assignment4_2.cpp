#include <stdio.h>

int main(){
	int n,i;
	printf("Nhap so tu nhien n:\n");
	scanf("%d",&n);
	
	for(;n<0;){
		printf("Ban vua nhap sai, vui long  nhap lai:\n");
		scanf("%d",&n);
	}
	
	printf("Nhung so chia het cho 3 la:\n");
	for(i=0; i<n ; i++){
		if(i%3 == 0){
			printf("%d\t",i);
		}
	}
}
