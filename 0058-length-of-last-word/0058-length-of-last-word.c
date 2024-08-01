int lengthOfLastWord(char* s) {
  int l=1;
  for(int i=1;s[i];i++)
  {
    if(s[i]==' ') continue;
    if(s[i-1]==' ') l=0;
    l++;
  }
  return l;  
}