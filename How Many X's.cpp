class Solution {
  public:
    int countX(int L, int R, int X) {
        // code here
        int cnt = 0;
        for(int i = L+1; i < R; ++i){
            cnt += countOccurence(i, X);
        }
        return cnt;
    }
    private:
    int countOccurence(int num, int X){
        int cnt = 0;
        while(num > 0){
            if(num % 10 == X){
                ++cnt;
            }
            num /= 10;
        }
        return cnt;
    }
};
