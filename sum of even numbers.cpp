#include<stdio.h>
int main(){
	int n,i,sum=0,c=0;
	printf("enter the end value n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		c=c+2;
		if (c<=n){
			sum=sum+c;
		
		}
		
		
	}
	printf("the sum of even numbers upto n is %d",sum);
	return 0;
	
}
