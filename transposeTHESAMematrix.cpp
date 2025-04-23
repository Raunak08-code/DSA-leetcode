#include<iostream> 
using namespace std;
int main(){
    int n ,mat[5][5];
    cout<<"enter the order: ";
    cin>>n;     // matrix must have to be sqr matrix-

    cout<<"enter the elements of matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }

    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i==j) continue;
            else swap(mat[i][j],mat[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}