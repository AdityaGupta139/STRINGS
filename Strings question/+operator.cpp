#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    s = s + " HARAMI HAI";
    cout<<s;
}