#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int i = 1;
    while (i * i <= n) 
    { 
        if (i * i == n) 
        {  
            return 1;
        }
        i++;
    }
    return 2; 
}