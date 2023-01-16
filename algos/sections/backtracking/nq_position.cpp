#include <bits/stdc++.h>
#define N 4
using namespace std;


bool isSafe(int board[N][N], int row, int col){
	
	//checking by row
	for(int i = 0; i < col; i++)
		if(board[row][i])
			return false;
	//checking by upper diagonal
	for(int i = row,j = col; i >= 0 && j>= 0; i--,j--)
		if(board[i][j])
			return false;
	//checking by lower diagonal
	for(int i = row,j = col; i < N && j >= 0; i++,j--)
		if(board[i][j])
			return false;
	
	return true;
}

bool solvingNQproblem(int board[N][N], int col){
	if(col >= N)
		return true;
	
	for(int i = 0; i < N; i++){
		if(isSafe(board, i , col)){
			board[i][col] = 1;
			if(solvingNQproblem(board, col+1))
				return true;
			board[i][col] = 0;
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
                        { 1, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 } };
    //init position
    // board[2][0] = 1;
	if(!solvingNQproblem(board,1)){
		cout << "There are no solution\n";
		return false;
	}	
	cout << "Exist solutions\n";
	print(board);
	return true;
}

int main(){
	moduleNQ();
}