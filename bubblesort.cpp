#include<iostream>
void swap(int *xp,int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void sort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }

}
void printArray(int arr[], int size)
{
    int i;
     for (i=0; i < size; i++)
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
    std::cout<<"The bubble sorted array is:\n";
    printArray(array,n);

}

