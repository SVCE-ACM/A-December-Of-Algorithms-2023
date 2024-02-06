#include <iostream>
using namespace std;

int main ()
{
    int n, upper_sum = 0, lower_sum = 0;
    cin >> n;
    bool s = false;
    for (int i = 0; i < n; i++)
    {
        int x, y; 
        cin >> x >> y;
        if ((n == 1) && 
            ((x % 2 != 0) || 
            (y % 2 != 0)))
        {
            cout << -1;
            return 0;
        }
        if (y % 2 + x % 2 == 1)
            s = true;
        upper_sum += x;
        lower_sum += y;
    }
    if (upper_sum % 2 == 0 && lower_sum % 2 == 0) 
        cout << "0" << endl;
    else if (upper_sum % 2 == 1 && lower_sum % 2 == 1 && s) 
        cout << "1" << endl;
    else 
        cout << "-1" << endl;
    return 0;
}
