#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double W, Pr, S;

    printf("Введите начальный вклад (W): ");
    scanf("%lf", &W);

    printf("Введите годовой процентный прирост (Pr): ");
    scanf("%lf", &Pr);

    printf("Введите желаемую сумму (S): ");
    scanf("%lf", &S);

    if (W < S) {
        int years = 0;

        while (W < S) {
            W += (W * Pr / 100);
            years++;
        }

        printf("Для накопления суммы %.2lf при годовой процентной ставке %.2lf%% понадобится %d лет.\n", S, Pr, years);
    } else {
        printf("Начальный вклад уже больше или равен желаемой сумме. Нет необходимости в дополнительных вложениях.\n");
    }

    return 0;
}
