#include <stdio.h>
#include <string.h>

// Ham kiem tra
bool TimKiemChuoi(char s[],char ary[][100],int n){
	for(int i=0;i<n;i++){
		if(strcmp(s,ary[i])==0){
			return true;
		}
	}
	return false;
}

int main(){
	char s[100], ary[5][100];
	printf("Nhap chuoi s: ");
	scanf("%s",s);
	for(int i=0;i<5;i++){
		printf("Nhap chuoi thu %d: ",i);
		scanf("%s",ary[i]);
	}
	if(TimKiemChuoi(s,ary,5)){
		printf("s thuoc mang");
	}else printf("s ko thuoc mang");
	
	return 0;
}
