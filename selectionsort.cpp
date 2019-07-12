#include<iostream>
void swap(int *xp,int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void sort(int arr[],int n)
{
    int i,j,mini;
    for(i=0;i<n-1;i++)
    {
        mini=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mini])
            {
                mini=j;
                swap(&arr[mini],&arr[i]);
            }
        }
    }
    for (i=0; i < n; i++)
        {
        std::cout << arr[i] << " ";
        //std::cout << std::endl;
        }
}

int main()
{
    int n,array[1000];
    std::cout<<"Enter the size: ";
    std::cin>>n;
    std::cout<<"Enter array elements:\n";
    for(int i=0;i<n;i++)
    {
        std::cin>>array[i];
    }
    sort(array,n);
    printArray(array,n);

}

