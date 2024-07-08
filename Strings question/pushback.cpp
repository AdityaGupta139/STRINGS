#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    s.push_back('a');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    s.append(" gupta");
    cout<<s<<endl;
    s.clear();
    cout<<s<<endl;
    


}