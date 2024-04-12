#include <iostream>
#include "maximumBinaryString.h"
#include "min0perations.h"
#include "findChampion.h"
#include "lengthoflongestsubstring.h"

using namespace std;

int main(){
    string s = "000110";
    s = maximumBinaryString(s);
    cout << s << endl;
 
    vector<int> nums(6);
    for(auto& n : nums)
        cin >> n;
    int ans = 0;
    ans = min0perations(nums);
    cout << ans << endl;

    // int championtest1[3][3] = {
    //     {0, 1, 1},
    //     {0, 0, 1},
    //     {0, 0, 0}
    // },
    // championtest2[3][2] = {
    //     {0, 2},
    //     {1, 3},
    //     {1, 2}
    // };
    vector<vector<int> > champion1(5, vector<int>(5));
    for(vector<int>& x : champion1)
        for(int& y : x)
            cin >> y;
    cout << findChampioni(champion1) << endl;
    
    vector<vector<int> > champion2(3, vector<int>(2));
    for(vector<int>& x : champion2)
        for(int& y : x)
            cin >> y;
    cout << findChampionii(4, champion2) << endl;
    
    string ss = "abcabcbb";
    cout << lengthOfLongestSubstring(ss) << endl;
    return 0;
}