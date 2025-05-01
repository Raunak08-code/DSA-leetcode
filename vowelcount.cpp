#include<iostream>
#include<string>
using namespace std;

int main(){
    // string str;
    // cout<<"enter string: ";
    // getline(cin,str);

    // for(int i=0; str[i]!= '\0'; i++){
    //     if(str[i]=='a' || str[i]=='e' ||str[i]=='i' || str[i]=='o' || str[i]=='u' ){
    //         cout<<str[i]<<" ";
    //     }
    // }
    // return 1;


    // updation of single character in  string 
//     string str="raunak";
//     str[1]='o';
//     cout<<str;
// }

    // int n;
    // cin>>n;
    // char str[n];
    // for(int i=0; i<n; i++){
    //     cin>>str[i];
    // }
    // // int vow[]={'a','e','i','o','u'};
    // for(int i=0;str[i]!='\0'; i++){
    //     if(str[i]=='a' || str[i]=='e' ||str[i]=='i' || str[i]=='o' || str[i]=='u' ){
    //                 cout<<str[i]<<" ";
    //             }
    // }
    string str= "raunak";
    cout<<str<<" ";
    for(int i=0; str[i]!=0; i++){
        if(i%2==0) str[i]='a';
    }
    cout<<endl;
    cout<<str<<" ";

}