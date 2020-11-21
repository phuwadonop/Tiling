#include<iostream>

using namespace std;

void solve(int*);

int main() {

    int n;
    cin >> n;

    int* nPtr = &n;

    solve(nPtr);

    cout << n;

}
void solve(int* nPtr)
{
    int tiles[17][17];
    int ans = 0;
    for (int row = 0; row < *nPtr; row++)
    {
        for (int col = 0; col < *nPtr; col++)
        {
            cin >> tiles[row][col];
        }
    }

    for (int row = 0; row < *nPtr; row++)
    {
        for (int col = 0; col < *nPtr; col++)
        {
            if (tiles[row][col] != 0)
            {
                if (tiles[row + 1][col] == tiles[row][col] && tiles[row][col + 1] == tiles[row][col] && tiles[row + 1][col + 1] != tiles[row][col])
                {
                    ans++;
                }
                else if (tiles[row + 1][col] == tiles[row][col] && tiles[row + 1][col - 1] == tiles[row][col] && tiles[row][col - 1] != tiles[row][col])
                {
                    ans++;
                }
                else if (tiles[row][col + 1] == tiles[row][col] && tiles[row + 1][col+1] == tiles[row][col] && tiles[row + 1][col] != tiles[row][col])
                {
                    ans++;
                }
                else if (tiles[row][col + 1] != tiles[row][col] && tiles[row + 1][col] == tiles[row][col] && tiles[row + 1][col + 1] == tiles[row][col])
                {
                    ans++;
                }
            }
        }
    }
    *nPtr = ans;
}