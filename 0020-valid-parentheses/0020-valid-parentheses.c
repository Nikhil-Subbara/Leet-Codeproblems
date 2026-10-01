bool isValid(char* s) {
    int n = 0; // 1. Initialize n
    for (int i = 0; s[i] != '\0'; i++) {
        n++;
    }
    
    char stack[n];
    int top = -1; // 2. Initialize top properly
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[++top] = s[i];
        } else {
            if (top == -1) return false; // 3. Check empty before pop
            char last = stack[top--];    // 4. Pop after accessing
            
            if ((s[i] == ')' && last != '(') ||
                (s[i] == ']' && last != '[') ||
                (s[i] == '}' && last != '{')) {
                return false;
            }
        }
    }
    return top == -1;
}