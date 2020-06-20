#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,*p;
	printf("nhap n=");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int ));
	for(int i=0;i<n;i++){
		printf("\nnhap phan tu thu %d=",i);
		scanf("%d",p+i);
	}
	int s=0;
	int count =0 ;
	for(int i=0;i<n;i++){
		if(*(p+i) > 0){
			count ++;
			if(count > s){
				s = count;
			}
		}
		if(*(p+i)<=0){
			count=0;
		}
	}
	printf("so luong so duong lien tiep nhieu nhat la : %d",s);
	free(p);
}
