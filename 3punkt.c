#include <stdio.h>
#include <math.h>
#include <windows.h>


int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double x1, y1, x2, y2;
    
    printf("Введите координаты первой точки (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Введите координаты второй точки (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    // Проверка, лежит ли хотя бы одна из точек на оси
    if (x1 == 0 || y1 == 0 || x2 == 0 || y2 == 0) {
        printf("Хотя бы одна из точек лежит на какой-нибудь оси.\n");
    } else {
        // Проверка, находятся ли точки в одной четверти
        if ((x1 > 0 && x2 > 0 && y1 > 0 && y2 > 0) || 
            (x1 < 0 && x2 < 0 && y1 > 0 && y2 > 0) ||
            (x1 > 0 && x2 > 0 && y1 < 0 && y2 < 0) ||
            (x1 < 0 && x2 < 0 && y1 < 0 && y2 < 0)) {
            // Найдем расстояние между точками
            double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
            printf("Точки находятся в одной четверти.\n");
            printf("Расстояние между точками: %.2lf\n", distance);
        } else {
            // Найдем точку, наиболее удаленную от центра координат
            double distance1 = sqrt(pow(x1, 2) + pow(y1, 2));
            double distance2 = sqrt(pow(x2, 2) + pow(y2, 2));
            
            if (distance1 > distance2) {
                printf("Точка (%.2lf, %.2lf) наиболее удалена от центра координат.\n", x1, y1);
            } else {
                printf("Точка (%.2lf, %.2lf) наиболее удалена от центра координат.\n", x2, y2);
            }
        }
    }
    
    return 0;
}
