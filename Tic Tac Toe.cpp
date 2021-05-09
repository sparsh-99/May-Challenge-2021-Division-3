//Link:- https://www.codechef.com/MAY21C/problems/TCTCTOE

/*
Tic-tac-toe is a game played between two players on a 3×3 grid. In a turn, a player chooses an empty cell and places their symbol on the cell. The players take alternating turns, where the player with the first turn uses the symbol X and the other player uses the symbol O. The game continues until there is a row, column, or diagonal containing three of the same symbol (X or O), and the player with that token is declared the winner. Otherwise if every cell of the grid contains a symbol and nobody won, then the game ends and it is considered a draw.

You are given a tic-tac-toe board A after a certain number of moves, consisting of symbols O, X, and underscore(_). Underscore signifies an empty cell.

Print

1: if the position is reachable, and the game has drawn or one of the players won.
2: if the position is reachable, and the game will continue for at least one more move.
3: if the position is not reachable.
Input
The first line contains an integer T, the number of test cases. Then the test cases follow.
Each test case contains 3 lines of input where each line contains a string describing the state of the game in ith row.
Output
For each test case, output in a single line 1, 2 or 3 as described in the problem.

Constraints
1≤T≤39
Aij∈{X,O,_}
Subtasks
Subtask #1 (100 points): Original Constraints

Sample Input
3
XOX
XXO
O_O
XXX
OOO
___
XOX
OX_
XO_
Sample Output
2
3
1
Explanation
Test Case 1: The board is reachable, and although no player can win from this position, still the game continues.

Test Case 2: There can't be multiple winners in the game.

Test Case 3: The first player is clearly a winner with one of the diagonals.


*/



#include <bits/stdc++.h>

#define lli long long int


using namespace std;
int main()
{
    lli t;
    cin >> t;
    while (t--)
    {
        int un = 0;

        char arr[3][3];
        int x = 0, o = 0;
        bool is1 = 0;
        int is2 = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 'X')
                    x++;
                else if (arr[i][j] == 'O')
                    o++;
                else
                    un++;
            }
        }
        int flag = 1;
        if (x < o || abs(x - o) > 1)
            flag = 0;

        else
        {

            int cntx = 0, cnto = 0;
            for (int i = 0; i < 3; i++)
            {
                if (arr[0][i] == 'X')
                    cntx++;
                else if (arr[0][i] == 'O')
                    cnto++;
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    is1 = true;
                else if (cnto == 3)
                    is2 = true;
            }
            cntx = 0;
            cnto = 0;
            for (int i = 0; i < 3; i++)
            {
                if (arr[1][i] == 'X')
                    cntx++;
                else if (arr[1][i] == 'O')
                    cnto++;
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    is1 = true;
                else if (cnto == 3)
                    is2 = true;
            }
            cntx = 0;
            cnto = 0;
            for (int i = 0; i < 3; i++)
            {
                if (arr[2][i] == 'X')
                    cntx++;
                else if (arr[2][i] == 'O')
                    cnto++;
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    is1 = true;
                else if (cnto == 3)
                    is2 = true;
            }
            cntx = 0;
            cnto = 0;
            for (int i = 0; i < 3; i++)
            {
                if (arr[i][0] == 'X')
                    cntx++;
                else if (arr[i][0] == 'O')
                    cnto++;
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    is1  =true;
                else if (cnto == 3)
                    is2 = true;
            }
            cntx = 0;
            cnto = 0;
            for (int i = 0; i < 3; i++)
            {
                if (arr[i][1] == 'X')
                    cntx++;
                else if (arr[i][1] == 'O')
                    cnto++;
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    is1 = true;
                else if (cnto == 3)
                    is2 = true;
            }
            cntx = 0;
            cnto = 0;
            for (int i = 0; i < 3; i++)
            {
                if (arr[i][2] == 'X')
                    cntx++;
                else if (arr[i][2] == 'O')
                    cnto++;
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    is1 = true;
                else if (cnto == 3)
                    is2 = true;
            }
            cntx = 0;
            cnto = 0;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (i == j)
                    {
                        if (arr[i][j] == 'X')
                            cntx++;
                        else if (arr[i][j] == 'O')
                            cnto++;
                    }
                }
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    is1 = true;
                else if (cnto == 3)
                    is2 = true;
            }
            cntx = 0;
            cnto = 0;

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (i == 2 - j)
                    {
                        if (arr[i][j] == 'X')
                            cntx++;
                        else if (arr[i][j] == 'O')
                            cnto++;
                    }
                }
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    is1 = true;
                else if (cnto == 3)
                    is2 = true;
            }
        }
        if (flag == 0)
            cout << 3 << endl;
        else if ((is1 && is2))
        {
            cout << 3 << endl;
        }
        else if (flag)
        {
            if (is1)
            {
                if (x == o)
                    cout << 3 << endl;
                else
                    cout << 1 << endl;
            }
            else if (is2)
            {
                if (o < x)
                    cout << 3 << endl;
                else
                    cout << 1 << endl;
            }
            else if (un == 0)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    cout<<"Hello World!";
}
