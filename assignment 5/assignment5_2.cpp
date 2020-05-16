#include <stdio.h>

int main(){
	int n,dem;
	do{
		printf("Nhap vao so nguyen duong n=");
		scanf("%d",&n);
	}while (n<=0);
	
	for(int i=1;n%10>0;i++){
		n/=10;
		dem++;
	}
	printf("So nhap vao co %d chu so.",dem);
}
