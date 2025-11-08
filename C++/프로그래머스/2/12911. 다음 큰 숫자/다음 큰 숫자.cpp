#include <string>
#include <vector>

using namespace std;

int countOnes(int x) {
    int cnt = 0;
    while (x > 0) {
        cnt += (x & 1);
        x >>= 1;
    }
    return cnt;
}

int solution(int n) {
    int target = countOnes(n);

    while (true) {
        n++;
        if (countOnes(n) == target) return n;
    }
}
