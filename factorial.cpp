#include<iostream>
using namespace std;
long int factorial(int n){
    if (n == 0)
    {
      return 1;
    }else{
      return n*factorial(n-1);
    }    
}
int main()
  {
    int a;
    cout<<"Enter the number:";
    cin>>a;
    cout<<factorial(a);
    return 0;
  }
