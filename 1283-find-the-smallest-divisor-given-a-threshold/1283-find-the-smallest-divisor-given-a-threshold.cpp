class Solution {
public:
    int solve(vector<int>&arr,int mid,int limit){
	int ans = 0;
	for(int j=0;j<arr.size();j++){
		ans+=ceil((double)arr[j]/(double)mid);
	}
	if (ans <= limit)
	{
        return 1;
	}
	return -1;

}
int smallestDivisor(vector<int>& arr, int limit)
{
	int low = 1;
	int high = *max_element(arr.begin(),arr.end());
	while(low<=high){
		int mid = low+(high-low)/2;
		int ans = solve(arr,mid,limit);
		if(ans==1){
			high = mid-1;
		}
		else{
			low = mid+1;
		}
	}
	return low;
}
};