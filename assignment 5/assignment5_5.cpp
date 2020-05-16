#include <stdio.h>

int main(){
	int n,a1=0,a2=1,a3;
	do{
		printf("Nhap so nguyen duong n=");
		scanf("%d",&n);
	}while (n<=0);
	
	for(int i=1;(a1+a2)<n;i++){
		a3=a1+a2;
		a1=a2;
		a2=a3;
	}
	printf("So nho hon va gan n nhat trong day so fibo la: %d",a3);
}
