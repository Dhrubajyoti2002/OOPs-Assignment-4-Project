/* Banking system */
#include<iostream>
using namespace std  ;
class BankAccount{

private :

    int accountNum ;
    char name [40];
    

public:
 void getDetails(void);
 void putDetails(void);
   int balance  ;

};

void BankAccount::getDetails(){
    cout<<"Enter the Account Holder Name"<<endl;
    cin>>name  ;
   cout<<"Enter the Account Number";
   cin>>accountNum;
   cout<<"Enter the Acoount Balance";
   cin>>balance;

}
void BankAccount::putDetails(){
    cout<<"NAME OF THE ACCOUNT HOLDER : "<<name<<endl ;
    cout<<"ACCOUNT NUMBER  : "<<accountNum<<endl;
    cout<<"ACCOUNT BALANCE  : "<<balance<<endl;
}
int main(){
   BankAccount b1 ;
   int m,amount;
   b1.getDetails();
   b1.putDetails();
   cout<<"Will you want to add/withdraw to your bank account";
   cin>>m;
   if(m==0){
    cout<<"Enter amount to add";
    cin>>amount;
   int total = b1.balance + amount ;
   cout<<"New Balance: "<<total<<endl;
   }
   if(m==1){
    cout<<"Enter amount to withdraw";
    cin>>amount;
    int total  = b1.balance - amount ;
    cout<<"New Balance: "<<total<<endl;
   }
    return  0  ;
}