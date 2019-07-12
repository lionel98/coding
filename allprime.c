#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
int i,n,flag=0,ctr=0;
n=atoi(argv[1]);
for(i=2;i<=n;i++)
{
for(int j=2;j<i;j++)
{
	if(i%j==0)
	{
	flag=1;
	break;
	}
}

if(flag==0)
{
printf("%d ",i);
ctr++;
}
flag=0;
}
printf("\nThe total number of primes: %d",ctr);
return 0;
}
