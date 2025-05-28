#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void subset(string original, string ans, vector<string>& v, bool flag){
    if(original==""){
        v.push_back(ans);
        return;
    }

    // if only one element present in string 
    char ch=original[0];
    if(original.length()==1){
        if(flag== true) subset(original.substr(1), ans+ch,v,true);
        subset(original.substr(1), ans,v,true);
        return;
    }

    // if continous elements are there ;
    char dh=original[1];
    if(ch==dh){
        if(flag== true) subset(original.substr(1), ans+ch,v,true);
        subset(original.substr(1), ans,v,false);
    }
    else{
        if(flag== true) subset(original.substr(1), ans+ch,v,true);
        subset(original.substr(1), ans,v,true);
    }
}

int main(){
    vector<string> st;
    string s;
    cout<<"enter string: ";
    cin>>s;
    sort(s.begin(),s.end());

    subset(s,"",st,true);
    for(int i=0; i<st.size(); i++){
        cout<<st[i]<<endl;
    }
}