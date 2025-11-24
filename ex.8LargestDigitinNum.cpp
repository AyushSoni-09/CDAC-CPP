#include<bits/stdc++.h>
using namespace std;

int findLargest(int num){
    cout<<"function is running"<<endl;

    int maxi = INT_MIN;

    while(num!=0){
        int rem = num%10;
        maxi=max(rem , maxi); 
        num = num/10;
    }

    
}

int main(){

    int num;
    cout<<"Enter the Number: "<<endl;
    cin>>num;
    int largest = findLargest(num);
    cout<<"Largest Digit in Number "<<largest<<endl;
    return 0;
}