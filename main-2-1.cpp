#include <iostream>
extern int min_element(int array[], int n);

int main(int argc, const char * argv[]) {

    int array[5] = {0,1,2,3,4};
    
    std::cout << min_element(array, 5);
    
    return 0;
}
