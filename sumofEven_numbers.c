

#include <stdio.h>

int main() {
    // Update the code below this line
    int N, sum = 0;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if(i%2==0){
            sum += i;
        }

    }

    printf("%d", sum);

    return 0;
}
