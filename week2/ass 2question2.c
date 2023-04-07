#include<stdio.h>
void main()
{
	int arr1[20],arr2[20],arr3[20],i,j,k,l;
	int size1,size2,resultsize;
	printf("Enter size of first array:");
	scanf("%d",&size1);
	printf("Enter size of second array:");
	scanf("%d",&size2);
	resultsize=size1+size2;
	printf("Resultant size is:%d\n",resultsize);
	printf("Enter first array\n");
	for(i=0;i<size1;i++)
	{
		scanf("%d",&arr1[i]);
		arr3[i]=arr1[i];
	}
	k=i;
	printf("Enter second array\n");
	for(i=0;i<size2;i++)
	{
		scanf("%d",&arr2[i]);
		arr3[k]=arr2[i];
		k++;
	}
		printf("\nResultant array\n");
	for(i=0;i<k;i++)
	{
		printf("%d\t",arr3[i]);
	}
	printf("\nReversed array is\n");
	for(l=(k-1);l>=0;l--)
	{
		printf("%d\t",arr3[l]);
	}
}
 