#include <stdio.h>

int main(){
	int n;
	printf("nhap so luong phan tu =");
	scanf("%d",&n);
	
	int x;
	printf("\nnhap gia tri x=");
	scanf("%d",&x);
	
	int a[n];
	for(int i=0;i<n;i++){
		printf("\nnhap phan tu a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	int y=0;
	for(int i=0;i<n;i++){
	    if(a[i] == x){
	    	printf("\nx nam trong mang tai a[%d]=%d",i,x);
		}else{
			y++;
		}
	}
	if(y!=0){
		printf("\nx khong co trong mang");
	}
	
}
