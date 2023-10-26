class Solution {
   
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int mod = 1000000007;
        int n = arr.size();
        unordered_map<long long,long long> mp;
        sort(arr.begin(), arr.end());
        
        
        int ans = 0;
        
        for(int i = 0 ; i < n ; i++){
            mp[arr[i]] += 1;
            int left = 0;
            int right = i-1;
            
            while(left <= right){
                long long child1 = arr[left];
                long long child2 = arr[right];
                long long product = (child1 * child2);
                if(product == arr[i]){
                   if(left == right){
					   mp[arr[i]] += (mp[arr[left]] * mp[arr[right]] )%mod;   
                   }
                  else{
                       mp[arr[i]] += (mp[arr[left]] * mp[arr[right]] * 2)%mod;
                        
                    }
                  mp[arr[i]] %= mod;
                  left += 1;
                  right -= 1;
                }
                
             if(product < arr[i]){
                    left += 1;
             }
             else if(product > arr[i]){
                    right -= 1;
             }
           }
            
            
            ans += mp[arr[i]];
            ans %= mod;
        }
        
        return ans;
 
    }
};