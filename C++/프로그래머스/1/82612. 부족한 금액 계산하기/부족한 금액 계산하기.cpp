using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;

    long long requiredMoney = ((long long)price * count * (count + 1)) / 2; // 놀이기구 이용료 총액 계산

    if (money >= requiredMoney) answer = 0; // 금액이 부족하지 않은 경우
    else answer = requiredMoney - money; // 부족한 금액 계산

    return answer;
}