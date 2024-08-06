class Solution {
    public boolean isPalindrome(String s) {
        String news="";
        for(char c : s.toCharArray()){
            if(Character.isDigit(c)||Character.isLetter(c))
            news+=c;
        }
        news=news.toLowerCase();
        int l=0,r=news.length()-1;
        while(l<r){
            if(news.charAt(l++)!=news.charAt(r--))return false;
        }
        return true;
    }
}