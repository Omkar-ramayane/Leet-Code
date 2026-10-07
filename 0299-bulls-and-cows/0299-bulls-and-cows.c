char* getHint(char* secret, char* guess) {
    int bulls = 0, cows = 0;
    int s[10] = {0};
    int g[10] = {0};

    for (int i = 0; secret[i] != '\0'; i++) {
        if (secret[i] == guess[i]) {
            bulls++;
        } else {
            s[secret[i] - '0']++;
            g[guess[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; i++) {
        cows += (s[i] < g[i]) ? s[i] : g[i];
    }

    char *ans = malloc(20);
    sprintf(ans, "%dA%dB", bulls, cows);

    return ans;
}