#include <iostream>
#include <vector>

using namespace std;
class Chai{
public:
    int serving;
    string teaname;
    vector<string>ingredients;
    string lines;
    int num;
    void teadetail(){
        cout<<"tea name:"<<teaname<<"\n";
        cout<<"serving:"<<serving<<"\n";
        cout<<"Ingredients:"<<"";
        for(string ing:ingredients){
            cout<<ing<<" ";
        }
        cout<<"=================================";
    }

};

int main(){
    Chai tea;
    cout<<"Enter teaname:";
    getline(cin,tea.teaname);
    cout<<"serving:";
    cin>>tea.serving;
    cout<<"Enter number of  ingrediants:";
    cin>>tea.num;
    cout<<"Enter name of ingredients,\n>>>";
    for(int i=1;i<tea.num;i++){
        getline(cin,tea.lines);
        tea.ingredients.push_back(tea.lines);
    }
    cout<<"your details are saved as\n"; tea.teadetail();


}