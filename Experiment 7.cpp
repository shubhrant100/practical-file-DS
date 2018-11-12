#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct linked_list
{
    node *front,*rear;
    linked_list()
    {
        front=NULL;
        rear=NULL;
    }
    void insert_beg();
    void disp();
    node* createnode(int);
    void del();
};
node* linked_list::createnode(int x)
{
    node *temp=new node;
    temp->data=x;
    temp->next=NULL;
    return temp;
}
void linked_list::insert_beg()
{
    int ele;
    cin>>ele;
    node *p,*ptr;
    p=createnode(ele);
    if(front==NULL)
    {
        front=p;
        rear=p;
    }
    else
    {
        rear->next=p;
        rear=p;
    }
}
void linked_list::disp()
{
    rear->next=front;
    node *temp=front;
    if(front==NULL)
    {
        cout<<"Underflow";
        cout<<"\nQueue is empty";
    }
    else
    {
        while(temp->next!=front)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<temp->data;
    }
}
void linked_list::del()
{
    if(front==rear)
    {
        cout<<"Deleted element is: "<<front->data<<endl;
        front=NULL;
    }
    else if(front==NULL)
    {
        cout<<"Underflow";
        cout<<"\nQueue is empty";
    }
    else
    {
        cout<<"Deleted element is: "<<front->data<<endl;
        node* temp=front;
        front=front->next;
        delete temp;
    }
}
int main()
{
    int ch,n,count=0;
    linked_list l1;
    cout<<"Enter the size of queue ";
    cin>>n;
    cout<<"\nEnter choice\n1.Insert\n2.disp\n3.Delete\n";
    cin>>ch;
    while(ch)
    {
        if(ch==1 )
        {
            if(count==n)
            {
                cout<<"Overflow";
            }
            else
            {
                l1.insert_beg();
                count++;
            }
        }
        else if(ch==2)
        {
            l1.disp();
        }
        else if(ch==3)
        {
            l1.del();
            count--;
        }
        cout<<"\nEnter choice again: ";
        cin>>ch;
    }
}

