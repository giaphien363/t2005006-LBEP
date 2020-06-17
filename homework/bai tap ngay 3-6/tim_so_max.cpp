#include <stdio.h>

int main(){
	int a, b, c;
	printf("nhap vao ba so :  ");
	scanf("%d %d %d", &a, &b, &c);


	if(a>b){
		if(a>c){
			printf("max la %d \n", a);
		}else{
			printf("max la %d \n", c);
		}
		
	}else{
		if(b>c){
			printf("max la %d \n", b);
		}else{
			printf("max la %d \n", c);
		}
	}

} 
