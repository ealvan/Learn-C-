#include <bits/stdc++.h>
using namespace std;
 

const int N = 2;
int col[N], diag1[2*N-1], diag2[2*N-1];
int counter = 0;

void search(int y) {
    if (y == N) {
        counter++;
        return;
    }
    for (int x = 0; x < N; x++) {
        if (col[x] || diag1[x+y] || diag2[x-y+N-1]) continue;
        col[x] = diag1[x+y] = diag2[x-y+N-1] = 1;
        search(y+1);
        col[x] = diag1[x+y] = diag2[x-y+N-1] = 0;
    }
}

int main() {
    search(0);
    cout << "Number of solutions: " << counter << endl;
    return 0;
}