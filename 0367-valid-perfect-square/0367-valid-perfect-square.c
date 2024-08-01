bool isPerfectSquare(int num) {
  int s=1;
  bool f;
  long long int e=num,m=s+(e-s)/2;
  while(s<=e)
  {
    long long int sq=m*m;
    if(sq==num)
    {
        f=1;
        break;

    }
    else if(sq>num)
    e=m-1;
    else 
    {
        s=m+1;
        f=0;
    }
    m=s+(e-s)/2;
  }  
  return f;
}