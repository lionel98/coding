#include<stdio.h>
void fibbo2(int n)
{
    int a=0,b=1,next;
    for(int i=0;i<n;i++)
    {
        if(i<=1)
        {
            next=i;
        }
        else
        {
            next=a+b;
            a=b;
            b=next;
        }
        printf("%d\n",next);

    }
}
int main()
{
    int x;
    printf("Enter the value: ");
    scanf("%d",&x);
    fibbo2(x);
    return 0;

}
