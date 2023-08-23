class Solution {
public:
    bool search(vector<int>& arr, int k) {  
        int low = 0;
        int high =arr.size()-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(arr[mid]==k){
                return true;
            }
            if (arr[low] == arr[mid] && arr[mid] == arr[high])
            {
            low = low + 1;
            high = high - 1;
            continue;
             }
             if(arr[low]<=arr[mid]){
                 //that mean may be left is sorted now check
                 if(arr[low]<=k &&arr[mid]>=k){
                     high = mid-1;
                 }
                 else{
                     low = mid+1;
                 }
             }
            else{
                if(arr[mid]<=k && arr[high]>=k){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
           
        }
         return false;
    }
};