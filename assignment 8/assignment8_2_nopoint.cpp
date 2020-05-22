#include <stdio.h>

int main(){
	int n;
 	do{
 		printf("Nhap so nguyen duong n=");
 		scanf("%d",&n);
	}while (n<=0);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap so thu %d=",i);
		scanf("%d",&ary[i]);
	}
	
	int sum=0, summax=-9999;
	for(int i=0;i<n;i++){
		if(ary[i]>0){
			sum+=ary[i];
			if(summax<sum) summax = sum;
		}else sum=0;
	}
	printf("Tong cac so duong lien tiep lon nhat la: %d",summax);
}
