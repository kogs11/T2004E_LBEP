#include <stdio.h>

int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int ary[n];
	for(int i=1;i<=n;i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&ary[i]);
	}
	int sole,dem=0;
	for(int i=1;i<=n;i++){
		if(ary[i]%2!=0){
			sole=ary[i];
		}
	}
	printf("So le cuoi cung la: %d",sole);
}
