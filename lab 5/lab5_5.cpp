#include <stdio.h>

int main(){
	int n,a,a1=1,a2=1;
	printf("Nhap vao so n: ");
	scanf("%d",&n);
	for(int i=3;i<=n;i++){
		a=a1+a2;
		a1=a2;
		a2=a;
	}
	printf("So thu n la: %d",a);
}
