#include<stdio.h>
int main(){
	int i,j,n=20;
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++){
		
		if(i==1||j==1||i==n||j==n)
		{
			printf("s");
			printf("\t");
		}
else		
		printf(" ");
	}
	printf("\n");
}
}