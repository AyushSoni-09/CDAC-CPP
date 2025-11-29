#include<bits/stdc++.h>

using namespace std;


class coordinate{
private:
    float x;
    float y;
public:
    coordinate(){
        this->x = 0;
        this->y = 0;
    }
    coordinate(float x , float y){
        this->x = x;
        this->y = y;
    }

    void input(){
        cin>>x>>y;
    }

    void display(){
        cout<<"x coordinate : "<<x<<endl;
        cout<<"y coordinate : "<<y<<endl;
    }

 
 static float calDistance( coordinate c1 , coordinate c2){
       float dx = c2.x - c1.x;
        float dy = c2.y - c1.y;

        float d = sqrt(dx*dx + dy*dy);

        return d;
    }
};

int main(){
     coordinate c1 , c2 , temp ;

     cout<<"Enter first coordinate (x1,y1):"<<endl;
     c1.input();
     cout<<"Enter second coordinate (x2,y2):"<<endl;
     c2.input();

     cout<<"Coordinates : "<<endl;
     c1.display();
     c2.display();

     cout<<"Distance between two coordinate:"<<endl;
     float dis = coordinate::calDistance(c1,c2);
        cout<<"distance : "<<dis<<endl;
    return 0 ;
}