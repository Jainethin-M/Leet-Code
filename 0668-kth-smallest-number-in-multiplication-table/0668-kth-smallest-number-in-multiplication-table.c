int l,r,x,c,i,t;
findKthNumber(int m,int n,int k){
    if(m<n)x=m,m=n,n=x;
for(l=1,r=k;l<=r;c<k?(l=x+1):(r=x-1))
for(x=(l+r)/2,c=0,i=1;i<=n&&c<k;i++)
t=x/i,c+=t<m?t:m;
return l;
}