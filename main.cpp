#include <iostream>
#include <string>

int main(){
    std::string s = 
        #include "current_state.txt"
    ;
    std::cout << s << "\n";
    return 0;
}