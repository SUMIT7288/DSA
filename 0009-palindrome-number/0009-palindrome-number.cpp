class Solution {
public:
    bool isPalindrome(int x) {
        long long int rev = 0;
        int digit=x;
        while(x>0){
            int digit=x%10;
            rev = (rev*10)+(digit);
            x=x/10;
            if(rev>INT_MAX || rev<INT_MIN) return 0;
        }
        return(rev==digit);
    }
};