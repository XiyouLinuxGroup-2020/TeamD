#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int i, j;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            int t;
            if (a[j] > a[j+1]) {
                t = a[j+1];
                a[j+1] = a[j];
                a[j] = t;
            }
        }
    }
    if (n == 1) {
        printf("%d\n", a[0]);
    }
    else {
        printf("%d\n", a[n/2+1]);
    }


    return 0;
}

