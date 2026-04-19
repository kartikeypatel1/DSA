#include<bits/stdc++.h>
using namespace std;
bool isValid(vector<string>&board,int row,int col,int n){
    int dupRow=row;
    int dupCol=col;
    while(row>=0&& col>=0){
        if(board[row][col]=='Q') return false;
        row--;
        col--;
    }
    row=dupRow;
    col=dupCol;
    while(col>=0){
        if(board[row][col]=='Q') return false;
        col--;
    }
    row=dupRow;
    col=dupCol;
    while(row<board.size()&& col>=0){
        if(board[row][col]=='Q') return false;
        row++;
        col--;
    }   
    return true;
}
void solve(vector<string>&board,int col,vector<vector<string>>&res,int n){
    if(col==n){
        res.push_back(board);
        return;
    }
    for(int row=0;row<n;row++){
        if(isValid(board,row,col,n)){
            board[row][col]='Q';
            solve(board,col+1,res,n);
            board[row][col]='.';
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of the board: ";
    cin>>n;
    vector<string> board(n,string(n,'.'));
    vector<vector<string>> res;
    solve(board,0,res,n);
    cout<<"The possible arrangements of queens are: "<<endl;
    for(auto &v:res){
        for(auto &s:v){
            cout<<s<<endl;
        }
        cout<<endl;
    }
    return 0;
}
