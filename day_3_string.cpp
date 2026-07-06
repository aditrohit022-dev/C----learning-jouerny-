#include <iostream> 
#include <string>
using namespace std;
int main(){
    string description= "Is known as 'best' tea";
    
    string User_Tea;
    int Tea_quan;
    
    cout<<"what would you like to order in tea\nEnter:";
    getline(cin,User_Tea);
    cout<<"How many cups of "<< User_Tea <<" would you like to have ?\nEnter:";
    cin>>Tea_quan;
    cout<<"your current order deatail:\n"
        <<"Quantity: "<<Tea_quan<<"\n"
        <<"Tea type: "<<User_Tea<<"\n";

}



    
