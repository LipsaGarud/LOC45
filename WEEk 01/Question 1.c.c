#include<stdio.h>
int main(){
  int i;
  printf("Numbers from 1 to 100:\n");
  for(i=1;i<=100;i++)
  {
  if(i%3==0 && i%5==0)
  {
  	printf("Fizz buzz\t");
  }
  else if(i%5==0)
  {
  	printf("Buzz\t");
  }
  else if(i%3==0)
  {
 printf("fizz\t");
  }
 else 
{
	printf("%d\t",i);
}
}
}