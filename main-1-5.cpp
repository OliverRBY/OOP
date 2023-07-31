#include <iostream>
extern int count_evens(int number);

int main(int argc, const char * argv[]) {

    int num = 10;
    
    std::cout << count_evens(num);
    
    return 0;
}
