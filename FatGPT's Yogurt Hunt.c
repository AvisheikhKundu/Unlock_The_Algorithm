#include <stdio.h>

int main() {
    // Read input values
    int N;
    scanf("%d", &N);
    int yogurt_amounts[N];
    int i;

    for (i = 0; i < N; i++) {
        scanf("%d", &yogurt_amounts[i]);
    }

    // Find the house with the maximum yogurt quantity and farthest distance
    int max_yogurt = yogurt_amounts[0];
    int max_yogurt_house = 0;

    for (i = 1; i < N; i++) {
        if (yogurt_amounts[i] > max_yogurt || (yogurt_amounts[i] == max_yogurt && i > max_yogurt_house)) {
            max_yogurt = yogurt_amounts[i];
            max_yogurt_house = i;
        }
    }

    // Output the result
    printf("%d\n", max_yogurt_house + 1);

    return 0;
}
