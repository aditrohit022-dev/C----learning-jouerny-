#include <iostream>
using namespace std;

int checktemprature(int temprature){
    return temprature;

}


//declaration of function
void serveChai(int cups);


int main() {
	int temp=checktemprature(67);
    //cout<<temp<<"\n";
    //use of function 
    serveChai(8);
}

//defining function 

void serveChai(int cups){
    
    cout<<"serving "<<cups<<" cups of tea...";
    
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;


int checktemprature(int temprature){
    return temprature;

}


//multi loading function// add defaulat value when declaring the function not in defining section 

void serveChai(string teatype="Masala chai");
void serveChai(int cups);
int main() {
	int temp=checktemprature(67);
    //cout<<temp<<"\n";
    //use of function 
    serveChai();
    
}

//defining function 

void serveChai(string teatype){
    cout<<"serving "<<teatype<<"...";
}

void serveChai(int cups){
    
    cout<<"serving "<<cups<<" cups of tea...";
    
}











