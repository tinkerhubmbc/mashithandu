#include<stdio.h>
void sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
		if(a[j]>a[j+1])
		{
	     temp=a[j];
		 a[j]=a[j+1];
		a[j+1]=temp;
		}
	  }
	}
}
int main()
{
	int a[15];
	int i,n;
	 printf("enter the limit :");
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	 	printf("Enter the elements:");
	 	scanf("%d",&a[i]);
	 }
	 sort(a,n);
	 printf("Sorted array :\n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d\t",a[i]);
	 }
}
