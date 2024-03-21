#include <stdio.h>
int isSpecial(int num) {
    int sum = 0;
    int product = 1;
    int temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += digit;
        product *= digit;
        temp /= 10;
    }
    return (sum + product == num);
}
int main() {
    int m, n;
    printf("");
    scanf("%d %d", &m, &n);
    printf("", m, n);
    for (int i = m; i <= n; ++i) {
        if (isSpecial(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
