
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

//unit converter 
//The Goal: 1. Main Menu: Choose Category (1. Temperature, 2. Length, 3. Weight).
//2. Sub-Menu: Choose specific conversion (e.g., Celsius to Fahrenheit vs. Fahrenheit to Celsius).

//Switch Focus: Nested switch statements (a switch inside another switch).

//Key Concept: Keeping code clean and readable even when branching logic gets deeper.


#include <iostream>
using namespace std;
int main(){
//veriables
float temp,len,weg;
    int num;
    char s1;
    //end veriables
    //menu
    cout<<"=======================================================================================\n";
    cout<<"\t"<<"Main menu,"<<"\n";
    cout<<"\t"<<"1"<<".Temprature (in celsius)\n";
    cout<<"\t"<<"2"<<".Lenght (in centimetrs)\n";
    cout<<"\t"<<"3"<<".Weight (in grams)\n";

    cout<<"\t"<<"Choose number of option in respactive of the unit you would like to convert:";
    cin>>num;
    cout<<"=======================================================================================\n";
    //switch.1 for main menu
    switch(num){
        case 1: cout<<"\t" <<"Sub menu for Temprature,\n";
                  cout<<"\t"<< 'A'<<" .celsius to fehrenhite,\n";
                  cout<<"\t"<<'B'<<" .fehenhite to celsius,\n";
                  cout<<"\t"<<"Enter the option to choose the convertion:";
                  cin>>s1;
                  break;
        case 2:
                  cout<<"\t" <<"Sub menu for Lenght,\n";
                  cout<<"\t"<< 'A'<<" .centimetrs to meters,\n";
                  cout<<"\t"<<'B'<<" .meters to kilometers,\n";
                  cout<<"\t"<<"Enter the option to choose the convertion:";
                  cin>>s1;
                  break;
        case 3: 
                  cout<<"\t" <<"Sub menu for Weight,\n";
                  cout<<"\t"<< 'A'<<" .grams to kilograms,\n";
                  cout<<"\t"<<'B'<<" .kilograms to tuns,\n";
                  cout<<"\t"<<"Enter the option to choose the convertion:";
                  cin>>s1;
                  break;



    }

}










