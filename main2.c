#include <stdio.h>

inline int swap(int &a, int &b) {
int temp = a;
a = b;
b = temp;
return 0;
}

int sortArrey(int m, int A[]) {
    int sw;
    do {
        sw = 0;
        m--;
        for (int i = 0; i < m - 1; ++i) {
            if (A[i] > A[i + 1]) swap(A[i], A[i + 1]);
            sw = 1;
        } while (sw != 0);
    }
}

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);

    int A[m];
    for (int i = 0; i < m; ++i) {
        scanf("%d", &A[i]);
    }

    return 0;
}