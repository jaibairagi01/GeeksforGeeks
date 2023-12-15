class Solution{
public:
	// #define ll long long
	int mod=1e9+7;
if(n==1) return 1;
if(n==2) return 2;
	int nthPoint(int n) {
	    // code here
	    int first = 1;
	    int second = 2;
	    
	    for(int i=3;i<=n;i++){
	        int temp = (first+second)%mod;
	        first = second;
	        second = temp;
	    }
	    return second;
	}
};
