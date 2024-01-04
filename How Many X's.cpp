class Solution {
  public:
    int countX(int L, int R, int X) {
        // code here
        int cnt = 0;
        for(int i = L+1; i < R; i++){
            int temp = i;
            while(temp > 0){
                int digit =  temp % 10;
                if(digit == X){
                    cnt++;
                }
                temp /= 10;
            }
        }
        return cnt;
    }
};
