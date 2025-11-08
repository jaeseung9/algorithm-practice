#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) 
{
    int answer = 0;
    // i부터j까지 반복
    for(int a=i; a<=j; a++)
    {
        // b값에 a를 넣어준다
        int b=a;
        
        //b의 값이 0이되기 전까지 반복
        while(1)
        {
            //b의 값이 0이되면 멈춘다.
            if(b==0) break;
            //b값의 나머지가 k랑 같으면 answer++
            if(b%10==k) answer++;
            //b의 값을 10으로 나눠준다.
            b/=10;
        }
    }
    return answer;
}