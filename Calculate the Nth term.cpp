#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    int array[200];
    array[1] = a;
    array[2] = b;
    array[3] = c;
    int sum = 0;
    array[n] = array[n - 1] + array[n - 2] + array[n - 3];
    sum = array[n];
    return sum;

}

int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}
