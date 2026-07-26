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

//pass by value // code visualizer is available in read.me for each code

#include <iostream>
using namespace std;

void pouerdcups(int cups){
    cups+=5;
    cout<<"Total cups: "<<cups<<"\n";
}

int main() {
	int cup=5;
	pouerdcups(cup);
    cout<<"pouering "<<cup<<" cups...";
}































