bool isNumber(char * s){
    bool n = false,e= false, d = false,r = false; 
    while (*s != '\0'){
        if (*s == '+' || *s == '-'){
            if (n || r || *(s+1) == '\0' || d) return false;
            n = true;
        }
        else if (*s == 'e' || *s == 'E'){
            if (e || *(s+1) == '\0' || !r) return false;
            e = true;
           n = false;
           r = false;
           d = false;
        }
        else if (*s == '.'){
            if (d || e || (!r && *(s+1) == '\0')) return false;
            d = true;
        }
        else if ('A' <= *s && *s <= 'Z' || 'a' <= *s && *s <= 'z'){
            return false;
        } 
        else{
          r = true;
        }
        s++; 
    }
    return true;
 }