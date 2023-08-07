class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
         vector<int>odd;
        vector<int>even;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.rbegin(),odd.rend());
       int m=0, n=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(i%2==0)
            {
                
                nums[i]=even[m];
                m++;
            }
            else
            {
                nums[i]=odd[n];
                n++;
            }
        }
        return nums;
    }
};