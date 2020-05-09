// nhap vao 3 so a, b,c. giai phuong trinh bac 2: ax^2+bx+c = 0 ( tim x)

#include <stdio.h>
#include <math.h>

int main(){
	printf("Giai phuong trinh bac 2: ax^2+bx+c = 0\n");
	
	float x,x1,x2,a,b,c,delta;
	printf("Nhap vao gia tri a:\n");
	scanf("%f",&a);
	printf("Nhap vao gia tri b:\n");
	scanf("%f",&b);
	printf("Nhap vao gia tri c:\n");
	scanf("%f",&c);
	delta = b*b-4*a*c;
	
	if(a==0){
		x = -c/b;
		printf("Phuong trinh co nghiem:\n");
		printf("x = %f",x);
	}else{
		if(delta<=0){
			if(delta<0){
				printf("Phuong trinh vo nghiem!\n");
			}else{
				x=-b/(2*a);
				printf("Phuong trinh co nghiem duy nhat: x = %d",x);
			}
		}else{
			x1= (-b + sqrt(delta))/(2*a);
			x2= (-b - sqrt(delta))/(2*a);
			printf("Phuong trinh co 2 nghiem:\n");
			printf("x1 = %f \n",x1);
			printf("x1 = %f \n",x2);
		}
	}
}
