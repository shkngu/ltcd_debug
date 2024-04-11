#include "maximumBinaryString.h"

std::string maximumBinaryString(std::string b) {
    int len = b.size();
    int j = 0;
    for(int i = 0; i < len - 1; i++){
        if(b[i] == '0'){
            while(j <= i || ((j < len) && (b[j] == '1')))
                j++;
            if(j < len){
                b[j] = '1';
                b[i] = '1';
                b[i + 1] = '0';
            }
        }
    }
    return b;
}