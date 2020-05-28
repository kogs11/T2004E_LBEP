#include <stdio.h>
#include <string.h>

int main(){
	// Nhap chuoi n
	int n;
	do{
		printf("Nhap so nguyen duong: ");
		scanf("%d",&n);
	}while (n<=0);
	char str[n];
	printf("Nhap chuoi n:");
	scanf("%s",str);
	
	// Nhap chuoi s
	int s;
	do{
		printf("Nhap so nguyen duong: ");
		scanf("%d",&s);
	}while (s<=0);
	char strs[s];
	printf("Nhap chuoi s:");
	scanf("%s",strs);

	return 0;
}
