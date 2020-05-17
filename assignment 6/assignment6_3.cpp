#include <stdio.h>

int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int ary[n];
	printf("Nhap so thu nhat ");
	scanf("%d",&ary[1]);
	
	for(int i=2;i<=n;i++){
		do{
			printf("Nhap so thu %d: ",i);
			scanf("%d",&ary[i]);
		}while (ary[i]==ary[(i-1)]);
	}
	printf("OK");
}
