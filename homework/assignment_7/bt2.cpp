#include <stdio.h>
//buoc nhay, x la so buoc nhay...
int main(){
	//nhap
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
	printf("\nnhap phan tu a[%d]=",i);
	scanf("%d",&a[i]);
    }
    //so buoc nhay
    int x;
    printf("\nnhap x=");
    scanf("%d",&x);
    
    printf("\nmang truoc khi xoay:  ");
    for(int i=0;i<n;i++){
    	printf("%4d",a[i]);
	}
	
	//xoay vong nguoc
    for(int i=0;i<x;i++){
    	int temp = a[0];
    	for(int j=0;j<n;j++){
    		a[j] = a[j+1];
		}
		a[n-1] = temp;
	}
	
	printf("\nmang sau khi xoay:   ");
    for(int i=0;i<n;i++){
    	printf("%5d",a[i]);
	}
}
