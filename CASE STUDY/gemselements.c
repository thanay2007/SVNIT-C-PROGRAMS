#include <stdio.h>
#include <string.h>

int cnt(char c, int n, int l, char arr[][100]);

int main() {
    int n;
    float cmn = 0.0;
    scanf("%d", &n);
    char stone[n][100];
    for (int i = 0; i < n; i++) {
        scanf("%s", stone[i]);
    }

    int s1len = strlen(stone[0]);

    for (int i = 0; i < s1len; i++) {
        char ele = stone[0][i];
        int elecnt = cnt(ele, 0, s1len, stone);
        int wcnt = 1;
        for (int j = 1; j < n; j++) {
            int slen = strlen(stone[j]);
            int tcnt = cnt(ele, j, slen, stone);
            if (tcnt == 0) {
                wcnt = 0;
                break;
            }
        }
        cmn = cmn + ((float)wcnt / elecnt);
    }

    printf("%0.f", cmn);
    return 0;
}

int cnt(char c, int n, int l, char arr[][100]) {
    int count = 0;
    for (int i = 0; i < l; i++) {
        if (arr[n][i] == c) {
            count++;
        }
    }
    return count;
}
