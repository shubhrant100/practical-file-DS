#include<iostream>
using namespace std;
int main()
{
int a[20],n,i,m,pos,ele,ch,f=0;
cout<<"Enter the size of array: ";
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"\nEnter choice:\n1 for insertion\n2 for deletion\n3 for searching\n4 for display\n";
cin>>ch;
while(ch!=0)
{
    switch(ch)
    {
    case 1:
        cout<<"Enter position and element\n";
        cin>>pos>>ele;
        m=n-pos-1;
        for(i=n;i>=m;i--)
        {
            a[i+1]=a[i];
        }
        a[pos]=ele;
        n=n+1;
        break;
    case 2:
        cout<<"Enter position and element\n";
        cin>>pos;
        for(i=pos;i<n;i++)
        {
            a[i]=a[i+1];
        }
        n=n-1;
        break;
    case 3:
        f=0;
        cout<<"\nEnter the element to search: ";
        cin>>ele;
        for(i=0;i<n;i++)
        {
            if(a[i]==ele)
            {
                cout<<"\nPosition is: "<<i+1;
                f=1;
                break;
            }
        }
        if(f==0)
            cout<<"\nElement not found";
        break;
    case 4:
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        break;
    }
    cout<<"\nEnter choice again: ";
    cin>>ch;
}
}

