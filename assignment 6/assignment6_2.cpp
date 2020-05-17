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
	int socantim;
	for(int i=1;i<=n;i++){
		if(ary[i]>0){
			socantim=ary[i];
			break;
		}
	}
	for(int i=1;i<=n;i++){
		if(ary[i]>0 && socantim>ary[i]){
			socantim=ary[i];
		}
	}
	printf("So duong nho nhat la: %d",socantim);
}
