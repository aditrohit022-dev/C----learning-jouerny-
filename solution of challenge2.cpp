
//challeng:1

#include <iostream>
using namespace std;
int main(){
    int tea_P;
    float price;
        cout<<"Enter the number of tea packs you want,\nEnter: ";
        cin>>tea_P;
        cout<<"Enter the price for "<<tea_P<<" tea packs (per packs!),\nEnter: ";
        cin>>price;
    float F1=tea_P*price;
    float final_P=F1+(F1*0.1);
        cout<<"your final price for "<<tea_P<<" tea packs is "<<final_P<<" Units"<<"\n";


}
