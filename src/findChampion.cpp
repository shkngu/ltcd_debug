#include "findChampion.h"
#include <numeric>

int findChampioni(std::vector<std::vector<int> >& grid){
    int len = grid.size();
    for(int i = 0; i < len; i++)
        if(std::accumulate(grid[i].begin(), grid[i].end(), 0) == len - 1)
            return i;
    return -1;
}

int findChampionii(int n, std::vector<std::vector<int> >& grid){
    std::vector<int> degree(n);
    for(std::vector<int> x : grid)
        degree[x[1]]++;
    int index = 0, ans = -1;
    for(int i = 0; i < n; i++)
        if(degree[i] == 0){
            index++;
            ans = i;
        }
    if(index != 1)
        return -1;
    return ans;
}