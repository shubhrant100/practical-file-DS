#include<iostream>
using namespace std;
int main()
{
int a[20],n,i,ele,f=0;
cout<<"Enter size of array: ";
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
cout<<"\nEnter the element to search: ";
cin>>ele;
for(i=0;i<n;i++)
{
    if(a[i]==ele)
    {
        cout<<"\nPosition of "<<ele<<" is: "<<i+1;
        f=1;
        break;
    }
}
if(f==0)
    cout<<"\nElement not found\n";
return 0;
}
