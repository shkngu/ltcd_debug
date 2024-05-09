#ifndef EXIST_H
#define EXIST_H

#include <vector>
#include <string>

bool exist(std::vector<std::vector<char> >&, std::string);

void backtracking(std::vector<std::vector<char> >, std::string&, std::string, int, int, int, int, int, bool&, int);

#endif