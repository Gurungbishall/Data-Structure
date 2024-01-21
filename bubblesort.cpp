#include<iostream>
using namespace std;
void bubblesort(int a[],int n){
    int temp;
    for(int i = 0;i < n-1; i++){
        for(int j = 0;j < n-i-1; j++){
            temp = a[j];
            if(a[j] > a[j+1]){
             a[j] = a[j+1];
             a[j+1] = temp;   
            }
        }
    }
}
void print(int a[],int n){
    for (int i = 0; i < n; i++){
      cout<<a[i]<<" ";
    }
}
int main()
  {
    int a[100];
    int n;
    cout<<"Enter the number of elements you want to sorts:";
    cin>>n;
    cout<<"Enter the elements:\n";
    for (int i = 0; i < n; i++){
      cin>>a[i];
    }
    bubblesort(a,n);
    print(a,n);
    return 0;
  }
