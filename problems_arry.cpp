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
   /////////////////////////////////////////// 1D   arry /////////////////////////////////////////////
void arry1dQue1(){
    //take input in arry and display them
    int arry[100],n;
    cout<<"length of arry(max is 100):";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arry[i];
    }
    for(int i=0;i<n;i++){
        cout<<i+1<<". "<<arry[i]<<"\n";
    }

}
void arry1dQue2(){
    //sum of all elemants in arry
    int n;
    cout<<"Length of arry: ";
    cin>>n;
    int arry[n];
    for(int i=0;i<n;i++){
        cout<<i+1<<" ."<<"elemant:";
        cin>>arry[i];
    }
    int sum=arry[0];
    for(int i=1;i<n;i++){
        sum+=arry[i];
    }
    cout<<"Sum of all elemants of arry is: "<<sum;

}
void arry1dQue3(){
    //avreage of all the elemants in arry
    int n;
    cout<<"Length of arry: ";
    cin>>n;
    int arry[n];
    for(int i=0;i<n;i++){
        cout<<i+1<<" ."<<"elemant:";
        cin>>arry[i];
    }
    int sum=arry[0];
    for(int i=1;i<n;i++){
        sum+=arry[i];
    }
    cout<<"Avreage of all elemants of arry is: "<<(sum/n);
}
void arry1dQue4(){
//largest elemant in arry
 int n;
    cout<<"Length of arry: ";
    cin>>n;
    int arry[n];
    for(int i=0;i<n;i++){
        cout<<i+1<<" ."<<"elemant:";
        cin>>arry[i];
    }
    int largestno=arry[0];
    for(int i=1;i<n;i++){
        if(arry[i]>largestno){
            largestno=arry[i];
        }
    }
    cout<<"largest elemant in arry is: "<<largestno;
}
void arry1dQue5(){
    //smalest elemant in arry
    int n;
    cout<<"Length of arry: ";
    cin>>n;
    int arry[n];
    for(int i=0;i<n;i++){
        cout<<i+1<<" ."<<"elemant:";
        cin>>arry[i];
    }
    int smallestno=arry[0];
    for(int i=1;i<n;i++){
        if(arry[i]<smallestno){
            smallestno=arry[i];
        }
    }
    cout<<"smallest elemant in arry is: "<<smallestno;
}
void arry1dQue6(){
//count the total number of elemants in arry
    int arry[]={6,8,9,0,5,6,7,3,4,5};
    int total= sizeof(arry)/sizeof(arry[0]); //size of arry dived by size of one bite of ineger
    cout<<total;
}
void arry1dQue7(){
//count even and odd elemant in arry
int n,even=0,odd=0;
    cout<<"Length of arry: ";
    cin>>n;
    int arry[n];
    for(int i=0;i<n;i++){
        cout<<i+1<<" ."<<"elemant:";
        cin>>arry[i];
    }

    for(int i=0;i<n;i++){
        if(arry[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<"Number of odd and even elemants are "<<odd<<" and "<<even;
}
void arry1dQue8(){
    //count +ve,-ve and zero elemants
    int n,zero=0,positive=0,negative=0;
    cout<<"Length of arry: ";
    cin>>n;
    int arry[n];
    for(int i=0;i<n;i++){
        cout<<i+1<<" ."<<"elemant:";
        cin>>arry[i];
    }
    for(int i=0;i<n;i++){
        if(arry[i]==0){
            zero++;
        }else if(arry[i]>0){
            positive++;
        }else if(arry[i]<0){
            negative++;
        }
    }
    cout<<"The number of +ve,-ve,zero elemants in arry are "<<"("<<positive<<","<<negative<<","<<zero<<")";
}
void arry1dQue9(){
    //serach whether the given elemant is presant or not
    int n,serach_elemnt;
    cout<<"Length of arry: ";
    cin>>n;
    int arry[n];
    for(int i=0;i<n;i++){
        cout<<i+1<<" ."<<"elemant:";
        cin>>arry[i];
    }
    cout<<"Give an elemant to search: ";
    cin>>serach_elemnt;
    for(int i=0;i<n;i++){
        if(arry[i]==serach_elemnt){
            cout<<"Elemant "<<serach_elemnt<<" is presant in the arry";
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(arry[i]!=serach_elemnt){
            cout<<"Elemant "<<serach_elemnt<<" is not presant in the arry";
            break;
        }
    }
}
void arry1dQue10(){
    //find the index or position of a given elemant
    int n,serach_elemnt;
    cout<<"Length of arry: ";
    cin>>n;
    int arry[n];
    for(int i=0;i<n;i++){
        cout<<i+1<<" ."<<"elemant:";
        cin>>arry[i];
    }
    cout<<"Enter an elemant to find its index in the arry: ";
    cin>>serach_elemnt;
    for(int i=0;i<n;i++){
        if(arry[i]==serach_elemnt){
            cout<<"Elemant "<<serach_elemnt<<" is/are on the index "<<i+1;
        }
    }
}
void arry1dQue11(){
    //count the frequency of the given number
    int n,serach_elemnt,cnt=0;
    cout<<"Length of arry: ";
    cin>>n;
    int arry[n];
    for(int i=0;i<n;i++){
        cout<<i+1<<" ."<<"elemant:";
        cin>>arry[i];
    }
    cout<<"Enter an elemant to find its frequency in the arry: ";
    cin>>serach_elemnt;
    for(int i=0;i<n;i++){
        if(arry[i]==serach_elemnt){
            cnt++;
        }
    }
    cout<<"Elemant "<<serach_elemnt<<" is reapeted "<<cnt<<" time";

}
void arry1dQue12(){
    //find frequency of each elemant of arry
    int n,test_ele,cnt;
    cout<<"Length of arry: ";
    cin>>n;
    int arry[n];
    for(int i=0;i<n;i++){
        cout<<i+1<<" ."<<"elemant:";
        cin>>arry[i];
    } 
    for(int i=0;i<n;i++){
    test_ele=arry[i];
    cnt=0;
        for(int j=i+1;j<n;j++){
            if(arry[j]==test_ele){
                cnt++;
            }
            
        }
        cout<<"Frequency of elemant "<<test_ele<<" is "<<cnt<<"\n";
    }
}
void arry1dQue13(){
    //find the first occurence of given elemant
    int n,serach_elemnt,cnt=0,i;
    cout<<"Length of arry: ";
    cin>>n;
    int arry[n];
    for( i=0;i<n;i++){
        cout<<i+1<<" ."<<"elemant:";
        cin>>arry[i];
    } 
    cout<<"Enter an elemant to find its first occurence in the arry: ";
    cin>>serach_elemnt;
    
    for( i=0;i<n;i++){
        if(arry[i]==serach_elemnt){
            cout<<"Elemant "<<serach_elemnt<<" is occured firstly on  "<<i+1<<"nd index";
            break;
        }
    }
    if(i==n){
        cout<<"You have entered Incorrect elemant!";
    }
}
void arry1dQue14(){
    //find the last occurence of given elemant
    int n,serach_elemnt,i;
    cout<<"Length of arry: ";
    cin>>n;
    int arry[n];
    for( i=0;i<n;i++){
        cout<<i+1<<" ."<<"elemant:";
        cin>>arry[i];
    } 
    cout<<"Enter an elemant to find its last occurence in the arry: ";
    cin>>serach_elemnt;
    
    for( i=n-1;i>=0;i--){
        if(arry[i]==serach_elemnt){
            cout<<"Elemant "<<serach_elemnt<<" is occured lastly on  "<<i+1<<"nd index";
            break;
        }
    }
    //i==-1 
    if(i==-1){
        cout<<"You have entered Incorrect elemant!";
    }
}
void arry1dQue15(){
    //print all the index where the given elemant occures
    int n,serach_elemnt,cnt=0,i;
    cout<<"Length of arry: ";
    cin>>n;
    int arry[n];
    for( i=0;i<n;i++){
        cout<<i+1<<" ."<<"elemant:";
        cin>>arry[i];
    } 
    cout<<"Enter an elemant to find its  occurence in the arry: ";
    cin>>serach_elemnt;
    
    for( i=0;i<n;i++){
        if(arry[i]==serach_elemnt){
            if(i==0){
            cout<<"Elemant "<<serach_elemnt<<" is occured  on  "<<i+1<<"st index\n";
            }
            if(i==1){
            cout<<"Elemant "<<serach_elemnt<<" is occured  on  "<<i+1<<"nd index\n";
            }
            if(i==2){
            cout<<"Elemant "<<serach_elemnt<<" is occured  on  "<<i+1<<"rd index\n";
            }
            if(i>2){
            cout<<"Elemant "<<serach_elemnt<<" is occured  on  "<<i+1<<"th index\n";
            }
        }
    }
    
}
/////////////////////////////////////////// 2D   arry /////////////////////////////////////////////
void arry2dQue1(){
    //input and display a matrix
    int R,C;
    cout<<"Length of row: "; 
    cin>>R;
    cout<<"Length of colomn: ";
    cin>>C;
    int arry[R][C];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout<<"Enter "<<"("<<i<<","<<j<<")"<<" elemant: ";
            cin>>arry[i][j];
        }
        cout<<endl;
    } 
    for(int i=0;i<R;i++){
        cout<<"|";
        for(int j=0;j<C;j++){
            cout<<arry[i][j]<<" ";
        }
        cout<<"|";
        cout<<endl;
    } 
}
void arry2dQue2(){
    //sum of all elemant of matrix
    int R,C,cnt=0;
    cout<<"Length of row: "; 
    cin>>R;
    cout<<"Length of colomn: ";
    cin>>C;
    int arry[R][C];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout<<"Enter "<<"("<<i<<","<<j<<")"<<" elemant: ";
            cin>>arry[i][j];
        }
        cout<<endl;
    } 
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cnt+=arry[i][j];
        }
    } 
    cout<<"Sum "<<cnt;
}
void arry2dQue3(){
    //Avreage of all elemant of matrix
    int R,C,cnt=0;
    cout<<"Length of row: "; 
    cin>>R;
    cout<<"Length of colomn: ";
    cin>>C;
    int arry[R][C];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout<<"Enter "<<"("<<i<<","<<j<<")"<<" elemant: ";
            cin>>arry[i][j];
        }
        cout<<endl;
    } 
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cnt+=arry[i][j];
        }
    } 
    cout<<"Avreage: "<<cnt/(R*C);
}
void arry2dQue4(){
    //Find maximum elemant 
    int R,C,cnt;
    cout<<"Length of row: "; 
    cin>>R;
    cout<<"Length of colomn: ";
    cin>>C;
    int arry[R][C];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout<<"Enter "<<"("<<i<<","<<j<<")"<<" elemant: ";
            cin>>arry[i][j];
        }
        cout<<endl;
    } 
    cnt=arry[0][0];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
           if(arry[i][j]>cnt){
            cnt=arry[i][j];
           }
        }
    } 
    cout<<"Maximum elemant is : "<<cnt;
    
}
void arry2dQue5(){
    //Find minimum elemant 
    int R,C,cnt;
    cout<<"Length of row: "; 
    cin>>R;
    cout<<"Length of colomn: ";
    cin>>C;
    int arry[R][C];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout<<"Enter "<<"("<<i<<","<<j<<")"<<" elemant: ";
            cin>>arry[i][j];
        }
        cout<<endl;
    } 
    cnt=arry[0][0];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
           if(arry[i][j]<cnt){
            cnt=arry[i][j];
           }
        }
    } 
    cout<<"Minimum elemant is : "<<cnt;
}

int main() 
{    //arry1dQue1();
    //arry1dQue2();
    //arry1dQue3();
    //arry1dQue4();
    //arry1dQue5();
    //arry1dQue6();
    //arry1dQue7();
    //arry1dQue8();
    //arry1dQue9();
    //arry1dQue10();
    //arry1dQue11();
    //arry1dQue12();
    //arry1dQue13();
    //arry1dQue14();
    //arry1dQue15();
    //arry2dQue1();
    //arry2dQue2();
    //arry2dQue3();
    //arry2dQue4();
    //arry2dQue5();
   //binaryToDecimal();
    //arryLeftRotation();
    //secondSmallestElemant();
}
