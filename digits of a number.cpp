#include<stdio.h>
#define max 100
int main(){
	int ar[max],i,n,j,c;
	printf("enter the number whose digits are to be printed ");
	scanf("%d",&n);
	while (n!=0){
		c=n%10;
		ar[i]=c;
		n=n/10;
		i++;
	}
	for (j=i-1;j>=0;j--){
		printf("%d , ",ar[j]);
	}
	return 0;
}
