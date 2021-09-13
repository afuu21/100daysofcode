#include<bits/stdc++.h>
using namespace std;

bool* check_board(char board[][3], int i, int j, bool *test) {
    bool test_r=true, test_c = true;
    for(int x=i; x<3; x++) {
        if(board[x][j] == 'o')
            test_r=false;
    }

    for(int y = j; y<3; y++) {
        if(board[i][y] == 'o')
            test_c = false;
    }

    test[0] = test_r;
    test[1] = test_c;

    return test;
}

int main() {
    char board[3][3];
    bool *b;
    int cnt, mincnt = 999;
    map <int,int> map_count;
    map <int,int> map_row;
    map <int,int> map_col;

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            cin>>board[i][j]; // . x o

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++) {
            bool test[2];
            b = check_board(board,i,j,test);
            if(b[0]==true) {
                cnt = 0;
                for(int x=i; x<3; x++) {
                    if(board[x][j] == '.')
                        cnt++;
                }
                if(cnt<=mincnt && map_col[j] == 0) {
                    mincnt = cnt;
                    map_count[mincnt]++;
                    map_col[j]++;
                }
            }

            if(b[1]==true) {
                cnt = 0;
                for(int y = j; y<3; y++) {
                    if(board[i][y] == '.')
                        cnt++;
                }
                if(cnt<=mincnt && map_row[i] == 0) {
                    mincnt = cnt;
                    map_count[mincnt]++;
                    map_row[i]++;
                }
            }

        }
        cout<<"Min number of X's to put: "<<mincnt<<" and there are "<<map_count[mincnt]<<" sets like that\n";
}
