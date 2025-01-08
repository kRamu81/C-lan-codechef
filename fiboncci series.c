#include <stdio.h>

int main() {
    int N, prev = 0, current = 1;
    scanf("%d", &N);

    // Print the first two numbers of the Fibonacci Series
    printf("%d %d ", prev, current);

    // Calculate and print the rest of the Fibonacci Series
    for (int i = 3; i <= N; i++) {
        int next = prev + current;
        printf("%d ", next);
        prev = current;
        current = next;
    }

    return 0;
}
