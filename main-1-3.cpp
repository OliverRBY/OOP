#include <iostream>
extern int num_count(int array[], int n, int number);

int main(int argc, const char * argv[]) {
    
    int a[5]={0,1,2,3,4};
    int number=1;
    std::cout << num_count(a, 5, number);
    
    return 0;
}