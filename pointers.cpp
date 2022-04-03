#include <stdio.h>
#include <cmath>

void update(int *a,int *b) {
    int sum ;
    sum = *a+*b;
    int sub = abs(*a-*b);
    *b = sub;
    *a = sum;
    
        
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}