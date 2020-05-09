// Nhap vao 3 so, tim so nho nhat trong 3 so

#include <stdio.h>

int main(){
	
	int x1,x2,x3;
	printf("Nhap vao so thu nhat:\n");
	scanf("%d",&x1);
	printf("Nhap vao so thu hai:\n");
	scanf("%d",&x2);
	printf("Nhap vao so thu ba:\n");
	scanf("%d",&x3);
	
	if(x1<x2){
		if(x1<x3){
			printf("So nho nhat trong 3 so %d, %d, %d là %d",x1,x2,x3,x1);
		}else{
			printf("So nho nhat trong 3 so %d, %d, %d là %d",x1,x2,x3,x3);
		}
	}else{
		if(x2<x3){
			printf("So nho nhat trong 3 so %d, %d, %d là %d",x1,x2,x3,x2);
		}else{
			printf("So nho nhat trong 3 so %d, %d, %d là %d",x1,x2,x3,x3);
		}
	}
}
