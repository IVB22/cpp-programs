#include<iostream> 
#include<string> 
using namespace std; 
int main() 
{ 
 cout<<"Roll no:24B11AI457"<<endl; 
 int num1,num2; 
 char op; 
 cout<<"Simple calculator"<<endl; 
 
 cout<<"enter first number:"; 
 
 cin>>num1; 
 cout<<"enter second number:"; 
 cin>>num2; 
 cout<<"Enter an operator(+,-,*,/):"; 
 cin>>op; 
try 
 { 
  if(op!='+'&&op!='-'&&op!='*'&&op!='/') 
  throw string("invalid operator!please use +,-,*,/."); 
  if(num1<0||num2<0) 
  throw -1; 
  if(op!='/'&&num2==0) 
  throw 0; 
  double result;  
  switch(op) 
  { 
   case '+':result=num1+num2; 
   break; 
    case '-':result=num1-num2; 
   break; 
    case '*':result=num1*num2; 
   break; 
    case '/':result=num1/num2; 
   break; 
    } 
  cout<<"result : "<<result<<endl; 
 } 
 catch(int e) 
 { 
  cout<<"Error:Division by zero is not allowed!"<<endl; 
 } 
 catch(double e) 
 { 
cout<<"Error:Negative numbers are not allowed!"<<endl; 
 } 
 catch(string e) 
 { 
  cout<<"Error:"<<e<<endl; 
 } 
 cout<<"program execution completed successfully"<<endl; 
 return 0; 
}
