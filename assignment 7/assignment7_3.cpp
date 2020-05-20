#include <stdio.h>

int main(){
	int a,b;
	do{
		printf("Nhap a=");
		scanf("%d",&a);
		printf("Nhap b=");
		scanf("%d",&b);
	}while(a<=0 && b<=0);
	
	int ary1[a][b], ary2[b][a];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("Nhap ary1[%d][%d]=",i,j);
			scanf("%d",&ary1[i][j]);
		}
	}
	
	printf("Ma tran chuyen vi la:\n");
	for(int j=0;j<b;j++){
		for(int i=0;i<a;i++){
			ary2[j][i]=ary1[i][j];
			printf("%5d",ary2[j][i]);
		}
		printf("\n");
	}	
}
