#include <stdio.h>
#include <math.h>

int main() {
    // 01100111-103
    //11001100 204
    //00010010 18
    //11011110
    char a[9], b[9];
    int sum[8];
    int power=7;
    int decA=0, decB=0;
    scanf("%s", &a);
    scanf("%s", &b);
    for (int i=0; i<8; i++) {
        if (a[i] == '1') {
            decA += pow(2, power);
        }
        if (b[i] == '1') {
            decB += pow(2, power);
        }
        power--;
    }
    printf("%d + %d = %d\n", decA, decB, decA+decB);
    int ans=decA+decB, i=7;
    while (ans) {
        sum[i] = ans%2;
        ans /= 2;
        i--;
    }
    for (int i=0; i<8; i++) {
        printf("%d", sum[i]);
    }
}