#include<iostream>
using namespace std;
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition (int a[], int low, int high)
{
    int pivot = a[high];
    int i =low - 1;
    for (int j = low; j <= high- 1; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[high]);
    return (i + 1);
}
void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(a, low, high);
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}
int main()
{
    int a[100],i,j,m,s;
    cout<<"Enter no of elements to be entered in aay: ";
    cin>>s;
    for(i=0;i<s;i++)
    {
        cin>>a[i];
    }
    quickSort(a,0,s-1);
    for (i=0;i<s;i++)
    {
        cout<<a[i]<<" ";
    }
}


