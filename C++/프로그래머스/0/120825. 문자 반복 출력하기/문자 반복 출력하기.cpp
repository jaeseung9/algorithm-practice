#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n)
{
    string answer = "";
    
    for(int i=0; i < my_string.size(); i++)
    {
        my_string.insert(i,n-1,my_string[i]);
        i += n-1;
    }
    
    
    
    return my_string;
}