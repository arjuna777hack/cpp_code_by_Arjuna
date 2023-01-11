#include<iostream>
using namespace std;
void refrence(int*x ,int*y){
    
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
int x=100,y=34545454;
refrence(&x,&y);
cout<<x<<" "<<y;
}