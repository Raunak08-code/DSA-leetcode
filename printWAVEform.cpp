#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the No. of rows: ";
    cin>>n;

    int m;
    cout<<"Enter the No. of colm: ";
    cin>>m;

    int matrix[n][m];
    cout<<"enter the elements of matrix: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }

    //for wave printing;
    for(int i=0;i<n;i++){
        
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<matrix[i][j]<<" ";
            }
        }
        else{
            for(int j=m-1; j>=0; j--){
                cout<<matrix[i][j]<<" ";
            }
        }
    }
    cout<<endl;
    // printing the order from reverse;
    for(int i=n-1;i>=0;i--){
        
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<matrix[i][j]<<" ";
            }
        }
        else{
            for(int j=m-1; j>=0; j--){
                cout<<matrix[i][j]<<" ";
            }
        }
    }
}