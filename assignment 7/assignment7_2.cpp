#include <stdio.h>

int main(){
	int a,b;
	do{
		printf("Nhap a=");
		scanf("%d",&a);
		printf("Nhap b=");
		scanf("%d",&b);
	}while(a<=0 && b<=0);
	
	int ary1[a][b], ary2[a][b];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("Nhap ary1[%d][%d]=",i,j);
			scanf("%d",&ary1[i][j]);
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("Nhap ary2[%d][%d]",i,j);
			scanf("%d",&ary2[i][j]);
		}
	}	
	
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			int temp;
			temp=ary1[a][b]-ary2[a][b];
			printf("%d\t",temp);
		}
		printf("\n");
	}
}
