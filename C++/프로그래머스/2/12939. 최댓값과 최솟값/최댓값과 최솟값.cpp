#include <string>
#include <sstream>
#include <algorithm>
#include <vector> 

using namespace std;

string solution(string s) 
{
    vector<int> numbers; 
    stringstream ss(s); 
    string temp;
    
  
    while (ss >> temp) // 공백을 기준으로 temp에 수를 저장 
    {
        numbers.push_back(stoi(temp)); // 문자열을 정수로 변환하여 벡터에 저장
    }
    
    // 벡터에서 최솟값과 최댓값을 찾음
    int min_val = *min_element(numbers.begin(), numbers.end());
    int max_val = *max_element(numbers.begin(), numbers.end());

    // 결과를 문자열로 변환
    return to_string(min_val) + " " + to_string(max_val);
}