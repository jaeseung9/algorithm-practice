#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code)
{
    string answer = "";
    int num = code;
   while(code<=cipher.size())
   {
       answer += cipher[code-1];
       code += num;
   }

    return answer;
}