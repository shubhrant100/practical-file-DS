#include <iostream>

using namespace std;

void merge(int a[],int low,int high)
{
	int i ,j ,k,temp[100],mid;
	mid=(low+high)/2;
	i=low;
	k=low;
	j=mid+1;
	
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		{
			temp[k++]=a[i++];
		}
		else
		{
			temp[k++]=a[j++];

		}
	}
	while(i<=mid)
	{
		temp[k++]=a[i++];
	}
	while(j<=high)
	{
		temp[k++]=a[j++];
	}
	for(int p=low;p<=high;p++)
	{
	
		a[p]=temp[p];
	}
	
}


void mergesort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		
		merge(a,low,high);		
	}
	
	
}

int main()
{
	int n,a[100];
	cout<<"enter size\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"enter no\n";
		cin>>a[i];
	}
	mergesort(a,0,n-1);
	
	cout<<"array\n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}
