#include <iostream>
#include "maximumBinaryString.h"
#include "min0perations.h"
#include "findChampion.h"
#include "lengthoflongestsubstring.h"
#include "minSubArrayLen.h"
#include "exist.h"
#include "waterplant.h"
using namespace std;

int main(){
    // string s = "000110";
    // s = maximumBinaryString(s);
    // cout << s << endl;
 
    // vector<int> nums(6);
    // for(auto& n : nums)
    //     cin >> n;
    // int ans = 0;
    // ans = min0perations(nums);
    // cout << ans << endl;

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
    // vector<vector<int> > champion1(5, vector<int>(5));
    // for(vector<int>& x : champion1)
    //     for(int& y : x)
    //         cin >> y;
    // cout << findChampioni(champion1) << endl;
    
    // vector<vector<int> > champion2(3, vector<int>(2));
    // for(vector<int>& x : champion2)
    //     for(int& y : x)
    //         cin >> y;
    // cout << findChampionii(4, champion2) << endl;
    
    // string ss = "abcabcbb";
    // cout << lengthOfLongestSubstring(ss) << endl;
    // vector<int> nums(14);
    // for(auto& n : nums)
    //     cin >> n;
    // cout << minSubArrayLen(80, nums) << endl;
    // char b[3][4] = {{'a', 'b', 'c', 'e'}, {'s', 'f', 'c', 's'}, {'a', 'd', 'e', 'e'}};
    // vector<vector<char> > board(3, vector<char>(4));
    // for(int i = 0; i < 3; i++)
    //     for(int j = 0; j < 4; j++)
    //         board[i][j] = b[i][j];
    // string word = "abcb";
    // cout << exist(board, word);
    int p[7] = {7,7,7,7,7,7,7};
    vector<int> pp(7, 0);
    for(int i = 0; i < 7; ++i)
        pp[i] = p[i];
    cout << minimumRefill(pp, 7, 8);
    return 0;
}