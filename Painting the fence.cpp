    if(n==1)return k;
        long long same=k,diff=1LL*k*(k-1),total=same+diff,m=1e9+7;
        for(int i=3;i<=n;i++){
            same=diff;
            diff=total*(k-1)%m;
            total=(same+diff)%m;
        }
        return total;
