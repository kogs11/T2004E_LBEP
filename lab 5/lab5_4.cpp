#include <stdio.h>

int main(){
	int n;
	printf("Nhap vao so can kiem tra:");
	scanf("%d",&n);
	
	if(n<2){
		printf("Khong la so nguyen to");
	}
	
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			printf("Khong la so nguyen to");
		}
	}
	printf("La so nguyen to");
}
