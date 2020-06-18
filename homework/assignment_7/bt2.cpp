#include <stdio.h>

int main(){
	int n;
	printf("nhap so luong phan tu n=");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
	printf("\na[%d]=",i);
	scanf("%d",&a[i]);
    }
    int x;
    printf("\nnhap x=");
    scanf("%d",&x);
    int i,y;
    for(i=0;i<n;i++){
    	if(x==a[i]){
    		y=i+1;
		}
	}
	for(;y<n;y++){
		printf("%d\t",a[y]);
	}
	for(i=0;i < y;i++){
		printf("%d\t",a[i]);
	}
}
