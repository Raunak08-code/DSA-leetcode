#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    string str="my nmae is raunak ans my bet thing is my name ";
    // getline(cin,str);
    int count =1;
    int maxi=0;
   
    stringstream std(str);
    string tep;
    
    vector<string> s;
    
    while(std>>tep){
        s.push_back(tep);
        
    }
    int n=s.size();
    // for(int i=0; i<s.size(); i++){
    //     cout<<s[i]<<" "<<endl;
    // }
    

    sort(s.begin(),s.end());

    // int x=s;
            // for(int i=0; i<s.size(); i++){
            //     cout<<s[i]<<" "<<endl;
            // }

    for(int i=1; i<n; i++){
        if(s[i]==s[i-1])     count++;
        else count=1;
        maxi=max(maxi,count);
    }
    // cout<<maxi<<endl;
    count=1;
    for(int i=0; i<n; i++){
        if(s[i]==s[i-1])     count++;
        else count=1;
        if(count==maxi)     cout<<s[i]<<" "<<maxi<<endl;
    }
    

}
