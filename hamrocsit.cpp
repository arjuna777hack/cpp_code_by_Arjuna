/*Write a program according to the specification given below:

– Create a class Account with data members acc no, balance, and min_balance(static)
-Include methods for reading and displaying values of objects
– Define static member function to display min_balance
-Create array of objects to store data of 5 accounts and read and display values of each object*/


#include<iostream>
using namespace std;
class Account{
    int acc_no;
    float balance;
    static float min_balance;
    public:
    void input_data(){
        cout<<"Enter the account no"<<endl;
        cin>>acc_no;
        cout<<"enter the balance"<<endl;
        cin>>balance;
    }
    void display_data(){
        cout<<"Account number is : "<<acc_no<<endl;
        cout<<"balance is : "<<balance<<endl;


    }
    static void display_min_balance(){
        cout<<"minimum balance is: "<<min_balance<<endl;
    }
};
float Account::min_balance=1000;
int main()
{
    Account accounts[5];
    for(int i=0; i<5; i++){

cout<<"Enter the data for accont "<<i+1<<": "<<endl;
accounts[i].input_data();


    }
    //cout<<"Data for all accounts are :"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<"data for accout "<<i+1<<" : "<<endl;
        accounts[i].display_data();
    }
    Account::display_min_balance();
    return 0;


}