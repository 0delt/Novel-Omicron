#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<iomanip>
using namespace std;
char a[10][20],b[20];
int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(strcmp(a[k],a[j])<0) k=j;
		if(i!=k)
		{
			strcpy(b,a[i]);
			strcpy(a[i],a[k]);
			strcpy(a[k],b);
		}
	}	
	for(i=0;i<n;i++)
		printf("%s ",a[i]);
	return 0;
}
