#include <stdio.h>
int main() {
    int num1, num2, num3;
    int second_largest, largest_divisor;
    scanf("%d %d %d", &num1, &num2, &num3);
    if ((num1 >= num2 && num1 <= num3) || (num1 >= num3 && num1 <= num2)) {
        second_largest = num1;
    } else if ((num2 >= num1 && num2 <= num3) || (num2 >= num3 && num2 <= num1)) {
        second_largest = num2;
    } else {
        second_largest = num3;
    }
    largest_divisor = 1;
    for (int i = 1; i <= num1 && i <= num2 && i <= num3; ++i) {
        if (num1 % i == 0 && num2 % i == 0 && num3 % i == 0) {
            largest_divisor = i;
        }
    }
  printf("The treasure is in the box which has the number %d\n", second_largest);
    printf("The code to open the box is %d\n", largest_divisor);

    return 0;
}
