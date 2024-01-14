#include<iostream>
using namespace std;
#define size 5
struct Queue
{
  int item[size];
  int rear;
  int front;
}qu;
void insert();
void Dele();
void Display();
int main()
  {
    int ch=0;
    qu.rear=-1;
    qu.front=0;
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
    if(qu.rear==size-1)
      {
        cout<<"Full Queue\n";
      }
    else
      {
        qu.rear++;
        qu.item[qu.rear]=d;
      }
  }
void Dele()
  {
    int d;
    d=qu.item[qu.front];
    if(qu.rear<qu.front)
       {
        cout<<"Empty Queue\n";
       }
    else 
      {
      qu.front++;
      cout<<"Deleted elements is"<<d<<endl;
      }
  }
void Display()
  {
    int i;
    if(qu.rear<qu.front)
      {
        cout<<"Empty Queue\n";
      }
    else
      {
       for(i=qu.front;i<=qu.rear;i++)
         {
          cout<<qu.item[i]<<endl;
         }
      }
  }