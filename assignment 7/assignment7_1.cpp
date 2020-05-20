#include <stdio.h>

int main(){
	int n;
	do{
		printf("Nhap n=");
		scanf("%d",&n);
	}while(n<=0);
	
	int ary[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("Nhap ary[%d][%d]: ",i,j);
			scanf("%d",&ary[i][j]);
		}
	}
	
	int sum=0, count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j || (i+j)==(n-1)){
				sum+=ary[i][j];
				count++;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j && (i+j)==(n-1)){
				sum=sum-ary[i][j];
				count=count-1;
				break;
			}
		}break;
	}
	
	float tbc;
	tbc=sum/(float)count;
	printf("TBC duong cheo = %f",tbc);	
}
