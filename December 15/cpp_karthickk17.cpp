#include<bits/stdc++.h>

using namespace std;

unordered_set<string> string_set;

void helper (string str, int index, string temp_str) {
    if (index >= str.length()) 
        return;
    temp_str += str[index];
    string_set.insert(temp_str);
    helper(str, index+1, temp_str);
    temp_str.pop_back();
    helper(str, index+1, temp_str);
}

int main()
{
    string str;
    cin >> str;
    helper(str, 0, "");
    // for (string s:string_set) 
    //     cout << s << " ";
    // cout << endl;
    cout << string_set.size() + 1 << endl; // To include the empty set, I have added the +1 in the output.
    return 0;
}