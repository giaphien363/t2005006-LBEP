#include <stdio.h>

int main(){
	int a, b, c;
	printf("nhap ba so khac nhau: ");
	scanf("%d %d %d" , &a, &b, &c);
	int min = a;
	 
	if(a<b){
		if(a<c){
			printf("min la %d \n",a);
		}else{
			printf("min la %d \n",c);
		}
	}else{
		if(b<c){
			printf("min la %d \n", b);
		}else{
			printf("min la %d \n",c);
		}
	}
}
