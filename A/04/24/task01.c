#include<stdio.h>
int main()
{
	int a[50];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("\n%d",a[n-i]);
	}
	return 0;
}
