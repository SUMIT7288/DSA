class Solution {
public:
    int reverse(int x) {
        int num;
        long long int rev=0;
      while(x!=0){
       
        num=x%10;
        rev=rev*10 +num;
        x= x/10;
         if(rev>INT_MAX  ||rev<INT_MIN )return 0;
      }  
      return rev;
    }
};