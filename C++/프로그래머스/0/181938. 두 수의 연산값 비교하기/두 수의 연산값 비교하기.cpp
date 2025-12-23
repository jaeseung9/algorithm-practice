#include <string>
using namespace std;

int solution(int a, int b) {
    int concat = stoi(to_string(a) + to_string(b));
    int product = 2 * a * b;

    if (concat >= product)
        return concat;
    else
        return product;
}
