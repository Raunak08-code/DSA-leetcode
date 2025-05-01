#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string  n;
    getline(cin,n);
    cout<<endl;

    if(n.size()<5) cout<<"error !!";
    else{
        reverse(n.begin()+2,n.begin()+6);
    }
    cout<<n<<" "<<endl;

}
