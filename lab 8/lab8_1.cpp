#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p,n;
	printf("Nhap so luong cua mang: ");
	scanf("%d",&n);
	p = (int *)calloc(n,sizeof(int));
	for(int i=0;i<n;i++){
		printf("Nhap pt thu %d: ",i);
		scanf("%d",(p+i));
	}
	
	for(int i=0;i<(n-1);i++){
		for(int j=0;j<n-i-1;j++){
			if(*(p+j)>*(p+j+1)){
				int temp = *(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=temp;
			}
		}
	}	
	for(int i=0;i<n;i++){
		printf("%3d",*(p+i));
	}
	printf("\n");
	
	printf("Nhap them %d pt\n",n);
	p = (int *)realloc(p,n*sizeof(int));
	for(int i=n;i<2*n;i++){
		printf("Nhap pt thu %d: ",i);
		scanf("%d",(p+i));
	}
	
	for(int i=0;i<(2*n-1);i++){
		for(int j=0;j<2*n-i-1;j++){
			if(*(p+j)>*(p+j+1)){
				int temp = *(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=temp;
			}
		}
	}	
	for(int i=0;i<2*n;i++){
		printf("%3d",*(p+i));
	}	
}
