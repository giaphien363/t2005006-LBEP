#include <stdio.h>

int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int x1=0,x2=1,x3=1,i;
	
	for(i=2;x3<n;i++){
		x1=x2;
		x2=x3;
		x3=x1+x2;
	} if(x3!=n){
		printf("%d khong nam trong so fibon",n);
	} else{
	printf("%d dung thu %d trong day fibon",n,i);
    }
}
