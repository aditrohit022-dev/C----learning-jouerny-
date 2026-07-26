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














