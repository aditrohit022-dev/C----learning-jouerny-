#include <iostream>
#include <string>
using namespace std;
int main(){

string teaorder;
    cout<<"Enter your order for tea that you would like to order,\nEnter: ";
    getline(cin,teaorder);

    if(teaorder=="Green order"){
        cout<<"thanks for your order,\nyou have ordered:"<<teaorder;

    }

    else{
        cout<<"the order that you had placed is currently unaveilable!";

    }

return 0;

    
}
