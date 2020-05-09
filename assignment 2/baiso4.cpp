// Nhap vao 3 so a,b,c. Kiem tra xem no co phai 3 canh cua 1 tam giac hay khong. Neu dung la 3 canh tam giac thi tinh dien tich va chu vi.

#include <stdio.h>
#include <math.h>

int main(){
	
	printf("Nhap vao 3 so a,b,c. Kiem tra xem no co phai 3 canh cua 1 tam giac hay khong. Neu dung la 3 canh tam giac thi tinh dien tich va chu vi.\n");
	
	float a,b,c,p,s;
	printf("Nhap gia tri a:\n");
	scanf("%f",&a);
	printf("Nhap gia tri b\n");
	scanf("%f",&b);
	printf("Nhap gia tri c\n");
	scanf("%f",&c);
	
	if(a+b>c){
		if(a+c>b){
			if(b+c>a){
				p=a+b+c;
				s=sqrt(p/2*(p/2-a)*(p/2-b)*(p/2-c));
				printf("Chu vi tam giac la: %f\n",p);
				printf("Dien tich tam giac la: %f\n",s);
			}else{
				printf("Khong phai 3 canh cua mot tam giac!\n");
			}
		}else{
			printf("Khong phai 3 canh cua mot tam giac!\n");
		}
	}else{
		printf("Khong phai 3 canh cua mot tam giac!\n");
	}
}
