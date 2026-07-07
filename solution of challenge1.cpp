
//CHALLENGE:1

#include <iostream>
#include <string>
using namespace std; 
int main(){
    string Tea_type;
    int price_kg;
    int rating;

        cout<<"Enter information about your tea\nEnter tea type: ";
        getline(cin,Tea_type);
        cout<<"Enter price of "<<Tea_type<<" tea per KG: ";
        cin>>price_kg;
        cout<<"Enter customer rating out of 10 in integer : ";
        cin>>rating;
        cout<<"-------------------------------------------------\n"
            <<"Your tea information is succesfully added as under, "<<"\n"
            <<"tea type: "<<Tea_type<<"\n"
            <<"Price per kilogram: "<<price_kg<<"\n"
            <<"Customer rating "<<rating<<"/10"<<"\n"; 
    
return 0;
}   

//challenge:2

#include <iostream>
using namespace std;
int main(){
    int bais_price;
        cout<<"Enter base price: ";
        cin>>bais_price;
    float new_price=bais_price+(bais_price*0.1);
        cout<<"New price : "<<new_price<<"\n";

return 0;
}


