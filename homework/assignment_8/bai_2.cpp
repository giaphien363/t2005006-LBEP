#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,*p;
	printf("nhap n=");
	scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
    	printf("nhap gia tri pt thu %d=",i);
    	scanf("%d",p+i);
	}
	int sum=0;
	int tongcon=0;
	for(int i=0;i<n;i++){
		if(*(p+i) > 0){
			tongcon += *(p+i);
			if(tongcon>sum){
				sum=tongcon;
			}
		}
		if(*(p+i)<0){
			tongcon=0;
		}
	}
	printf("tong chuoi so duong lien tiep lon nhat la: %d",sum);
	free(p);
	
}
