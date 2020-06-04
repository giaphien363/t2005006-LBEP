#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c, p, s;
	printf("nhap he so:");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a<=0){
		printf("khong phai tam giac");
	}else{
		if(b<=0){
			printf("khong phai tam giac");
		}else{
			if(c<=0){
			printf("khong phai tam giac");
			}
		}
	}
		p=a+b+c;
		s=(sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a))) / 4;
    if(a+b<=c){
    	printf("khong phai tam giac");
	}else{
		if(a+c<=0){
			printf("khong phai tam giac");
		}else{
			if(b+c<=a){
				printf("khong phai tam giac");
			}else{
				printf("chu vi tam giac la: %d \n",p);
				printf("dien tich tam giac la: %d",s);
				
			}
		}
	}
}
