#include<iostream>
#include<vector> 
using namespace std;

void spiral(vector<vector<int>>& matrix){
    int min_row=0, max_row=matrix.size()-1;
    int min_colm=0, max_colm= matrix[0].size()-1;

    while(min_row<=max_row || min_colm<=max_colm){
        //right ->
        for(int j=min_colm; j<=max_colm; j++){
            cout<<matrix[min_row][j]<<" ";
        }
        min_row++;
        if(min_row>max_row || min_colm>max_colm) break;

        //down  
        for(int i=min_row;i<=max_row; i++){
            cout<<matrix[i][max_colm]<<" ";
        }
        max_colm--;
        if(min_row>max_row || min_colm>max_colm) break;

        //left<-
        for(int j=max_colm; j>=min_colm; j--){
            cout<<matrix[max_row][j]<<" ";
        }
        max_row--;
        if(min_row>max_row || min_colm>max_colm) break;

        //up
        for(int i=max_row; i>=min_row; i--){
            cout<<matrix[i][min_colm]<<" ";
        }
        min_colm++;
        if(min_row>max_row || min_colm>max_colm) break;
    }

}

int main(){
    int n;      //row
    cout<<"Enter row of matrix: ";
    cin>>n;

    int m;      //coloum
    cout<<"Enter colm of matrix: ";
    cin>>m;

    //input;
    // int matrix[n][m];
    vector<vector<int>> matrix(n,vector<int>(m));
    cout<<"enter matrix: ";
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;

    //function call;
    spiral(matrix);

return 0;
}