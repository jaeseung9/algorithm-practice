#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
 stack<char> sta;
    
    for(char ch : s)
    {
        if(ch == '(') sta.push(ch);
        else 
        {
            if(sta.empty())return false;
            sta.pop();
        }
    }

    return sta.empty();
}