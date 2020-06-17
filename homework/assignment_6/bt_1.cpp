#include <stdio.h>

int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int a[n];
	int sole=0;
	for(int i=0;i<n;i++){
		printf("\nnhap phan tu a[%d] =",i);
		scanf("%d",&a[i]);
	}
	for(int i = 0 ;i<n;i++){
		if(a[i]%2 != 0){
			sole=a[i];
		}
	}
	if(sole%2 != 0 ){
		printf("\nso le cuoi cung la: %d",sole);
	}else{
		printf("\nkhong co so le");
	}
}
