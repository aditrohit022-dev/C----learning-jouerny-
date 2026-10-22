#include <iostream>
using namespace std;
void binaryToDecimal(){
    long long int binary;
    cin>>binary;
    int decimal,multiplayer=1,lastDigit;
    while(binary>0){
        lastDigit=binary%10;
        decimal=+(lastDigit*multiplayer);
        multiplayer*=2;
        binary/=10;
    }
    cout<<"Decimal: "<<decimal;
}
void arryLeftRotation(){
    int n,k;
    //input
    cout<<"length of arry: ";
    cin>>n;
    int arry[n];
    for(int i=0;i<n;i++){
        cin>>arry[i];
    }
    cout<<"Left rotate arry by :";
    cin>>k;
    
    //process and output
    for(int i=k;i<n;i++){
        cout<<arry[i];
    }
    for(int j=0;j<k;j++){
        cout<<arry[j];
    }
   
}
void secondSmallestElemant(){
    int n,temp,cnt=0;
    //input
    cout<<"length of arry: ";
    cin>>n;
    if(n>0){
        if(n==1){
            cout<<"n should be greater than 1 atleast";
            return;
        }
        if(n==2){
            int arry[n];
            for(int i=0;i<n;i++){
            cin>>arry[i];
            }
            
            int smallest=arry[0];
            for(int i=0;i<n;i++){
                if(arry[i]<=smallest){
                    smallest=arry[i];
                }
                else if(arry[i+1]==arry[i]){
                    cout<<"there is not a second smallest elemant ";
                    break;
                }else{
                    cout<<"Second smallest elemant: "<<arry[i];
                    break;
                }
            }
        }else{
            int arry[n];
            for(int i=0;i<n;i++){
                cin>>arry[i];
            }
    //process and output
            int smallest=arry[0];
            for(int i=0;i<n;i++){
                if(arry[i]<smallest){
                    smallest=arry[i];
                }
                else if(arry[i+1]==arry[i]){
                    cnt++;
                }
            }
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(arry[j]<arry[i]){
                        temp=arry[i];
                        arry[i]=arry[j];
                        arry[j]=temp;
                    }
                 }
            }
            if(cnt==n-1){
                cout<<"there is not a second smallest elemant: ";
            }else{
            for(int i=0;i<n;i++){
                if(arry[i]>smallest){
                cout<<"Second smallest elemant: "<<arry[i];
                break;
                }
             }
            }
        }
    }else{
        cout<<"n should be +ve";
    }
    

}
int main() 
{
   //binaryToDecimal();
    //arryLeftRotation();
    //secondSmallestElemant();
}
