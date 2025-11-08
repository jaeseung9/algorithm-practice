#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter)
{
    string answer = "";
    
    for(int i=0; i<my_string.size();)
    {
       if(my_string[i]==letter[0])
       {
           my_string.erase(i,1);
       }
       else i++;
    }
    answer = my_string;
    
    return answer;
}