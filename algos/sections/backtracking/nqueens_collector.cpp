#include <bits/stdc++.h>
using namespace std;
#define N 5
vector<array<array<int, N>,N>> answers;

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

void printArr(array<array<int,N>,N> board){
    for(int i = 0; i < (int)board.size(); i++){
        for(int j = 0; j < (int)board[i].size(); j++){
            if(board[i][j]){
                cout << "Q ";
            }else{
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << "****************************\n";
}

bool isSafe(array<array<int,N>,N> board, int row, int col){
    for(int i = col; i >= 0; --i){
        if(board[row][i])
            return false;
    }

    for(int i = row, j = col; j>= 0 && i >= 0; j--,i--){
        if(board[i][j])
            return false;
    }
    
    for(int i = row, j = col; j >= 0 && i < N; i++, j--){
        if(board[i][j])
            return false;
    }

    return true;
}
//"&board" : is very important to keep the changes updated correctly!!
void NQProblem(array<array<int,N>,N> &board, int col){
    if(col >= N){
        answers.push_back(board);
        return;
    }
    // printArr(board);
    for(int i = 0; i < N; i++){
        if(isSafe(board, i, col)){
            board[i][col] = 1;
            NQProblem(board,col+1);
            board[i][col] = 0; 
        }
    }
}
void moduleNQ(){

    array<array<int,N>,N> board =  { 
        {
            { 0, 0, 0, 0 },
            { 0, 0, 0, 0 },
            { 0, 0, 0, 0 },
            { 0, 0, 0, 0 } 
        }
    };
    NQProblem(board,0);
    if(answers.size() >= 0){
        cout << "There are "<< answers.size() <<" resolutions:"<<endl;
        for(int i = 0; i < (int)answers.size(); i++){
            cout << "Solution #"<<(i+1)<<":"<<endl;
            printArr(answers[i]);
        }
    }else{
        cout << "There isn't any solution\n";
    }
    // printArr(board);
}

int main(){
    moduleNQ();
}