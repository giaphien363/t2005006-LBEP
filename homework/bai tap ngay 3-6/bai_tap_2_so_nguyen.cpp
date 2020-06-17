#include <stdio.h>

int main(){
	int a, b, e; 
	float r;
	printf("nhap vao hai so nguyen : ");
	scanf("%d %d", &a, &b); 
	float d = a/b;
	int s = a*b;
	if( a>b){
		if(b==0){
			printf("error");
		}else{
			printf("hieu cua a va b la %f ",d);
		}
		
	}else{
	    printf("tich cua a va b la %d ",s);
	}
} 
