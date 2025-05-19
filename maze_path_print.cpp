#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightway=maze(sr,sc+1,er,ec);
    int downway= maze(sr+1,sc,er,ec);
    int totalways=rightway+downway;
    return totalways;
}

int maze_2(int sr,int sc){
    if(sr<1 || sc<1) return 0;
    if(sr==1 && sc==1) return 1;
    int rightway=maze_2(sr,sc-1);
    int downway= maze_2(sr-1,sc);
    int totalways=rightway+downway;
    return totalways;
}

void print_path(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return; 
    }
    print_path(sr,sc+1,er,ec,s+'R');
    print_path(sr+1,sc,er,ec,s+'D');
    
}
int main(){
    // cout<<maze(1,1,4,4)<<endl;
    cout<<maze_2(4,4);
    // print_path(1,1,4,4,"");
}