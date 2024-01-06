#include <bits/stdc++.h>
using namespace std;

int find_start(int n, vector<int>& petrol, vector<int>& distance)
{
    int start = 0; 
    int end = 1; 
    int curr_petrol = petrol[start] - distance[start]; 
    while (end != start || curr_petrol < 0) 
    { 
        while (curr_petrol < 0 && start != end) 
        { 
            curr_petrol -= petrol[start] - distance[start]; 
            start = (start + 1) % n; 
            if (start == 0) 
               return -1; 
        } 
 
        curr_petrol += petrol[end] - distance[end]; 
        end = (end + 1) % n; 
    } 
    return start;
}


int main() {
    int N = 4;
    vector<int> Petrol {4, 6, 7, 4};
    vector<int> Distance {6, 5, 3, 5};
    int out = find_start(N, Petrol, Distance);
    if(out != -1) out++;
    cout << out << endl;
    N = 5;
    Petrol = {2, 3, 7, 4, 5};
    Distance = {6, 5, 3, 5, 3};
    out = find_start(N, Petrol, Distance);
    if(out != -1) out++;
    cout << out << endl;
    return 0;
}