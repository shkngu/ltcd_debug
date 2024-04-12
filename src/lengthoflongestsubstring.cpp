#include "lengthoflongestsubstring.h"

int lengthOfLongestSubstring(std::string s) {
    int len = s.size(), ans = 0, index = 0;
    std::unordered_set<char> uset;
    for(int i = 0; i < len; i++){
        for(int j = index; j < len; j++){
            if(!uset.count(s[j]))
                uset.insert(s[j]);
            else if(uset.count(s[j])){
                uset.erase(s[i]);
                ans = std::max(ans, j - i);
                index = j;
                break;
            }
            if(j == len - 1){
                return std::max(ans, j - i + 1);
            }
        }
    }
    return ans;
}