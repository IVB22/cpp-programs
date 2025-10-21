#include<iostream> 
using namespace std; 
int main() 
{ 
      cout<<"Roll no:24B11AI457"<<endl; 
 int numerator,denominator; 
 double result; 
 cout<<"enter numerator:"; 
 cin>>numerator; 
 cout<<"enter denominator:"; 
 cin>>denominator; 
  try 
{ 

if(denominator==0) 
 
throw denominator; 
 result=(double)numerator/denominator; 
 cout<<"result ="<<result<<endl; 
} 
catch(int e) 
{ 
 cout<<"Error:Division by zero is not allowed!"<<endl; 
} 
cout<<"end Program..."<<endl; 
return 0; 
  
} 
