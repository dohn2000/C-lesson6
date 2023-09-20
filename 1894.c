#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n;
	printf("\nNhap N = ");
	scanf("%d",&n);
	int p[n];
	int i;
	for (i=0;i<n;i++)
	{
		printf("Nhap phan tu p[%d] = ",i+1);
		scanf("%d",&p[i]);
	}
	for (i=n-1;i>=0;i--)
	{
		printf("%d, ",p[i]);
	}
	int temp;
	for (i=0;i<n/2;i++)
	{
		p[i]=p[i]+p[n-i-1];
		p[n-1-i]=p[i]-p[n-i-1];
		p[i]=p[i]-p[n-i-1];
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",p[i]);
	}
	return 0;
}
