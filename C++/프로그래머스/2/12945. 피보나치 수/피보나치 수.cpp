#include <string>
#include <vector>

using namespace std;

int solution(int n) {

    const int MOD = 1234567;

    if (n < 2) return n;

    long long a = 0, b = 1, c;

    for (int i = 2; i <= n; i++) {
        c = (a + b) % MOD; 
        a = b;
        b = c;
    }

    return b % MOD;
}
