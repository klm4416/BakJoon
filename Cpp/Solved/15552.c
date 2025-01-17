#include <stdio.h>

int main() {
    int numCase;
    scanf("%d", &numCase);
    int a,b;

    for (int i=0; i < numCase; i++) {
        scanf("%d", &a);
        scanf("%d", &b);
        int plus = a+b;
        printf(plus);
    };
}