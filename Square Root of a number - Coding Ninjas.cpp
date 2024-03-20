int floorSqrt(int n)
{   // using binary search
    if(n==0) return 0;
    if(n==1) return 1;
    long long s=1, e=n/2;
    long long m = s + (e-s)/2;

    while(s < e){
        if(m*m <= n && (m+1)*(m+1)> n)
            return m;
        else if(m*m > n)
            e = m;
        else
            s = m+1;
        m = s + (e-s)/2;
    }

    return m;
}
