class Solution {
    public int solution(int n) {
        int x = 0;
        while(true){
            x++;
            if(n % x == 1) break;
        }
        return x;
    }
}