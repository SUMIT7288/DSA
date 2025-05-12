class Solution {
 public:
  bool threeConsecutiveOdds(vector<int>& arr) {
    int count = 0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]%2==1) {
            count++;
        }else{
            count=0;
        }
        if (count==3) return true;
    }
    return false;
  
  }
};

// class Solution {
// public:
//     bool threeConsecutiveOdds(vector<int>& arr) {
//         int n = arr.size();
//         for (int i = 0; i < n - 2; i++) {
//             if (arr[i] % 2 == 1 && arr[i + 1] % 2 == 1 && arr[i + 2] % 2 == 1) {
//                 return true;
//             }
//         }

//             return false;
//         }
//     };