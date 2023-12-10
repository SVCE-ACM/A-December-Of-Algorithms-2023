#include <bits/stdc++.h>

using namespace std;

int main() {
    set<string> tables{"emp"};//It is used for storing table names
    unordered_map<string, vector<string>> table_column_map{{"emp",{"empname"}}};//It is used for storing the list of columns for the given table
    unordered_map<string, vector<string>> column_values{{"empname",{"Shivnash Kumar", "Ragul Gupta"}}};//It is used for storing the list of columns for the given table
    string query, tableName, columnName;
    int length, startIndex;
    getline(cin, query);
    //query = "select substring(empname,4,13) from emp;";
    transform(query.begin(),query.end(),query.begin(),::tolower);
    regex pattern(R"(select\s+substring\((\w+),(\d+),(\d+)\)\s+from\s+(\w+);)");

    // Match the regular expression pattern against the query
    smatch matches;
    if (regex_match(query, matches, pattern)) {
        // Extract the matched components
        columnName = matches[1].str();
        startIndex = stoi(matches[2].str())-1;  // Convert to int
        length = stoi(matches[3].str());       // Convert to int
        tableName = matches[4].str();
    } 
    else {
        cout << "Invalid query format." << endl;
    }
    if(tables.find(tableName) == tables.end()) cout<<"Invalid Table Name";
    auto it = table_column_map.find(tableName);
    if (it == table_column_map.end() || find(it->second.begin(), it->second.end(), columnName) == it->second.end()) {
        cout << "Column is not present in the table." << endl;
    }
    it = column_values.find(columnName);
    for(string str: it->second) {
        cout<<str.substr(startIndex, length)<<endl;
    }
    return 0;
}
