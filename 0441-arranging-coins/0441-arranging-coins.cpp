class Solution {
public:
    int arrangeCoins(int n) {
    //   int i=1;
    //   int res=0;
    //   while(n>=i){
    //     n-=i;
    //     res++;
    //     i++;
    //   }  
    //   return res;


      long left = 1, right = n, mid, sum;
        while (left <= right) {
            mid = left + (right - left) / 2;
            sum = mid * (mid + 1) / 2;
            if (sum == n) return mid;  // Perfect match
            else if (sum < n) left = mid + 1;
            else right = mid - 1;
        }
        return right;
    }
};