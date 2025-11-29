#include<bits/stdc++.h>
using namespace std;

class Shape {
    public:
    float area , parameter;
    void Area(float r){
        area = 3.41*r*r;
        cout<<"Area of Circle: "<<area<<endl;
    }

    void Area( float l , float b){
        area = l*b;
        cout<<"Area of rectangle : "<<area<<endl;
    }

    void Area(float h  , float a , float  b , float c){
        area = (h*b)/2;
        cout<<"Area of Triangle : "<<area<<endl;
    }

    void Parameter(float r){
         parameter = 2*3.14*r;
         cout<<"Parameter of Circle: "<<parameter<<endl;
    }
    
    void Parameter(float l , float b ){
         parameter = 2*(l+b);
         cout<<"Parameter of rectangle : "<<parameter<<endl;
    }

    void Parameter(float a , float b , float c){
        parameter = a+b+c;
        cout<<"Parameter of Triangle : "<<parameter<<endl;
    }

};

int main(){
    Shape circle , triangle , rectangle;

    float r , le , br , h , a ,b , c;

    cout<<"Enter radius of circlr : "<<endl;
    cin>>r;
    circle.Area(r);
    circle.Parameter(r);

    cout<<"Enter the length and width of Rectangle : "<<endl;
    cin>>le>>br;
    rectangle.Area(le , br);
    rectangle.Parameter(le ,br);

    cout<<"Etner the height and Three sides of Triangle:"<<endl;
    cin>>h;
    cin>>a>>b>>c;

    triangle.Area(h , b);
    triangle.Parameter(a,b,c);

}