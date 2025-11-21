#include<iostream>
using namespace std;

void calGrade(int m){
    if(m>=90 && m<=100){cout<<"Grade is A"<<endl;}
    else if( m>=75 && m<90){ cout<<"Grade is B"<<endl;}
    else if ( m>=65 && m<75){ cout<<"Grade is C"<<endl;}
    else if( m>=45 && m<65){ cout<<"Grade is D"<<endl;}
    else if(m>=35 && m<45){cout<<"Grade is E"<<endl;}
    else{cout<<"Grade is F"<<endl;}

}


int main(){
    int m;
    cout<<"Enter the Marks of Student"<<endl;
    cin>>m;
    calGrade(m);

    return 0;
}