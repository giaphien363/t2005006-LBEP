#include <stdio.h>
#include <string.h>

//nhap 1 mang n chuoi,sort theo alpha

int main(){
	int n;
	printf("nhap so chuoi n =");
	scanf("%d",&n);
	
	char s[n][100];
	for(int i=0;i<n;i++){
		printf("\nnhap chuoi:");
	    scanf("\n%s",s[i]);
	}
	char tmp[100];
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n-i-1;j++){
			
			if(strcmp(s[j],s[j+1]) > 0 ){
				
				strcpy(tmp,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],tmp);
			}
		}
	}
	
	printf("\nchuoi sau khi sort: ");
	for(int i=0;i<n;i++){
		printf("\n%s",s[i]);
	}
	return 0;
}
