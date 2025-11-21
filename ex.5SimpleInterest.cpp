#include<iostream>
using namespace std;

float SI( int p , int r , int t){
    float si = (p*r*t)/100;
    return si;
}

int main(){
    float p , r , t;
    cout<<"Enter Price , Rate and Time for SI:"<<endl;
    cin>>p>>r>>t;

    float res = SI(p , r , t); 

    cout<<"simple Interest is "<<res<<endl;
    

    return 0;
}