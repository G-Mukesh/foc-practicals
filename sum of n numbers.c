#include<stdio.h>
int main(){
	int n,i,sum=0;
	printf("enter the number n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+i;
		
	}
	printf("the sum of the n numbers are : %d",sum);
	return 0;
	
}
