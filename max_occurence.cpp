#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(){
    string str="raunaknpandey";
    vector<int> arr(26,0);
    // string  arr[26];
    for(int i=0; i<26; i++){
        char ch=str[i];
        int ascii= int(ch); 
        arr[ascii-97]++;
    }
    int max=0;

    for(int i=0; i<26; i++){
        if(arr[i]>max)  max=arr[i];
    }

    for(int i=0; i<26; i++){
        if(arr[i]==max){
            int ascii=i+97;
            char ch=char(ascii);
            cout<<ch<<" "<<max<<endl;
        }
    }
}
