#include <iostream>
extern int max_element(int array[], int n);

int main(int argc, const char * argv[]) {

    int array[5] = {1, 2, 3, 4, 5};
    
    std::cout << max_element(array, 5);
    
    return 0;
}