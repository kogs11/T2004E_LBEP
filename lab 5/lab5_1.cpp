#include <stdio.h>

int main(){
	int n,j=1;
	do{
		printf("Nhap vao so n:\n");
		scanf("%d",&n);
	}while(n<=0);
	for(int i=1;i<=n;i++){
		j*=i;
	}
	printf("n!=%d",j);
}
