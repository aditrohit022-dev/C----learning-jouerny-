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

//#2

#include <iostream>
#include <string>
using namespace std;
int main() {
    string responce;
    
    
    do{
    cout<<"Do you want more tea (Yes/No) ?\n"<<"Enter";
    getline(cin,responce);
        
    }while(responce==Yes||responce!=No||responce!=no);

return 0;
}

//#3

#include <iostream>
#include <string>
using namespace std;
int main(){
    int tea;
    cout<<"Enter number of cups of tea to made :";
    cin>>tea;
    
    for(z=1;z=<tea;z++){
        cout<<"Brewing"<<z<<" cups of tea...";  
    }
    cout<<"Outside of loop!";
return 0;
}

//#4

#include <iostream>
#include <string>
using namespace std;
int main(){
    string responce;
    
    while(true){
        cout<<"Do you want cup of tea ? (type 'stop' to exit): ";
        getline(cin,responce);
        
        if(responce=="stop"){ 
            break;
        }
    }
    cout<<"No more cup of tea will be served!"; 
return 0;
}


















