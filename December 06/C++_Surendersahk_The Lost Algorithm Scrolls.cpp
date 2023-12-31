#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;

// Function to check if two words differ by only one character
bool isAdjacent(const string& a, const string& b) {
    int diffCount = 0;
    for (size_t i = 0; i < a.length(); ++i) {
        if (a[i] != b[i]) {
            if (++diffCount > 1) {
                return false;
            }
        }
    }
    return diffCount == 1;
}

// Perform BFS to find the shortest path
vector<string> findOptimalSequence(const vector<string>& words, const string& start, const string& end) {
    unordered_map<string, vector<string>> adjList;

    // Create adjacency list
    for (size_t i = 0; i < words.size(); ++i) {
        for (size_t j = i + 1; j < words.size(); ++j) {
            if (isAdjacent(words[i], words[j])) {
                adjList[words[i]].push_back(words[j]);
                adjList[words[j]].push_back(words[i]);
            }
        }
    }

    unordered_map<string, string> parent;
    queue<string> q;
    q.push(start);
    parent[start] = "";

    while (!q.empty()) {
        string current = q.front();
        q.pop();

        if (current == end) {
            break;
        }

        for (const string& neighbor : adjList[current]) {
            if (parent.find(neighbor) == parent.end()) {
                parent[neighbor] = current;
                q.push(neighbor);
            }
        }
    }

    // Reconstruct the optimal sequence
    vector<string> sequence;
    string current = end;
    while (current != "") {
        sequence.push_back(current);
        current = parent[current];
    }

    reverse(sequence.begin(), sequence.end());
    return sequence;
}

int main() {
    vector<string> encodedWords = {"co", "cade", "cade", "cate", "cart", "mart"};
    string startWord = "code";
    string endWord = "mart";

    vector<string> sequence = findOptimalSequence(encodedWords, startWord, endWord);

    if (sequence.empty() || sequence[0] != startWord || sequence.back() != endWord) {
        cout << "No valid sequence found." << endl;
    } else {
        cout << "Optimal Sequence:" << endl;
        for (const string& word : sequence) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}
