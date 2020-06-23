#include <stdio.h>
#include <string.h>

// search ki tu trong chuoi

bool search(char s[],char n){
	for(int i=0;i<strlen(s);i++){
		if(s[i] == n){
			printf("\nvi tri %c trong chuoi tai %u",n,strchr(s,n)-s);
			return true;
		}
	}
	return false;
}

int main(){
	char n;
	printf("\nnhap ki tu  can tim %c=",n);
	scanf("%c",&n);
	
	char s[100];
	printf("\nnhap chuoi:");
	scanf("%s",s);
	
	if(search(s,n)){
		
	}else{
		printf("khong co!!!");
	}
	
	return 0;	
}
