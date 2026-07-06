#include <iostream>
using namespace std;
int main(){
    //  unsigned int Tea_pack = 100; //with -ve int it will provide random garbage values
    // long large_tea_storege= 10000000000000000;
    // short mini_tea_pack=34; 
    float Tea_price = 67.9999867453;
    int rounded_Tea_price= (int)Tea_price;
    int Tea_quan=67;
    short Tea_final_price= (short)Tea_quan*Tea_price;

    cout<<Tea_final_price;
    // cout<< rounded_Tea_price << endl;
    // cout<<large_tea_storege;
    return 0;
}