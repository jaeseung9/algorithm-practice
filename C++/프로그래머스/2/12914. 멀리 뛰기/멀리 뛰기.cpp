#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    const int MOD = 1234567;
    if (n < 2) return n;
    
    long long a = 1, b = 2, c;

    for (int i = 3; i <= n; i++) {
        c = (a + b) % MOD; 
        a = b;
        b = c;
    }
    
    return b % MOD;
}