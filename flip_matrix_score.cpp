#include<iostream>
#include<vector>
using namespace std;


int matrixScore(vector<vector<int>>& grid) {
    int row=grid.size();
    int colm=grid[0].size();

    for(int i=0; i<row; i++){
        if(grid[i][0]==0){// flip
            for(int j=0; j<colm; j++){
                if(grid[i][j]==0) grid[i][j]= 1;
                else grid[i][j]= 0;
            }
        } 
    }
    // fliping colm where No. 0 > No. 1
    for(int j=0; j<colm; j++){
        int noz= 0;
        int noo= 0;
        for(int i=0; i<row; i++){
            if(grid[i][j]==0)   noz++;
            else    noo++;
        }
        if(noz>noo){ //flip
            for(int i=0; i<row; i++){
                if(grid[i][j]==0) grid[i][j]= 1;
                else grid[i][j]= 0;
            }
        }
    }
    int sum=0;
    for(int i=0; i<row; i++){
        int x=1;
        for(int j=colm-1; j>=0; j--){
            sum += grid[i][j] * x;
            x*=2;
        }
    }
    return sum;
}
int main(){
    
}