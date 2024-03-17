class Solution {
public:
    int bitwiseComplement(int n) {

        if(n == 0) return 1; // edge case

        int count = 0;
        int x = 0;
        int temp = n;

        while(temp){
            temp >>= 1;
            count++;
        }

        while(count){
            n = n ^ (1<<x);
            x++;
            count--;
        }

        return n;
    }
};
