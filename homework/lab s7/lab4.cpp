#include <stdio.h>
//tim tiem can
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
	printf("\nnhap phan tu a[%d]=",i);
	scanf("%d",&a[i]);
    }
    int x;
    printf("\nnhap x=");
    scanf("%d",&x);
    
    int sotiemcan=0;
    for(int i=0;i<n;i++){
    	if(a[i] < x){
			sotiemcan=a[i];
		}
    }
    if(sotiemcan == 0){
    	printf("\nkhong co gia tri nao nho hon x");
	}else{
    printf("\nso tiem can voi x la : %d",sotiemcan);
    }
}
