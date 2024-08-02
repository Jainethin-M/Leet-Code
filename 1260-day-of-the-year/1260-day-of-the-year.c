int leap(int n){
    if(n%4==0&&n%100!=0 || n%400==0)
        return 1;
    return 0;
}
int construct(int start,int end,char* date){
    int ans=0;
    for(int i=start;i<end;i++)
        ans=ans*10+date[i]-'0';
    return ans;
}
int dayOfYear(char * date){
    int month = construct(5,7,date);
    int year= construct(0,4,date);
    int day = construct(8,10,date);
    int days[]={0,31,59,90,120,151,181,212,243,273,304,334};
    int ans=0;
   
    ans=days[month-1]+day;
    if(month>2) ans+=leap(year);
    return ans;

}