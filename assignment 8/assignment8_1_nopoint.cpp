#include <stdio.h>
 int main(){
 	int n;
 	do{
 		printf("Nhap so nguyen duong n=");
 		scanf("%d",&n);
	}while (n<=0);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap pt thu %d=",i);
		scanf("%d",&ary[i]);
	}
	
	int sld=0,sldmax=-999;
	for(int i=0;i<n;i++){
		if(ary[i]>0){
			sld++;
			if(sld>sldmax) sldmax = sld;
		}else sld=0;
	}
	printf("So luong cac so duong lien tiep nhieu nhat la: %d",sldmax);
 }
