
//🟢 Level 1: Beginner (Getting the Basics Down)
//These projects focus strictly on syntax, handling case labels, break statements, and the default case.

//1. Simple Calculator
//The Goal: Ask the user to enter two numbers and an operator (+, -, *, /).

//Switch Focus: Switch on the operator character (char).

//Key Concept: Practice standard arithmetic and use the default case to catch invalid operators (like % or @).


    
#include <iostream>
using namespace std;

char opt;
int num1,num2;
int main() 

{   

    cout<<"\t"<<"Menu,"<<"\n";
    cout<<"\t"<<"select the opration you would like to do,"<<"\n";
    
    cout<<"\t"<<"A "<<".addition"<<"\n";
    cout<<"\t"<<"B "<<".substraction"<<"\n";
    cout<<"\t"<<"C "<<".multiplication"<<"\n";
    cout<<"\t"<<"D "<<".division"<<"\n";

    cout<<"\t"<<"Enter the first number: "; 
    cin>>num1;
    cout<<"\t"<<"Enter the secound number: ";
    cin>>num2; 
    
    cout<<"\t"<<"Enter the option of respactive opration you want to perform: ";
    cin>>opt;


    switch(opt)
    {

        case 'A': cout<<"Result: "<<num1+num2;
                    break;
        case 'B': cout<<"Result: "<<num1-num2; 
                    break;
        case 'C': cout<<"Result: "<<num1*num2;
                    break;
        case 'D': cout<<"Result: "<<num1/num2;
                    break;
        default: cout<<"Invalid oprator chosen!";

    } 
        return 0;
}
















