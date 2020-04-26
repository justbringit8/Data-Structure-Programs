#include<iostream>
using namespace std;

 class node{
      public:
            int data;
            node *next;
        node()
        {
            data=0;
            next=NULL;
        }
};

class linkedlist:public node
{

public:
       node *head,*tail;
       linkedlist()
       {
            head=NULL;
            tail=NULL;
       }

        void create1();
        void insert1();
        void delete1();
        void disp();
        void search1();
};

void linkedlist::create1()
{
    int n;
    cout<<"create\n";
    node *temp=new node;
    cout<<"Enter data";
    cin>>n;
    temp->data=n;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    else
    {
        tail->next=temp;
        tail=temp;
    }
}

void linkedlist::insert1()
{
    cout<<"insert\n";
    int n,ch,pos,count=1;
    node *temp=new node;
    cout<<"\nEnter choice\n1 : At begining\n2 : At specific position\n3 : At the end\n";
    cin>>ch;
    cout<<"Enter data";
    cin>>n;
    temp->data=n;
    temp->next=NULL;
    node *prev=NULL,*curr=head;
    switch(ch)
    {
       case 1://start position ie pos=1
                temp->next=head;
                head=temp;
                break;
        case 2: cout<<"\nEnter the position to insert data";
                cin>>pos;
                while(count!=pos)//travel till that position
                {
                    prev=curr;
                    curr=curr->next;
                    if(curr==NULL)
                    {
                        cout<<"Position Exceeds End\n";
                        return;
                    }
                    count++;
                }
                if(count==pos)//insert at that position
                {
                    temp->next=curr;
                    prev->next=temp;
                }
                break;
        case 3: tail->next=temp;
                tail=temp;
                 break;
        default:cout<<"\nenter the correct option";
    }
}

void linkedlist::delete1()
{
    cout<<"delete";
    node *prev=NULL,*curr=head;
    int count=1,pos;
    cout<<"Enter the position of deletion";
    cin>>pos;
     if(curr==NULL)
     {
        cout<<"\nList is empty";
        return;
     }
    while(count!=pos)
    {
        prev=curr;
        curr=curr->next;
        count++;
    }
    if(pos==count)
    {
        cout<<"\nDeleted data is"<<curr->data;
        prev->next=curr->next;
    }
    else
    {
        cout<<"\nPositoin doesnot exist";
    }

}
void linkedlist::disp()
{
    cout<<"linked List is \n ";
    node *temp=head;
    if(temp==NULL)
        cout<<"\nList is empty";
    while(temp!=NULL)
    {
        cout<<temp->data;
        cout<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

void linkedlist::search1()
{
    cout<<"search";
    int val,pos=0;
    bool flag=false;
    if(head==NULL)
    {
        cout<<"\nList is empty";
        return;
    }
    cout<<"\nEnter the value to be searched";
    cin>>val;
    node *temp;
    temp=head;

    while(temp==NULL)
    {
        pos++;
        if(temp->data==val)
        {
            flag=true;
            cout<<"Element"<<val<<"is found at"<<pos<<"position";
            return;
        }
        temp=temp->next;
    }
    cout<<"\nElement not found";
}



int main()
{
    int ch;
    linkedlist llist;
    cout<<"Program by Prasad Kadam\nLINKED LISTS"<<endl;
    while(1)
    {
        cout<<"\nEnter the operation\n1 : Create\n2 : Insert\n3 : Delete\n4 : Search\n5 : Display\n6 : Exit\n";
        cin>>ch;
        switch(ch)
        {
            case 1:llist.create1();break;
            case 2:llist.insert1();break;
            case 3:llist.delete1();break;
            case 4:llist.search1();break;
            case 5:llist.disp();break;
            case 6:return(0);break;
            default:cout<<"\nEnter the correct choice";
        }

    }
}
