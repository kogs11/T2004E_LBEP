#include <stdio.h>

int main(){
	int a,b,ucln=0;
	do{
		printf("Nhap vao 2 so nguyen duong:\n");
		printf("a=");
		scanf("%d",&a);
		printf("b=");
		scanf("%d",&b);
	}while(a*b<0);
	
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			if(a%i==0 && b%j==0 && i==j){
				ucln=i;
			}
		}
	}
	printf("UCLN la %d",ucln);
}
