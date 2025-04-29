#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> > pascal(int numrows){
    int nr=numrows;
    cout<<"Enter the row: ";
    cin>>nr;

    vector<vector<int> > v2;

    //generate
    for(int i=0; i<nr; i++){
        vector<int> a(i+1);
        v2.push_back(a);
        for(int j=0; j<=i; j++){
            if(j==0 || j==i) v2[i][j]=1;  // side condition
            else{
                v2[i][j] = v2[i-1][j-1]+ v2[i-1][j];  //main algo
            }
        }
    }
    return v2;

}

int main(){
    vector<vector<int> > v2= pascal(5);
    // outpur
    int nr=v2.size();
    for(int i=0; i<nr; i++){
        for(int j=0; j<=i; j++){
            cout<<v2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 1;    
}
