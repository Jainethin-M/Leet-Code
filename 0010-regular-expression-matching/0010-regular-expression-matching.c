bool Match(char *s,char *p){
    return (s[0]==p[0])||(p[0]=='.'&&s[0]);
}
bool isMatch(char* s, char* p) {
    if(!p[0])return !s[0];
    if(p[1]=='*')return isMatch(s,p+2)||Match(s,p)&&isMatch(s+1,p);
    if(p[0]=='.')return s[0]&&isMatch(s+1,p+1);
    return Match(s,p)&&isMatch(s+1,p+1);

}