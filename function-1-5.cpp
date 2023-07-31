int count_evens(int number){
    if(num < 1){
        return 0;
    }
    int sum = 0;
    for (int i = 1; i <= num; i++){
        if (i % 2 == 0){
            sum++;
        }
    }
    return sum;
}