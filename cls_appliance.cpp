#include<bits/stdc++.h>
using namespace std;

class Appliance{
   private:
    int applianceId;
    string brand;
    float price;
public:
    // Appliance(int  applianceId ,string  brand ,float  price){
    //     this->applianceId = applianceId;
    //     this->brand = brand;
    //     this->price = price;
    // }

    void input(){
        cout<<"Enter the Appliance Id :"<<endl;
        cin>>applianceId;
        cout<<"Enter Brand Name :"<<endl;
        cin>>brand;
        cout<<"Enter Price: "<<endl;
        cin>>price;
    }

    void display(){
        cout<<"Id: "<<this->applianceId<<endl;
        cout<<"Brand: "<<this->brand<<endl;
        cout<<"Price: "<<this->price<<endl;
    }
};

class SmartAppliance : public Appliance {

    int warranty;
    string connectivity;

    public:
        void inputDerive(){
            input();
            cout<<"Enter Warranty:"<<endl;
            cin>>warranty;
            cout<<"Enter connectivity:"<<endl;
            cin>>connectivity;
        }
    
        void displayDerive(){
            display();
            cout<<"Warranty : "<<this->warranty<<endl;
            cout<<"Connectivity :"<<this->connectivity<<endl;
        }

        void displayWarranty(){
            if(warranty>2){
                display();
                cout<<"Warranty : "<<warranty<<endl;
                cout<<"Connectivity :"<<connectivity<<endl;

            }
        }

};


int main(){
    int number = 3;
    SmartAppliance a[number];
    for( int i=0 ; i<number ;i++){
    a[i].inputDerive();
    }
    cout<<"---------------------------------------"<<endl;
    cout<<"-- Appliance Details--"<<endl;
    for( int i=0 ; i<number ; i++){
    a[i].displayDerive();
    cout<<"-----------------------------------------------------"<<endl;
    }
    cout<<"-- Appliance Details Warranty > 2 year --"<<endl;
    for( int i=0 ; i<number ; i++){
    a[i].displayWarranty();
    }
    return 0;
}