#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cout << "Enter the No. of elements: ";
    cin >> n;
    cout << "Enter the k: ";
    cin >> k;
    cout << "Enter the sequence of elements: ";
    vector<string> s;
    for(int i = 0; i<n; i++){
        string temp;
        cin >> temp;
        s.push_back(temp);
    }
    reverse(s.begin(), s.end());
    int count = 0, temp = 0, ans = 0, sum = 0;
    vector<int> visited (k, 0);
    for(int i = 0; i<s.size(); i++){
        if(s[i][0] == 'X'){
            int a = s[i][1] - '0';
            if(visited[a-1] == 0){
                visited[a-1] = 1;
                ans = ans + (a*sum);
            }
        } else {
            int a = s[i][0]-'0';
            if(i%2==0){
                temp = a;
                sum = temp;
            } else {
                temp += a;
                sum = temp;
            }
        }
    }
    cout << endl <<ans;
    return 0;
}

