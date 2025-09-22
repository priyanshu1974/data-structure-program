#include<stdio.h>
int main()
{
	int a[10];
	int n,i;
	printf("number of element in array: ");
    scanf("%d",&n);
    printf("enter %d element:\n",n);
    for(i=0;i<n;i++)
    {
	     printf("element %d: ",i+1);
		 scanf("%d",&a[i]);
    }
    printf("\nelement in array:\n ");
    for(i=0;i<n;i++)
    {
	printf("element %d = %d\n",i,a[i]);
    }
    return 0;
}

