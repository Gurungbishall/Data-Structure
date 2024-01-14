#include<iostream>
#include<malloc.h>
using namespace std;
struct list
  {
    int data;
    struct list *next;
  };
typedef struct list newtype;
newtype *first,*last;
void insert_at_first(int);
void insert_at_end(int);
void delete_at_first();
void delete_at_last();
void display();
int main()
  {
    int item,ch=0;
    cout<<"1.Insert_at_first\n2.Insert at end\n3.Delete at first\n4.Delete at end\n5.Display\n6.termination\n";
    while(ch!=6)
      {
       cout<<"Enter the choice:\n";
        cin>>ch;
        switch (ch)
        {
        case 1:
          cout<<"enter the item:";
          cin>>item;
          insert_at_first(item);
          break;
        case 2:
          cout<<"enter the item:";
          cin>>item;
          insert_at_end(item);
          break;
        case 3:
          delete_at_first();
          break;
        case 4:
          delete_at_last();
          break;
        case 5:
          display();
          break;
        case 6:
          cout<<"Exiting....\n";
          break;
        default:
          cout<<"Invalid number\n";
          break;
        }

      }


    return 0;
  }
void insert_at_first(int item)
  {
    newtype *newnode;
    newnode=(newtype*)malloc(sizeof(newtype));
    newnode->data=item;
    newnode->next=NULL;
    if(first==NULL)
      {
        first=last=newnode;
      }
    else
      {
        newnode->next=first;
        first=newnode;
      }
  }
void insert_at_end(int item)
  {
    newtype *newnode;
    newnode=(newtype*)malloc(sizeof(newtype));
    newnode->data=item;
    if(first == NULL)
      {
        newnode->next=NULL;
        first=last=newnode;
      }
    else
      {
        newnode->next=NULL;
        last->next=newnode;
        last=newnode;
      }
  }
void delete_at_first()
  {
    int d;
    if(first==NULL)
      {
        cout<<"Empty list\n";
      }
    else if(first==last)
      {
        d=first->data;
        first=last=NULL;
        cout<<"Deleted number is "<<d<<endl;
      }
    else
      {
        d=first->data;
        first=first->next;
        cout<<"Deleted number is "<<d<<endl;
      }
  }
void delete_at_last()
  {
    newtype *temp;
    temp=first;
    int d;
    if(first==NULL)
      {
        cout<<"Empty list\n";
      } 
    else if(first==last)
      {
        d=first->data;
        first=last=NULL;
        cout<<"Deleted number is "<<d<<endl;
      }
    else
      {
        d=last->data;
        while (temp->next!=last)
        {
          temp=temp->next;
        }
      last=temp;
      last->next=NULL;
      cout<<"Deleted number is"<<d<<endl;
      }
  }
void display()
  {
    newtype *temp;
    temp=first;
    if(first==NULL)
      {
        cout<<"Empty Lisit\n";
      }
    else
      {
        while(temp!=NULL)
          {
            cout<<temp->data<<endl;
            temp=temp->next;
          }
        free(temp);
      }
  }
