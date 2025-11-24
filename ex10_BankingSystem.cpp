#include<bits/stdc++.h>
using namespace std;

long balance = 0l ;
vector<string> statement;

void deposit(long amount){
    balance+=amount;
    statement.push_back(" Deposit : " + to_string(amount)); 

    cout<<"Available Balance is "<<balance<<endl;
}

void withdraw( long amount){

   
    balance-=amount;
    statement.push_back(" Withdraw : "+ to_string(amount));
    cout<<"Available Balance is "<<balance;
}

void checkBalance(){
    cout<<" Checking your Balance...."<<endl;

    cout<<"Available Balance is : "<<balance<<endl;
}

void miniStatement(){
    cout<<"Getting your Statement..."<<endl;

    for(int i = 0 ; i< statement.size() ; i++){
        cout<<statement[i]<<endl;
    }
}


int main(){
    long  Amount;
    int flag = 1;

    while(flag!=0){

        int choice;
        
        cout<<"1. Withdraw Amount"<<endl;
        cout<<"2. Deposit Amount"<<endl;
        cout<<"3. Check Balance"<<endl;
        cout<<"4. Get STatement"<<endl;
        cout<<"5. EXIT"<<endl;

        cout<<"Enter you choice:"<<endl;
        cin>>choice;

        switch(choice){
            case 1:{
                 if( balance == 0 ){
                    cout<<" Empty Account."<<endl;
                    break;
                    }
                else{
                cout<<"Enter you Amount:"<<endl;
                cin>>Amount;
                withdraw(Amount);
                break;
                }
                }
                
            case 2:{
                cout<<"Enter you Amount: "<<endl;
                cin>>Amount;
                deposit(Amount);
                break;
                }

            case 3:{
                checkBalance();
                break;
                }
            case 4:{
                miniStatement();
                break;
                }    
            case 5:{
                cout<<"EXITING......"<<endl;
                flag=0;
                break;
            }

            default: {
                cout<<"Please Enter Valid Choice"<<endl;
            }
        }
        
    }

    return 0;
}