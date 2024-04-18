#include "minSubArrayLen.h"
#include <algorithm>

int minSubArrayLen(int t, std::vector<int>& nums) {
        int len = nums.size(), sums = 0, ans = 1e6, index = 0;
        for(int i = 0; i < len; i++){
            for(int j = index; j <len; j++){
                sums += nums[j];
                if(sums >= t){
                    ans = std::min(ans, j - i + 1);
                    sums -= nums[j] + nums[i];
                    index = j;
                    break;
                }
                if(j == len - 1 && i == 0)    
                    return 0;
                if(j == len - 1){
                    sums -= nums[j] + nums[i];
                    index = j;
                }
            }
        }
        return ans;
    }