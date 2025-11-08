#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    int start = -1, end = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 2)
        {
            if (start == -1) start = i;
            end = i;
        }
    }
    if (start == -1) answer.push_back(-1); // 배열에 2가 없는 경우
    else
    {
        for (int i = start; i <= end; i++)
        {
            answer.push_back(arr[i]);
        }
    }
    return answer;
}