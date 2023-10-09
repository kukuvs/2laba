#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double a;
    int n;

    printf("Введите вещественное число a: ");
    scanf("%lf", &a);

    printf("Введите натуральное число n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n должно быть натуральным числом.\n");
    } else {
        double result = 1.0;

        for (int i = 0; i <= n; i++) {
            result *= (a - i * n);
        }

        printf("Результат вычисления: %.2lf\n", result);
    }

    return 0;
}
