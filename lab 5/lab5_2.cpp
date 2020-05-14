#include <stdio.h>

int main(){
	int n;
	float s=0;
	do{
		printf("Nhap vao so nguyen duong n:\n");
		scanf("%d",&n);
	}while(n<=0);
	
	for(int i=1;i<=n;i++){
		s=s+1/(float)i;
	}
	printf("Tong S=%f",s);
}
