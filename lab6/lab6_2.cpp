#include <stdio.h>

int main(){
	int n,dem=0,sum=0;
	float tbc;
	int ary[n];
	
	do{
	printf("Nhap vao gia tri n: ");
	scanf("%d",&n);
	}while(n<=0);
	
	for(int i=1;i<=n;i++){
	printf("Nhap vao so thu %d: ",i);
	scanf("%d",&ary[i]);
	}
	
	for(int i=1;i<=n;i++){
		if( ary[i]%2 ==1 && i%2==0 ){
			dem++;
			sum+=ary[i];
		}
	}
	tbc=sum/(float)dem;
	printf("TBC = %f",tbc);
}
