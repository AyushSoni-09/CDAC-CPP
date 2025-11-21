#include<iostream>
using namespace std;

void add(int a , int b){
    cout<<"Addition is "<<a+b<<endl;
}
void sub(int a , int b ){
    cout<<"Subtraction is "<<a-b<<endl;
}
void mul(int a , int b){
    cout<<"Multipication  is "<<a*b<<endl;
}
void divi(int a , int b){
   cout<<"Division is "<<a/b<<endl;
}
main(){
    int a , b;
    int choice=0;
   

    
    int stop = 1;

    while(stop != 0){
        cout<<"Enter two numbers:"<<endl;
        cin>>a>>b;
        cout<<"1.Add"<<endl;
        cout<<"2.subracte"<<endl;
        cout<<"3.Divide"<<endl;
        cout<<"4.Multiply"<<endl;
        cout<<"5 EXIT"<<endl;

        cout<<"Entre your choice:"<<endl;
        cin>>choice;


        switch(choice){
            case 1: add(a,b);break;
            case 2: sub(a,b);break;
            case 3: divi(a,b);break;
            case 4: mul(a,b);break;
            case 5: stop=0;break;
            default: cout<<"Please Enter Valid choice"<<endl;
        }
    }
}