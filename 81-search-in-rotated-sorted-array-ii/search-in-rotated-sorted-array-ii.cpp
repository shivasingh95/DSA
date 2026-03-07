class Solution {
public:
    bool search(vector<int>& arr, int k) {
            int low = 0 ; 
            int high = arr.size() - 1 ; 

            while(low <= high ){
                int mid = (low + (high - low ) / 2 ) ; 
                if(arr[mid ] == k ){
                    return true ; 

                }
                if(arr[mid ] == arr[low ]&& arr[high ] == arr[mid]){
                    low +=1 ; 
                    high -= 1 ; 
                    continue  ; 

                }

                if(arr[low ] <= arr[mid ] ){
                    if(arr[low ] <=  k && k <= arr[mid]){
                        high = mid - 1  ; 


                    }else {
                        low = mid + 1 ; 

                    }
                }else {
                    if(arr[mid ] <= k && k <= arr[high]){
                        low = mid + 1 ; 
                    }else {
                        high = mid - 1 ; 
                    }
                }
            }
            return false  ; 
    }
};