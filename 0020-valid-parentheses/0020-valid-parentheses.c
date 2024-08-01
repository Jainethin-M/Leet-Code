bool isValid(char *s) {
    char stack[100000]; 
    int top = -1; 

    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        char p = s[i];
        if (p == '(' || p == '{' || p == '[') {
            stack[++top] = p;
        } else {
            if (top == -1) return false; // If stack is empty
            char t = stack[top--];
            if (p == ')' && t != '(') return false;
            if (p == '}' && t != '{') return false;
            if (p == ']' && t != '[') return false;
        }
    }

    return top == -1; // If stack is empty, return true
}