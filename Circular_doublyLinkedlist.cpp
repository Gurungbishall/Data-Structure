#include<iostream>
using namespace std;
struct doublylist
  {
  int data;
  struct doublylist* next;
  struct doublylist* prev;
  };
typedef struct doublylist newtype;
newtype* first,*last;
void insert_at_first(int);
void insert_at_end(int);
void insert_at_anyposition(int,int);
void delete_at_first();
void delete_at_end();
void delete_at_anyposition(int);
void display();
int main()
  {
  int item,pos,ch=0;
  cout<<"1.Inert at first\n2.Insert at last\n3.Insert at anyposition\n4.Delete at first\n5.delete at last\n6.Delete at anyposition\n7.Display\n8.Exit\n";
  while (ch!=8)
  {
    cout<<"Enter the choice\n";
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
      cout<<"enter the item:";
      cin>>item;
      cout<<"Enter the position:";
      cin>>pos;
      insert_at_anyposition(item,pos);
      break;
    case 4:
      delete_at_first();
      break;
    case 5:
      delete_at_end();
      break;
    case 6:
      cout<<"Enter the position:";
      cin>>pos;
      delete_at_anyposition(pos);
    case 7:
      display();
      break;
    case 8:
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
    newnode->next=newnode->prev=NULL;
    if(first==NULL) 
      {
        first=last=newnode;
        first->next=first->prev=first;
      }
    else
      {
        first->prev=newnode;
        last->next=newnode;
        newnode->prev=last;
        first=newnode;
      } 
  }
void insert_at_end(int item)
  {
    newtype* newnode;
    newnode=(newtype*)malloc(sizeof(newtype));
    newnode->data=item;
    newnode->next=newnode->prev=NULL;
    if(first==NULL) 
      {
        first=last=newnode;
        first->next=first->prev=first;
      }
    else
      {
       last->next=newnode;
       newnode->prev=last;
       first->prev=newnode;
       last=newnode;
      } 
  }
void insert_at_anyposition(int item,int pos)
  {
    newtype* newnode,*temp;
    newnode=(newtype*)malloc(sizeof(newtype));
    newnode->data=item;
    newnode->next=newnode->prev=NULL;
    if(first==NULL) 
      {
        first=last=newnode;
        first->next=first->prev=first;
      }
    else
      {
       temp=first;
       for(int i=1;i<pos-1;i++)
         {
           temp=temp->next;
         }
        newnode->next=temp->next;
        newnode->prev=temp;
        temp->next=newnode;
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
        first->prev=last;
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
        first->prev=last;
        cout<<"Deleted item is:"<<d<<endl;
        free(temp);
      }
  }
void delete_at_anyposition(int pos)
  {
    newtype* temp,*dele;
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
       for (int i = 1; i < pos-1; i++)
       {
        temp=temp->next;
       }
       dele=temp->next;
       temp->next=dele->next;
       (dele->next)->prev=temp;
       cout<<"Deleted item is:"<<dele->data<<endl;
       free(dele);
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
         while (temp!=last)
         {
          cout<<temp->data;
          temp=temp->next;
         }
         cout<<last->data;
        }
     
  }
