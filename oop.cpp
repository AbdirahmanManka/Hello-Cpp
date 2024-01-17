// oop in  C++
#include <iostream>
using namespace std;    
class Rectangle {    
   public:    
       int length;    
       int breadth;    
       void area(){    
           cout<<"Area: "<<length*breadth;    
       }    
       void perimeter(){    
           cout<<"\nPerimeter: "<<2*(length+breadth);    
       }    
};