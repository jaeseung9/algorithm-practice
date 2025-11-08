#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> numbers) 
{
    // 결과를 저장할 벡터 -1로 초기화
    vector<int> answer(numbers.size(), -1); 
    stack<int> s;
    
    
    for (int i = 0; i < numbers.size(); ++i) 
    {
        //스택이 비어있지 않고, 스택의 가장 위에 있는 인덱스가 작다면
        while (!s.empty() && numbers[s.top()] < numbers[i]) 
        {
            //스택의 가장 위 인덱스에 현재 값을 넣고
            answer[s.top()] = numbers[i];
            // 해당 인덱스를 스택에서 제거
            s.pop();
        }
        //현재 요소의 인덱스를 스택에 추가
        s.push(i);
    }
    
    return answer;
}