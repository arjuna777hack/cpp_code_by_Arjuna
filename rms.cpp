#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int i,n,arra[10],ans=0;
cout<<"Enter the number of element"<<endl;
cin>>n;

for(i=0; i<n; i++){
    cout<<"Enter the "<<1+i<<" number element= ";
    cin>>arra[i];
}

for(i=0; i<n; i++){
    
    // ans+=pow(arra[i],2);
    ans+=arra[i]*arra[i];
}
cout<<ans<<endl;
float rms=sqrt(ans);
cout<<"root mean squrare of the number is  "<<rms;

}