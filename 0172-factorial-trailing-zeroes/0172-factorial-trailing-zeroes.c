int trailingZeroes(int n) {
    int ze=0;
    
    
    while(n>0){
        ze+=n/=5;
        // n/=5;
    }
    return ze;
}