#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    int num = n;
    
    while(num > 0)
    {
        if( n % num ==0 )
        {
            answer += num;
        }
        num--;
    }
    
    return answer;
}