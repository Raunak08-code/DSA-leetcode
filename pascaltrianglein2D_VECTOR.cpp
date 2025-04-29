#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> > pascal(int numrows){
    int nr=numrows;
    cout<<"Enter the row: ";
    cin>>nr;

    vector<vector<int> > v2;

    for(int i=1; i<=nr; i++){
        vector<int> a(i);
        v2.push_back(a);
    }

    //generate
    for(int i=0; i<nr; i++){
        for(int j=0; j<=i; j++){
            if(j==0 || j==i) v2[i][j]=1;
            else{
                v2[i][j] = v2[i-1][j-1]+ v2[i-1][j];
            }
        }
    }
    return v2;

}
//     int nr;
//     for(int i=0; i<nr; i++){
//         v2[i][0]=1;
//     }

//     for(int i=0; i<nr; i++){
//         for(int j=i+1; j<nr; j++){
//             v2[i][j]=1;
//         }
//     }

//     for(int i=0; i<nr; i++){
//         for(int j=0; j<nr; j++){
//             v2[i][j] = v2[i-1][j-1]+ v2[i-1][j];
//         }
//     }
// }

int main(){
    int nr=5;

    vector<vector<int> > v2= pascal(nr);
    // outpur
    for(int i=0; i<nr; i++){
        for(int j=0; j<=i; j++){
            cout<<v2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 1;
    
}