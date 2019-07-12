#include<iostream>
void sort(int arr[],int n)
{
    int i,j,key;
    for( i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
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
    std::cout<<"The selection sorted array is:\n";
    printArray(array,n);

}


