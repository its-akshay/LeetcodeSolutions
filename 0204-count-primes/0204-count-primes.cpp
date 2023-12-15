class Solution {
public:
    // int countPrimes(int n) {
    //     bool isPrime[n+1];
    //     for(int i=0;i<=n;i++){
    //         isPrime[i] = true;
    //     }
    //     int count = 0;
    //     for(int i=2;i*i<=n;i++){
    //         if(isPrime[i]){
    //             for(int j = i*i;j<=n;j+=i){
    //                 isPrime[j] = false;
    //             }
    //         }
    //     }
    //     for(int i=3;i<=n;i++){
    //         if(isPrime[i]==true){
    //             count++;
    //         }
    //     }
    //     return count;
    // }
    
    int countPrimes(int n){
        if(n<=1){
            return 0;
        }
        bool isPrime[n+1];
        for(int i=0;i<n;i++){
            isPrime[i] = true;
        }
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i=2;i*i<n;i++){
            if(isPrime[i]==true){
                for(int j =i*i;j<=n;j+=i){
                    isPrime[j] = false;
                }
            }
        }
        int count = 0;
        for(int i=2;i<n;i++){
            if(isPrime[i]==true){
                count++;
            }
        }
        return count;
    }
};