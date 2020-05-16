#include <stdio.h>

int main(){
	int n,n1,sum=0;
	do{
		printf("Nhap vao so nguyen duong n=");
		scanf("%d",&n);
	}while (n<=0);
	
	for(;n!=0;){
		n1=n%10;
		sum+=n1;
		n/=10;
	}
	sum=sum+n;
	printf("Tong cac chu so bang = %d",sum);
}
