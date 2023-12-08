#include <bits/stdc++.h>

using namespace std;
/*
The program works as follows:
First the numbers are placed increasingly like 1,2,3,...
1 is always placed at the first row and middle column.
for a 3x3 matrix, it is placed as 
    0 1 0
    0 0 0
    0 0 0
Then we go to north-east element of our position. For element 5, it is 3 and for element 8, it is 6.
    1 2 3
    4 5 6
    7 8 9
If the element already contains a number, place the holding string directly below it.
If the positions go beyond the boundaries of the matrix, rotate it appropriately such that it comes within the range.
*/
int main() {
    int n;
    cin>>n;
    vector<vector<int>> matrix(n, vector<int>(n,0));
    int r=0, c=(n/2), cur_num=1;
    while(cur_num <= n*n) {
        matrix[r][c] = cur_num;
        cur_num++;
        c=(c+1)%n;
        r=r-1;
        if(r<0) r=n-1;
        if(matrix[r][c] != 0) {
            c-=1;
            if(c<0) c=n-1;
            r=(r+2)%n;
        }
    }
    int maxDigits = to_string(n*n).length();//n*n is the maximum number in the matrix
    for (vector<int> arr : matrix) {
        for (int num : arr) {            
            // Displaying the number with proper spacing
            cout << setw(maxDigits) << num << " ";
        }
        cout << endl;
    }
    return 0;
}
