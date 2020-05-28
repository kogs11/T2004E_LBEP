#include <stdio.h>
#include <string.h>

int main(){
	// Nhap mang n chuoi
	int n;
	do{
		printf("Nhap so nguyen duong n: ");
		scanf("%d",&n);
	}while (n<=0);
	
	char ary[n][100];
	for(int i=0;i<n;i++){
		printf("Nhap chuoi thu %d: ",i);
		gets(ary[i]);
	}
	
	// Nhap chuoi s
	char s[100];
	printf("Nhap chuoi s: ");
	gets(s);
	
	// Kiem tra
	int count=0;
	for(int i=0;i<n;i++){
		if(strcmp(s,ary[i])==0){
			printf("chuoi s thuoc mang");
			break;
		}else count++;
	}
	if(count!=0){
		printf("chuoi s khong thuoc mang");
	}
}
