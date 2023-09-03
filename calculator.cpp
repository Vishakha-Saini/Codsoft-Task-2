#include<iostream>
using namespace std;
int main()
{
    double num1,num2;
    char operation;
    cout<<"CALCULATOR \n";
    cout<<"ENTER FIRST NUMBER \n";
    cin>>num1;
    cout<<"ENTER SECOND NUMBER \n";
    cin>>num2;
    cout<<"CHOOSE AN OPERATION FROM (+,-,*,/): \n";
    cin>>operation;

switch(operation)
 {
    case '+':
     cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
    break;
    case '-':
     cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
    break;
     case '*':
     cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
    break;
    case '/':
       if(num2!=0){
         cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
       }
       else{
         cout<<num1<<"ERROR, DIVISION BY ZERO IS NOT ALLOWED"<<endl;
       }
    
    break;
 default:
     cout<<"YOU ARE PERFORMING AN INVALID OPERATION"<<endl;
 }
 return 0;
 }

