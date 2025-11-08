#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) 
{
    int answer = 0;
    int apBox = 0;
    
    apBox = score.size() / m;
    
    sort(score.begin(),score.end(), greater<>());
    
    for(int i=0; i<apBox; i++)
    {
        int Boxscore = score[i*m+(m-1)] ;
        
        answer += Boxscore * m;
    }
    
    return answer;
}