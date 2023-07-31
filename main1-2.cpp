#include <iostream>
extern double array_mean(int array[], int n);

int main(int argc, const char * argv[]) {
    
    int a[5]={0,1,2,3,4};
    std::cout << array_mean(a, 5);
    
    return 0;
}