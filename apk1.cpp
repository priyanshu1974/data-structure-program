#include<stdio.h>
int main()
{
	int a[5]={20,40,50,30,10};
	int item_search=35;
	int i;
	int found=0;
	for(i=0;i<5;i++)
	{
		if(a[i]==item_search)
		{
			printf("element found",i);
			found=1;
			break;
		}
	    else
		{
			printf("element not found");
			break;
		}
	}
}
