#include<stdio.h>
int main(){
	int n,sum=0,c;
	printf("enter the number");
	scanf("%d",&n);
	while (n!=0){
		c=n%10;
		sum=sum+c;
		n=n/10;
	}
	printf("the sum of the digits of the given integer is %d",sum);
	return 0;
}
