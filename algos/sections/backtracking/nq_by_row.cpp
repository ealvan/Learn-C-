#include <bits/stdc++.h>
using namespace std;
#define N 4

bool isSafe(int board[N][N], int row, int col){

    for(int i = 0; i < row; i++)
        if(board[i][col])
            return false;
    
    for(int i=row, j=col; j>=0&&i>=0; j--,i--)
        if(board[i][j])
            return false;
    
    for(int i=row, j=col; j < N && i >= 0; j++,i--)
        if(board[i][j])
            return false;
    return true;
}

bool solvingNQ(int board[N][N], int row){
    if(row >= N)
        return true;
    
    for(int j = 0; j < N; j++){
        if(isSafe(board, row, j)){
            board[row][j] = 1;
            if(solvingNQ(board,row+1))
                return true;
            board[row][j] = 0;            
        }
    }
    return false;
}

void print(int board[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(board[i][j]){
                cout << "Q ";
            }else{
                cout << ". ";
            }
        }
        cout << "\n";
    }
}

bool moduleNQ(){
    int board[N][N] =  { { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 } };
    if(!solvingNQ(board,0)){
        cout << "There aren't any solution\n";
        return false;
    }
    cout << "There is a solution\n";
    print(board);
    return true;
}

int main(){
     moduleNQ();
}

