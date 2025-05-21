#include<iostream>
#include<string>
using namespace std;

void subset(string str, string ans){
    if(str==""){
        cout<<ans<<endl;
        return;
    }
    char ch=str[0];
    subset(str.substr(1),ans);
    subset(str.substr(1),ans+ch);
}

int main(){
    string str="abc";
    subset(str,"");

}