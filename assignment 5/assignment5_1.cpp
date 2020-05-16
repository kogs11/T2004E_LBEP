#include <stdio.h>

int main(){
	int a,b,sum=0;
	do{
		printf("Nhap vao 2 so nguyen a va b, a<b:\n");
		printf("a=");
		scanf("%d",&a);
		printf("b=");
		scanf("%d",&b);
	}while (a>b);
	for(int i=1;i<=(b-a+1);i++){
		sum+=a+i-1;
	}
	printf("Tong tu a den b bang:%d",sum);
}
