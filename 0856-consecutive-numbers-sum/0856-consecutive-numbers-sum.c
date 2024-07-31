int consecutiveNumbersSum(int n) {
    int count=0;
    
    for(int i=1;n>0;i++){
       if(!(n%i))count++;
       n-=i;
    }

    return count;
}
    
    
