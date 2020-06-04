#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, delta, x1, x2, x;
	printf("nhap cac he so:");
	scanf("%f %f %f", &a, &b, &c );
	
	if(a==0){
		if(b==0){
			printf("phuong trinh vo nghiem");
		}else{
			if(c!=0){
				x=-c/b;
				printf("phuong trinh co mot nghiem la : %f",x);
			}else{
				printf("phuong trinh vo nghiem");
			}
			
		}
		
		
	}else{
		delta=b*b-a*c*4;
		if(delta<0){
			printf("phuong trinh vo nghiem");	
		}else{
			if(delta==0){
				x=-b/(2*a);
				printf("phuong trinh co nghiem la: %f",x);
			}else{
				x1=(-b + sqrt(delta)) / (2*a);
				x2=(-b - sqrt(delta)) / (2*a);
				printf("phuong trinh co hai nghiem la :\n x1= %f \n x2= %f",x1,x2);
				}
		}
	}
}
