#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) 
{
      vector<int> answer;

    for (int i = 0; i < s.size(); i++)
    {
        answer.push_back(-1);
        for (int j = 0; j < i; j++)
        {
            if (s[i] == s[j])
            {
                answer[i] = i - j;
            }
        }
    }
    return answer;
}