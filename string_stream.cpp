#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str=" my name is raunak";
    stringstream st(str);       //  -> take sinngle word from string 
    string temp;
    while(st>>temp){
        cout<<temp<<" "<<temp.size()<<endl;
    }
}
