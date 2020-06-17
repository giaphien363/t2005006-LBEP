#include <stdio.h>

int main(){
	int n;
	printf("nhap so luong phan tu =");
	scanf("%d",&n);
	int x;
	printf("\nnhap gia tri x=");
	scanf("%d",&x);
	int a[n];
	int y = 0,i;
	for(i=0;i<n;i++){
		printf("\nnhap phan tu a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	    if(a[i] == x){
	    	printf("\nx nam trong mang tai a[%d]=%d",i,x);
		}
	}
}
