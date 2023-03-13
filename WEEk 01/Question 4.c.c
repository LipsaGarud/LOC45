#include<stdio.h>
int main(){
	int a,b,op;
	printf("enter a number a");
	scanf("%d",&a);
	printf("enter a number b");
	scanf("%d",&b);
	printf("1.summation,2.subtraction,3.division,4.multiplication,5.modulus");
	scanf("%d",&op);
	switch (op){
		case 1: 
		printf("sum of %d and %d is %d",a,b,a+b);
	
	case 2:
	printf("Difference of  num a %d and num b %d is:%d",a,b,a-b);
	
	case 3:
		printf("division of  num a %d and num b %d is:%d",a,b,a/b);
		
	case 4:
		printf("multiplication of num a %d and b %d  is:%d",a,b,a*b);
		
	case 5:
		printf("modulus of number a=%d and number b=%d is %d",a,b,a%b);
	}
	}