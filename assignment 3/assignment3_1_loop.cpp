// nhap 1 so nguyen duong khong qua 4 chu so. tim so nghich dao cua so do. vi du: nhap 241 thi ket qua la 142.

#include <stdio.h>

int main(){
	int n, phandu, nghichdao=0;
	printf("Nhap vao so nguyen duong khong qua 4 chu so:\n");
	scanf("%d",&n);
	if(n<=0 || n>9999){
		printf("So vua nhap khong thoa man dieu kien\n");
	}else{
		while(n>0 && n<10000){
		phandu = n % 10;
		nghichdao = nghichdao*10 + phandu;
		n /= 10;
		}
		printf ("So nghich dao cua %d là %d",n,nghichdao);
	}
}
