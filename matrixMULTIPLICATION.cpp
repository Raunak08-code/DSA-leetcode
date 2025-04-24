#include<iostream>
using namespace std;
int main(){
    // DATA entery for 1st matrix
    int m;  
    cout<<"enter row of 1st matrix: ";
    cin>>m;
    int n;
    cout<<"enter colm of 1st matrix: ";
    cin>>n;

    // data entery for 2nd matrix
    int p;
    cout<<"enter row of 2st matrix: ";
    cin>>p; 
    int q;
    cout<<"enter row of 2st matrix: ";
    cin>>q;

    cout<<endl;

    if(n==p){   // -> rule foe matrix multiplication; 
        // entering the data of first matrix;
        cout<<"Enter data for 1st matrix: ";
        int mat_1[m][n];
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin>>mat_1[i][j];
            }
        }
        // entering the data of second matrix;
        cout<<"enter data of 2nd matrix: ";
        int mat_2[p][q];
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin>>mat_2[i][j];
            }
        }

        cout<<endl;

        // multiplication 
        int res_mat[m][q];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                res_mat[i][j]=0; // initializing so no garbage value taken;
                for(int k=0; k<n; k++){  // -> this loop is for addition;
                    res_mat[i][j] += mat_1[i][k] * mat_2[k][j];
                }
            }
        }
        

        //for output
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout<<res_mat[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    else{
        cout<<"Matrix multiplication not possible !!";
    }
    return 0;
}