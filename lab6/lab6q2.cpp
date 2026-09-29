#include <iostream>
#include <string>
using namespace std;
class complex{
    int real, img;
public:
  void read(){
    cout << "enter real and img :";
    cin >> real >> img ;
  }
  complex operator-(complex c){
    complex temp;
    temp.real= real - c.real;
    temp.img= img - c.img; 
    return temp;
  }
  void display(){
    cout<< real;
    if(img>= 0)
     cout <<" +" << img <<"i";
    else
      cout<<"-"<< -img <<"i" ;
    
  }
};
int main(){
    complex c1,c2,c3;
    c1.read();
    c2.read();
    c3=c1 -c2;
    cout <<"result :"; c3.display();
    return 0;
}