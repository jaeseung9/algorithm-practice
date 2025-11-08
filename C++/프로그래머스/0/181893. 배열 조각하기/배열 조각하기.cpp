#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query)
{
    vector<int> answer;

    for (int i = 0; i < query.size(); i++)
    {
        if (i % 2 == 0)
        {
            for (int j = arr.size()-1; j >= query[i]+1; j--)
            {
                arr.erase(arr.begin() + j);
            }
        }
        else
        {
            for (int j = query[i]; j > 0; j--)
            {
                arr.erase(arr.begin() + j-1);
            }
        }


    }
    return arr;
}
