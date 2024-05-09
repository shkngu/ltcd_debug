#pragma once
#include <vector>
int minimumRefill(std::vector<int>& p, int cA, int cB) {
    int len = p.size(), ans = 0, left = 0, right = len - 1;
    int wa = cA, wb = cB;
    while(left <= right){
        if(left == right){
            if(wa >= wb){
                if(wa < p[left])
                    ans++;
            }
            else
                if(wb < p[left])
                    ans++;
            break;
        }
        if(wa >= p[left])
            wa -= p[left];
        else{
            wa = cA - p[left];
            ans++;
        }
        if(wb >= p[right])
            wb -= p[right];
        else{
            wb = cB - p[right];
            ans++;
        }
        ++left;
        --right;
    }
    return ans;
}