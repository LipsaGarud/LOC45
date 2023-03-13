#include<stdio.h>
int main(){
int i,sum =0;

printf("enter a number");
scanf("%d",&i);
do
{
	sum+=(i%10);
	i=i/10;
}
while (i!=0);
printf("%d",  sum);
}

