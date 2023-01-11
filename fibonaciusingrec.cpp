#include<iostream>
using namespace std;
int fibo(int n){

if(n==0 || n==1){
    
    return n;
    
}
int ans=fibo(n-1)+fibo(n-2);
return ans;

}



int main(){
int n,i=0;
cout<<"Enter the value for the total number of terms";
cin>>n;
while(i<n){
    cout<<" "<<fibo(i);
    i++;
}




}