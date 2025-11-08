#include <string>
#include <vector>

using namespace std;

string solution(string rsp)
{
    string answer = "";
    
    for(int i=0; i<rsp.size(); i++)
    {
        if(rsp[i] =='2') answer += '0';
        else if(rsp[i] =='5') answer += '2';
        else answer +="5";
    }
    return answer;
}