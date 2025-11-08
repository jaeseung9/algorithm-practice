#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    float answer = 0;
    int num=0;
    
    answer = (float)n / 7;
    num = answer;
    if(answer>num)num++;
   
    return num;
}