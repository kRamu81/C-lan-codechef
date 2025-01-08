#include <stdio.h>

int main() {
    int N, prev = 0, current = 1;
    scanf("%d", &N);
    scanf("%d%d",prev,current);
    
    // Update your code below this line
    for(int i=3;i<=N;i++)
    {
        int next = prev+current;
        printf("%d",next);
        prev = current;
        current = next;
        
    }


    return 0;
}
