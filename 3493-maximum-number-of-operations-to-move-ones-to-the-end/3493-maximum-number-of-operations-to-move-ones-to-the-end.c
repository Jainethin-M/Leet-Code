int maxOperations(char* s) {
     int ans = 0, temp = 0;
        for(int i=0;i<strlen(s)-1;i++){
            if(s[i]=='1')temp++;
            if(s[i]=='1'&&s[i+1]=='0'){
                ans+=temp;
            }
        }
        return ans;
}