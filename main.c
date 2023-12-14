#include <stdio.h>

double newtonsMethodSquareRoot(double num) {
    double root, X = 1, answer;
    const double epsilon = 1e-6;
//    printf("%lf", epsilon);
    root = 0.5 * (X + (num / X));
    answer = root * root - num;
//    printf("%lf\n", root);
    while (answer > epsilon && epsilon > -answer) {
        X += 1;
        root = 0.5 * (X + (num / X));
        answer = root * root - num;
//        printf("%lf\n", root*root - num);
    }
    return root;
}

int main(void) {
    int n, m;
//    printf("Enter n, m :");
    scanf("%d %d", &n, &m);

    float points[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%f", &points[i][j]);
        }
    }

    double sum, min = 10000.0, minus;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
                sum = 0.0;
                for (int k = 0; k < m; ++k) {
                    minus = points[i][k] - points[j][k];
                    sum += minus*minus;
                }
                if (sum < min) min = sum;
        }
    }

    printf("%.2lf", newtonsMethodSquareRoot(min));
}