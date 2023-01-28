#include<stdio.h>
int main(){
	int l[20],n,i;
	printf("enter the decimal number");
	scanf("%d",&n);
	for (i=0;n>0;i++){
		l[i]=n%2;
		n=n/2;
	}
	printf("the binary number is");
	for (i=i;i>0;i--){
		printf("%d",l[i]);
	}
	return 0;
}
