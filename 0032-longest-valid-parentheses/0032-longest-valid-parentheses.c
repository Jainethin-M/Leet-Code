    
int longestValidParentheses(char * s){
    int len = strlen(s);
    int* map = (int*)malloc(sizeof(int) * (len * 2 + 1));
    
    for (int i = 0; i < (len * 2 + 1); i++) {
        map[i] = (i == len ? 0 : -1);
    }

    int d = 0;
    int best = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == '(') {
            d += 1;
        } else if (s[i] == ')') {
            map[len + d] = -1; // (1)
            d -= 1;
        }

        if (map[len + d] != -1) {
            int c = (i + 1) - map[len + d];
            best = c > best ? c : best;
        } else {
            map[len + d] = i + 1;
        }
    }

    return best;
}