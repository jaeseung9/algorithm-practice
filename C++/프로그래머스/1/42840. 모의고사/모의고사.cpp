#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers)
{
    vector<int> answer;

    int num1[5] = { 1,2,3,4,5 };
    int num2[8] = { 2,1,2,3,2,4,2,5 };
    int num3[10] = { 3,3,1,1,2,2,4,4,5,5 };

    int point1 = 0;
    int point2 = 0;
    int point3 = 0;

    for (int i = 0; i < answers.size(); i++)
    {
        if (num1[i % 5] == answers[i]) point1++;
        if (num2[i % 8] == answers[i]) point2++;
        if (num3[i % 10] == answers[i]) point3++;
    }
    if (point1 == point2 && point1 == point3)
    {
        answer.push_back(1);
        answer.push_back(2);
        answer.push_back(3);
    }
    else if (point1 > point2 && point1 > point3) answer.push_back(1);
    else if (point2 > point1 && point2 > point3) answer.push_back(2);
    else if (point1 == point2 && point1 > point3)
    {
        answer.push_back(1);
        answer.push_back(2);
    }
    else if (point1 == point3 && point1 > point2)
    {
        answer.push_back(1);
        answer.push_back(3);
    }
    else if(point2 == point3 && point2 > point1)
    {
        answer.push_back(2);
        answer.push_back(3);
    }
    else answer.push_back(3);

    return answer;
}