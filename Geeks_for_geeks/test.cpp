        if(q<2)return 0;
        long long l=2;
        long long r=n*2;
        if(q>r)return 0;
        return min(abs(q-l),abs(q-r))+1;
