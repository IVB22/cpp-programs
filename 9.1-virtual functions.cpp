#include<iostream> 
using namespace std; 
class shape 
{ 
 public: 
  virtual void draw() 
  { 
   cout<<"Draw a generic shape"<<endl; 
  } 
}; 
class circle:public shape 
{ 
          
Roll No.: Date: 
Programming with C++ Lab Page No.: 
 
 
 public: 
 
void draw() override 
  { 
  cout<<"drawing a circle"<<endl; 
  } 
}; 
class rectangle:public 
shape 
{ 
 public: 
  void draw() override 
  { 
 cout<<"drawing a rectangle"<<endl; 
  } 
}; 
class triangle:public 
shape 
{ 
 public: 
  void draw() override 
  { 
 cout<<"drawing a triangle"<<endl; 
  } 
}; 
int main() 
{ 
      cout<<"Roll no:24B11AI457"<<endl; 
 shape* shapePtr; 
 circle c; 
 shapePtr=&c; 
 shapePtr->draw(); 
 rectangle r; 
 shapePtr=&r; 
 shapePtr->draw(); 
 triangle t; 
 shapePtr=&t; 
 shapePtr->draw(); 
          
 
Roll No.: Date: 
Programming with C++ Lab Page No.: 
 
 
 shape s; 
 shapePtr=&s; 
 shapePtr->draw(); 
 return 0; 
} 
