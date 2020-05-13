#include <stdio.h>

int main(){
	int a,b,c;
	printf("Nhap vao 3 canh 1 tam gia:\n");
	printf("Nhap vao canh thu nhat:\n");
	scanf("%d",&a);
	printf("Nhap vao canh thu hai:\n");
	scanf("%d",&b);
	printf("Nhap vao canh thu ba:\n");
	scanf("%d",&c);
	
	for(;(a+b<c) || (a+c<b) || (b+c<a);){
		printf("Vui long nhap lai:\n");
		printf("Nhap vao canh thu nhat:\n");
		scanf("%d",&a);
		printf("Nhap vao canh thu hai:\n");
		scanf("%d",&b);
		printf("Nhap vao canh thu ba:\n");
		scanf("%d",&c);
	}
	printf("Ok, ban da nhap dung, xin chuc mung!");
}
