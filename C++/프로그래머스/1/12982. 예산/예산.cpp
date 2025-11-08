#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget)
{
    int answer = 0;
    
    sort(d.begin(),d.end()); //algorithm 헤더를 추가하고 sort함수를 사용해서 정렬
    
    for(int i=0; i<d.size(); i++) 
    {
        if(d[i]<=budget) //예산보다 작은 경우
        {
            budget -= d[i]; //부서별로 신청한 금액 예산에서 차감
            answer++; //몇개의 부서를 지원해줬는지 확인 
        }
    }
    return answer;
}