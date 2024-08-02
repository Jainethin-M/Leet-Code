int reachNumber(int target) {
    target=abs(target);
        long long l=1,r=target;
        while(l<r){
            long long m=(l+r)/2;
            long long sum=(m*(m+1))/2;
            if(sum >= target){
                r=m;
            }
            else if(sum < target){
                l=m+1;
            }
        }
        long long sum=(l*(l+1))/2;
        if((sum-target) % 2 == 0){
            return l;
        }
        else{
            if(l%2 == 0)return l+1;
            else return l+2; 
        }
 }