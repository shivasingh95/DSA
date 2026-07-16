class Solution {
public:

    int gcd(int a , int b){
        if(b== 0 ){
            return a ;
        }else {
            return gcd(b , a%b) ;
            
        }
    }
    long long gcdSum(vector<int>& nums) {
    int n = nums.size() ;
        
        int low = 0 , high = nums.size() -1 ; 
        long long sum = 0 ; 
      vector<long long > prefix(n) ;
        int mx = 0 ; 
        
        for(int i = 0 ; i < n ; i++){
            mx = max(mx , nums[i]) ;
            prefix[i] = gcd(nums[i] , mx ) ;
            
                }
        sort(prefix.begin() , prefix.end()) ; 
        
        
        while(low < high){
            sum += gcd(prefix[low] , prefix[high]) ;
            low++ ; 
            high-- ;
            
        }
        return sum ;
    }
};