#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) 
{
    int answer = 0;
    int num[1001]{0,};

    
     for(int i = 0; i < array.size(); i++)
    {
        num[array[i]]++;
    }
    
    for(int i=0; i<1001; i++)
    {
        if(answer<=num[i])answer=i;  
    }

        
   int max_num = 0;
    for(int i = 0; i < 1001; i++)
    {
        if(max_num <= num[i]) {
            if(max_num == num[i]) {
                answer = -1;
            } else {
                answer = i;
            }
            max_num = num[i];
        }
    }
    return answer;
}
