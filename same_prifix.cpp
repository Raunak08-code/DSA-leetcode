#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector <string> str;
    str.push_back("car");
    str.push_back("cathr");
    str.push_back("caomr");
    str.push_back("camrar");
    for(int i=0;i<str.size();i++){
        cout<<str[i]<<endl;
    }
    cout<<endl;
    sort(str.begin(),str.end());
    if(str.size()==1)  cout<<str[0];
    int n=str.size();
    string first=str[0];
    string last=str[n-1];
    string s=" ";
    for(int i=0; i<(min(first.size(),last.size())); i++){
        if(first[i]==last[i]){
            s += first[i];
        }
        else cout<<s; 
    }
}  


