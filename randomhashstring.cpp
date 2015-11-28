#include <iostream>
#include <stdlib.h>
#include <string>

void gen_random(char* s, const int len) {
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < len; ++i) {
        s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    s[len] = 0;
}

int main () {
    char foo[10];
    gen_random(foo, 10);
    std::string bar(foo);
    std::cout << "hello "+bar << std::endl; 
}
