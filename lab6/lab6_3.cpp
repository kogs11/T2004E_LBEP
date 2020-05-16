#include <stdio.h>

int main(){
	int n;
	int ary[n];
	
	do{
		printf("Nhap vao gia tri n: ");
		scanf("%d",&n);
	}while(n<=0);
	
	for(int i=1;i<=n;i++){
		printf("Nhap vao so thu %d: ",i);
		scanf("%d",&ary[i]);
	}
	
	int x;
	printf("Nhap vao so: ");
	scanf("%d",x);
	
	for(int i=1;i<=n;i++){
		if(x == ary[i]){
			printf("X thuoc mang");
			break;
		}
	}
	printf("X ko thuoc mang");
}
