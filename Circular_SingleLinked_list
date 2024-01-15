#include<iostream>
using namespace std;
struct circular_single_list
  {
    int data;
    struct circular_single_list* next; 
  };
typedef struct circular_single_list newtype;
newtype *first,*last;
void insert_at_first(int);
void insert_at_end(int);
void delete_at_first();
void delete_at_end();
void display();
int main()
  {
  int ch=0,item;
  cout<<"1.Inert at first\n2.Insert at last\n3.Delete at first\n4.delete at last\n5.Display\n6.Exit\n";
  while (ch!=6)
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
          delete_at_end();
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
    newtype* newnode;
    newnode=(newtype*)malloc(sizeof(newtype));
    newnode->data=item;
    newnode->next=NULL;
    if(first==NULL)
      {
        first=last=newnode;
        first->next=first;
      }
    else
      {
        newnode->next=first;
        first=newnode;
        last->next=first;
      }
  }
void insert_at_end(int item)
  {
    newtype* newnode;
    newnode=(newtype*)malloc(sizeof(newtype));
    newnode->data=item;
    newnode->next=NULL;
    if(first==NULL)
      {
        first=last=newnode;
        first->next=first;
      }
    else
      {
        last->next=newnode;
        last=newnode;
        last->next=first;
      }
  }
void delete_at_first()
  {
    newtype* temp;
    temp=first;
    if(first==NULL)
      {
        cout<<"Empty List\n";
      }
    else if(first==last)
      {
        first=last=NULL;
        cout<<"Deleted item is:"<<temp->data<<endl;
        free(temp);
      }
    else  
      {
        first=first->next;
        last->next-first;
        cout<<"Deleted item is:"<<temp->data<<endl;
        free(temp);
      }
  }
void delete_at_end()
  {
    newtype* temp;
    int d;
    d=last->data;
    temp=first;
    if(first==NULL)
      {
        cout<<"Empty List\n";
      }
    else if(first==last)
      {
        first=last=NULL;
        cout<<"Deleted item is:"<<temp->data<<endl;
        free(temp);
      }
    else  
      {
        while(temp!=last)
          {
            temp=temp->next;
          }
        last=temp;
        last->next=first;
        cout<<"Deleted item is:"<<d<<endl;
        free(temp);
      }
  }
void display()
  {
     newtype* temp;
     temp=first;
     if(first==NULL)
       {
        cout<<"Empty List\n";
       }
      else
        {
          do
          {
            cout<<temp->data<<endl;
            temp=temp->next;
          }while(temp!=first);
        }
     
  }
