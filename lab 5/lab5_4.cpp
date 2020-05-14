#include <stdio.h>

int main(){
	int n,uoc=0;
	printf("Nhap vao so can kiem tra:");
	scanf("%d",&n);
	
	if(n<2){
		printf("Khong la so nguyen to");
	}
	
	for(int i=1;i<=n;i++){
		if(n%i==0){
			uoc++;
		}
	}
	if(uoc>2){
		printf("Khong la so nguyen to");
	}else printf("La so nguyen to");
}
