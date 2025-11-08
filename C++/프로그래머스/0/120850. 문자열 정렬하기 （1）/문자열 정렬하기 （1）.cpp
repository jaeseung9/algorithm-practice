#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string my_string) 
{
    vector<int> answer;
    int A=0;
    for(int i=0; i<my_string.size(); i++)
    {
        if(my_string[i]<58)
        {
            A = (int)my_string[i]-48;
            answer.push_back(my_string[i]-48);
        }
    }
    
    sort(answer.begin(),answer.end());
    return answer;
}