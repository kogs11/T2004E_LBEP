#include <stdio.h>

int main(){
	int a,b,ucln;
	do{
		printf("Nhap vao 2 so nguyen duong:\n");
		printf("a=");
		scanf("%d",&a);
		printf("b=");
		scanf("%d",&b);
	}while(a*b<0);
	
	for(ucln=1;ucln<=(a+b)/2;ucln++){
		if(a%ucln==0 && b%ucln==0){
			ucln++;
		}
	}
	printf("%d",ucln);
}
