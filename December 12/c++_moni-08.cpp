#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<pair<string, int>> box;
    for(int i = 0; i<3; i++){
        cout << "Enter the No. of jewelry for Box" << i+1 << " :";
        int n;
        cin >> n;
        cout << "Enter the jewelry for Box" << i+1 << " :";
        for(int j = 0; j<n; j++){
            string s;
            cin >> s;
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            box.push_back(make_pair(s, i+1));
        }
    }
    sort(box.begin(), box.end());
    int l = 0, h = box.size()-1;
    while(l <= h){
        int m = (l+h)/2;
        if(box[m].first == "gold"){
            cout << "Box" << box[m].second << " Contains the Gold";
            exit(0);
        }
        if(box[m].first > "gold"){
            h = m-1;
        } else {
            l = m+1;
        }
    }
    cout << "Gold is not present";
    return 0;
}
