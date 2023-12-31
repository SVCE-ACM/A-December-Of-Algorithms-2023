#include<bits/stdc++.h>
using namespace std;

int main() {
    int cur_x = 0, cur_y = 0, time = 0;
    vector<char> walk = {'w', 'e', 'w', 'e', 'w', 'e', 'w', 'e', 'w', 'n'};
    for (int i = 0; i < walk.size(); i++)
    {
        if (walk[i] == 'n')
        {
            cur_y++;
            time++;
        }
        else if (walk[i] == 's')
        {
            cur_y--;
            time++;
        }
        else if (walk[i] == 'e')
        {
            cur_x++;
            time++;
        }
        else
        {
            cur_x--;
            time++;
        }
    }
    if(!cur_x && !cur_y && time == 10) cout<<"TRUE";
    else cout<<"FALSE";
    return 0;
}