#include "../include/zamenitel3000.h"

std::string zamenitel3000(const std::string& input) {
    std::string result = input;
    
    for (char &c : result) {
        if (c == 'a') {
            c = 'b';
        } else if (c == 'b') {
            c = 'a';
        }
    }
    return result;
}
