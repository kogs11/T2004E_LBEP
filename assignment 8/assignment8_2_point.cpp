#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	do{
		printf("Nhap so nguyen duong n=");
		scanf("%d",&n);
	}while (n<=0);
	
	int *p;
	p = (int *)calloc(n,sizeof(int));
	for(int i=0;i<n;i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",(p+i));
	}
	
	int sum=0, summax=-999;
	for(int i=0;i<n;i++){
		if(*(p+i)>0){
			sum+=*(p+i);
			if(summax<sum) summax=sum;
		}else sum=0;
	}
	printf("So cac so duong lien tiep nhieu nhat la: %d",summax);
}
