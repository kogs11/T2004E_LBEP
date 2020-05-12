#include <stdio.h>

int main(){
	int n, phandu, nghichdao=0;
	printf("Nhap vao so nguyen:\n");
	scanf("%d",&n);
	while(n != 0){
	phandu = n % 10;
	nghichdao = nghichdao*10 + phandu;
	n /= 10;
	}
	printf ("So nghich dao cua %d là %d",n,nghichdao);
}
