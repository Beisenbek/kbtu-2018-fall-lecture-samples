#include <string>

std::string assert(std::string testName, bool exp){
    std::string res = testName;
    if(exp == true){
        res = res + ": passed\n";
    }else{
        res = res + ": failed\n";
    }
    return res;
}