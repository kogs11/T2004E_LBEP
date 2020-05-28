#include <stdio.h>
#include <string.h>

void SapXep(char ary[][100], int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(strcmp(ary[j],ary[j+1])>0){
				char temp[100];
				strcpy(temp,ary[j]);
				strcpy(ary[j],ary[j+1]);
				strcpy(ary[j+1],temp);
			}
		}
	}
}

int main(){
	char ary[5][100];
	for(int i=0;i<5;i++){
		printf("Nhap chuoi thu %d: ",i);
		scanf("%s",ary[i]);
	}
	SapXep(ary,5);
	printf("Mang sau khi sap xep\n");
	for(int i=0;i<5;i++){
		printf("%s\n",ary[i]);
	}
	return 0;
}
