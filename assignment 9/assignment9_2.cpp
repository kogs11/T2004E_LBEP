#include <stdio.h>
#include <string.h>

int main(){
	// Nhap chuoi s1, s2
	char s1[100];
	printf("Nhap chuoi s1: ");
	gets(s1);
	char s2[100];
	printf("Nhap chuoi s2: ");
	gets(s2);
	
	if(strstr(s1,s2)!= NULL){
		printf("s2 thuoc s1");
	}else printf("s2 khong thuoc s1");
	return 0;	
}
