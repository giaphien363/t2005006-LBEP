#include <stdio.h>

//last even...
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("\nnhap phan tu a[%d] =",i);
		scanf("%d",&ary[i]);
	}
	int x=1;
	for(int i=n-1;i>=0;i--){
		if(ary[i]%2 == 0){
			x=ary[i];
			printf("\nLAST EVEN %d",x);
			break;
		}
	}
	if(x == 1){
		printf("\nNO EVEN number!!!");
	}
	return 0;
}
