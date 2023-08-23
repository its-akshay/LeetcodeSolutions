class Solution {
public:


long long calculateTotalHours(vector<int> &v, int hourly) {
    long long int totalH = 0;
    int n = v.size();
    //find total hours:
    for (int i = 0; i < n; i++) {
        totalH += ceil((v[i]) / (double)(hourly));
    }
    return totalH;
}

int minEatingSpeed(vector<int> v, int h) {
    int low = 1, high = 1000000000;

    //apply binary search:
    while (low <= high) {
        int mid = (low + high) / 2;
        long long totalH = calculateTotalHours(v, mid);
        if (totalH <= h) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;
}
};