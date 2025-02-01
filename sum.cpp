#include<iostream>
using namespace std;
class Sum{
         public:
    int x,y;
    Sum(int k,int m){
    x=k;
    y=m;
    int sum=x+y;
     cout<<"sum is "<<sum;
    }
};
int main(){
      int x,y;
      cout<<"Enter first number: ";
      cin>>x;
      cout<<"Enter second number: ";
      cin>>y;
      Sum MyOBJ(x,y);
}