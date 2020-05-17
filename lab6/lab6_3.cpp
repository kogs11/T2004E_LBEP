#include <stdio.h>

int main (){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int ary[n],dem;
	for(int i=1;i<=n;i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&ary[i]);
	}
	
	int x;
	printf("Nhap x=");
	scanf("%d",&x);
	
	for(int i=1;i<=n;i++){
		if(ary[i]==x){
			printf("x thuoc mang");
			dem++;
			break;
		}
	}
	if(dem==0){
		printf("x ko thuoc mang");
	}
}
