#include <stdio.h>
int main(){
int i;
printf("enter a number");
scanf("%d",&i);
if(i>0)
{
	printf("positive\t");
}
else if(i<0)
{
	printf("negative\t");
}
else{
	printf("%d",i);
}
}


