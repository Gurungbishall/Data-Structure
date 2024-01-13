#include<iostream>
using namespace std;
#define size 5
int item[size];
int rear;
int front;
void insert();
void Dele();
void Display();
int main()
  {
    int ch=0;
    rear=-1;
    front=0;
    cout<<"1.insert 2.Delete 3.Display 4.Termination\n";
    while(ch!=4)
      {
        cout<<"Enter the your Choice:";
        cin>>ch;
        switch(ch)
          {
            case 1:
              insert();
              break;
            case 2:
              Dele();
              break;
            case 3:
              Display();
              break;
            case 4:
              cout<<"Exiting";
              break;
            default:
              cout<<"Invalid";
              break;
          }
      }
    return 0;
  }
void insert()
  {
    int d;
    cout<<"Enter the item:";
    cin>>d;
    if(rear==size-1)
      {
        cout<<"Full Queue\n";
      }
    else
      {
        rear++;
        item[rear]=d;
      }
  }
void Dele()
  {
    int d;
    d=item[front];
    if(rear<front)
       {
        cout<<"Empty Queue\n";
       }
    else 
      {
      front++;
      cout<<"Deleted elements is"<<d<<endl;
      }
  }
void Display()
  {
    int i;
    if(rear<front)
      {
        cout<<"Empty Queue\n";
      }
    else
      {
       for(i=front;i<=rear;i++)
         {
          cout<<item[i]<<endl;
         }
      }
  }