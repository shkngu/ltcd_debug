#include "min0perations.h"

using namespace std;

int gcd(int a, int b){
    int tmp;
    while(b>0)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int min0perations(vector<int>& nums){
    int len = nums.size(), gcd_all = 0, cnt1 = 0;
    for(auto n : nums){
        gcd_all = gcd(gcd_all, n);
        cnt1 += n == 1;
    }
    if(gcd_all > 1) 
        return -1;
    if(cnt1) return 
        len - cnt1;
    int min_size = len;
    for(int i = 0; i < len; i++){
        int g = 0;
        for(int j = i; j < len; j++){
            g = gcd(g, nums[j]);
            if(g == 1){
                min_size = min(min_size, j - i + 1);
                break;
            }
        }
    }
    return min_size + len - 2;
}