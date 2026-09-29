//distance addition
#include <iostream>
#include <string>
using namespace std;

class Distance{
    int feet,inches;

public:
void read(){
    cout<<" Enter feet and intches : ";
    cin >> feet >> inches ;

}
Distance operator+(Distance d){
    Distance temp;
    temp.feet = feet +d.feet ;
    temp.inches= inches + d.inches ;
    if(inches >=12){
        temp.feet +=temp.inches /12;
        temp.inches= temp.inches %12;
    }
    return temp;
}
  void display(){
    cout << feet << "feet " << inches <<" inches" ;
  }
};
int main(){
     Distance d1,d2,d3;
     d1.read();
     d2.read();
     d3=d1+d2;
     cout << "result :";
    d3.display();
    return 0;
}