// Nhap vao 2 so nguyen a,b. Neu a>=b thi in ra ket qua cua a/b, nguoc lai thi in ra ket qua cua a*b

#include <stdio.h>

int main(){
	int a,b,result;
	printf("Nhap gia tri cua a:\n");
	scanf("%d",&a);
	printf("Nhap gia tri cua b:\n");
	scanf("%d",&b);
	
	if(b==0){
		result=a*b;
		printf("Ket qua la: %d",result);
	}else{
		if(a>=b){
			result=a/b;
			printf("Ket qua la: %d",result);
		}else{
			result=a*b;
			printf("Ket qua la: %d",result);
		}
	}
}
