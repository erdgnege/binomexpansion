#include <stdio.h>
int faktoriyel(int n) {
    int a = 1;
    for (int i = 2; i <= n; i++) {
        a *= i;
    }
    return a;
}
int binomkatsayisi(int n, int k) {
    return faktoriyel(n) / (faktoriyel(k) * faktoriyel(n - k));
}
void binomacilimi(int a, int b, int n) {
    printf("( %d + %d )^%d = ", a, b, n);
    for (int k = 0; k <= n; k++) {
        int katsayi = binomkatsayisi(n, k);
        printf("%d * %d^%d * %d^%d", katsayi, a, n - k, b, k);
        if (k != n) {
            printf(" + ");
        }
    }
    printf("\n");
}
int main() {
    int a, b, n;
    printf("(a + b)^n açılımı icin a, b ve n degerlerini girin: ");
    scanf("%d %d %d", &a, &b, &n);
    
    binomacilimi(a, b, n);
    
    return 0;
}
