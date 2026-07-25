//#1

#include <iostream>
using namespace std;

int main() {
    int tea;
        cout<<"Enter numbers of tea cups to serve,\n"<<"Enter:";
        cin<<tea;
  
    while(tea>0){
        tea-=1;
        cout<<"serving a cup of tea \n"<<tea<<" cups of tea remaing";
    }    
    cout<<"all tea cups are served!";
return 0;

}



