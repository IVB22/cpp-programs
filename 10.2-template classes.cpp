#include<iostream> 
using namespace std; 
template <class T> 
class calculator 
{ 
 private: 
  T num1; 
  T num2; 
  public: 
 calculator(T n1,T n2) 
{ template classes
  num1=n1; 
  num2=n2; 
} 
T add() 
{ 
 return num1+num2; 
} 
T subtract() 
{ 
 return num1-num2; 
} 
T multiply() 
{ 
 return num1*num2; 
} 
T divide() 
{ 
 if(num2!=0) 
 return num1/num2; 
 else 
 { 
  cout<<"Error!Division by zero."<<endl; 
 } 
} 
}; 
int main() 
{ 
 cout<<"Roll no:24B11AI457"<<endl; 
 calculator<int> intcalc(10,5); 
 cout<<"Int calculation:"<<endl; 
 cout<<"Addition = "<<intcalc.add()<<endl; 
 cout<<"subraction = "<<intcalc.subtract()<<endl; 
 cout<<"Multiplication = "<<intcalc.multiply()<<endl; 
 cout<<"Division = "<<intcalc.divide()<<endl; 
 cout<<"------------------------------------"<<endl; 
     
 calculator<double> doublecalc(11.5,5.5); 
 cout<<"double calculation:"<<endl; 
 cout<<"Addition = "<<doublecalc.add()<<endl; 
 cout<<"subraction = "<<doublecalc.subtract()<<endl; 
 cout<<"Multiplication = "<<doublecalc.multiply()<<endl; 
 cout<<"Division = "<<doublecalc.divide()<<endl; 
 return 0; 
} 
