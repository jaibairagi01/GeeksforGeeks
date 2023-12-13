class Solution{
public:
	// #define ll long long
	int mod=1e9+7;
	ll countStrings(int n) {
	    // code here
	    ll first = 1;
	    ll second = 2;
	    
	    for(int i=2;i<=n;i++){
	        ll temp = (first+second)%mod;
	        first = second;
	        second = temp;
	    }
	    return second;
	}
};
