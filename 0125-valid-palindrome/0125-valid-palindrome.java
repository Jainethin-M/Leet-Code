class Solution {
    public boolean isPalindrome(String s) {
        int l=0,r=s.length()-1;
        while(l<r){
            char st=s.charAt(l);
            char ed=s.charAt(r);
            if(!Character.isLetterOrDigit(st))l++;
            else if(!Character.isLetterOrDigit(ed))r--;
            else if(Character.toLowerCase(st)!=Character.toLowerCase(ed)){
                return false;
            }
            else{
                l++;r--;
            }
        }
        return true;
    }
}