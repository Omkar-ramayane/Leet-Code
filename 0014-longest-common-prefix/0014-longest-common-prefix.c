char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        char *ans = (char *)malloc(1);
        ans[0] = '\0';
        return ans;
    }

    char *ans = (char *)malloc(201);
    int k = 0;

    for (int i = 0; strs[0][i] != '\0'; i++) {
        char ch = strs[0][i];

        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] == '\0' || strs[j][i] != ch) {
                ans[k] = '\0';
                return ans;
            }
        }

        ans[k++] = ch;
    }

    ans[k] = '\0';
    return ans;
}