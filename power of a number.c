#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    // Update your code below this line
    int result =1;
    for(int i =0;i<M;i++){
        result *= N;
    }
    printf("%d\n",result);


    
    
}
