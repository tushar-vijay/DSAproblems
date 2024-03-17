class Solution {
public:
    bool isPowerOfTwo(int n) {

        if(n == 1) return true;
        
        int ans = 1;

        for(int i=1; i<=30; i++){
            ans *= 2;
            if(ans == n) return true;
            if(ans > n) return false;
        }

        return false;
    }
};
