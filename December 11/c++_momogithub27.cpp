#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter the two numbers: ";
    cin >> n1 >> n2;
    cout << bitset<8>(n1+n2).to_string();
    return 0;
}
