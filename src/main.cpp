#include <iostream>
#include "maximumBinaryString.h"
#include "min0perations.h"

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
    return 0;
}