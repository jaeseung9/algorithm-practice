#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    int transformCount = 0;   // 변환 횟수
    int removedZeroCount = 0; // 제거된 0의 총 개수

    while (s != "1") {
        int onesCount = 0;

        // 0 제거 + 1 카운트
        for(char c : s) {
            if(c == '1') onesCount++;
        }

        removedZeroCount += (s.length() - onesCount); // 제거된 0 개수 누적
        transformCount++; // 변환 횟수 증가

        // 1의 개수를 2진수 문자열로 변환
        s = "";
        while (onesCount > 0) {
            s = char(onesCount % 2 + '0') + s;
            onesCount /= 2;
        }
    }

    return {transformCount, removedZeroCount};
}
