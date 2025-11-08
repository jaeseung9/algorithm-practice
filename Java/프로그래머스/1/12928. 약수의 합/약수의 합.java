class Solution {
    public int solution(int n) {
        int answer = 0;
        int num =0;
        
        for(int i=0; i<n; i++){
            num++;
            if(n % num == 0) answer += num;
        }
        return answer;
    }
}