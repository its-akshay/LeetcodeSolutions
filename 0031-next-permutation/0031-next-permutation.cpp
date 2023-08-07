class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int ind = -1;
        //find the index from where the change will start
        int n = arr.size();
        for(int i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                ind = i;
                break;
            }
        }
        //if break point does not exists
        if(ind==-1){
           reverse(arr.begin(),arr.end());
            return;
        }
        for(int i=n-1; i>ind; i--)
        {
            if(arr[i]>arr[ind]){
                swap(arr[i],arr[ind]);
                break;
            }
        }
        reverse(arr.begin()+ind+1,arr.end());
    }
};