#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    unordered_map<int, int> count;
    
    for (int t : tangerine) {
        count[t]++;
    }

    vector<int> freq;
    for (auto &p : count) {
        freq.push_back(p.second);
    }

    sort(freq.begin(), freq.end(), greater<int>());

 
    int answer = 0;
    for (int f : freq) {
        k -= f;
        answer++;
        if (k <= 0) break;
    }

    return answer;
}