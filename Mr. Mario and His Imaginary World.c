#include <stdio.h>

int main() {
    int T, P;
    scanf("%d %d", &T, &P);
    
    int coins[6] = {1, 2, 4, 8, 16, 32};
    int change = P - T;
    int flag = 0;
    
    for (int i = 0; i < 6; i++) {
        if (coins[i] == change) {
            flag = 1;
            break;
        }
    }
    
    if (flag) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}
