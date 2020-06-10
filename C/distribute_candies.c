int compare(const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}

int distributeCandies(int* candies, int candiesSize){
    qsort(candies, candiesSize, sizeof(int), compare);
    int setSize = 0;
    int prev = -1;
    for(int i = 0; i < candiesSize; i++){
        if(*(candies+i) == prev) continue;
        setSize ++;
        prev = *(candies+i);
    }
    return fmin(candiesSize/2, setSize);
}
