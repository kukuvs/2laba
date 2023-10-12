#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <stdbool.h>
#include <string.h>
#define EPS7 1e-7
#define EPS8 1e-4
#define M_E 2.7182818284590452353602874713527



int factor;
int end;

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int choice;

    printf("Enter the program number(1-9): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: first();
        break;
        case 2: second();
        break;
        case 3: third();
        break;
        case 4: fouth();
        break;
        case 5: fifth();
        break;
        case 6: sixth();
        break;
        case 7: seventh();
        break;
        case 8: eighth();
        break;
        case 9: nineth();
        break;
    }

    system("pause");
}

void first()
{
    double k, m, f;

    printf("Please, enter number k and m: ");
    scanf("%lf %lf", &k, &m);

    if(k > 0)
    {
        f = m/k;
        printf("f=%lf\n", f);
    } else if(k<=0 || m<0)
    {
        f = m+k;
        printf("f=%lf\n", f);
    } else {
        f = k*m;
        printf("f=%lf\n", f);
    }
    end = 1;
    choice();
}
void second()
{
    
    double a,b;
    double c,d;
    double D;

    printf("function definition scope: (-oo;0), (0;+oo)\n");
    printf("Enter numbers a and b: ");
    scanf("%lf %lf", &a, &b);
    fflush(stdin);

    if(a == 0 || b == 0)
    {
        printf("The values do not belong to the scope of the function definition!\n");
        end = 2;
        choice();
    } else {
    c = powf(M_E, -1./6)*powf(pow(a, 2)+logf(abs(b)), 1./2)-tanf(a);
    d = 2*powf(cosf(powf(a, 3)), 2);

    D = c/d;

    printf("D = %lf\n", D);

    end = 2;
    choice();
    }
}
void third()
{
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
    choice();
}
void fouth()
{
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
    choice();
}
void fifth()
{
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
    choice();
}
void sixth()
{
    long int num;
    int v;
    bool a = false;
    long int b;
    int c = 0;

    printf("Введите число для проверки: ");
    scanf("%d", &num);
    printf("Введите количество проверочных знаков: ");
    scanf("%d", &v);

    b = num;

    while(b)
    {
        c = b % 10;

        if(v == c)
        {
            a = true;
            break;
        }
        b /= 10;
    }

    if(a)
        printf("Количество проверочных знаков %d находится в числе %d\n", v, num);
    else
        printf("Количество проверочных знаков %d отсутствует в числе %d\n", v, num);

    end = 6;
    choice();
}
double fun (int i, double x){

    return (x/x)/(2*i*(2*i+1));

}

void seventh()
{
    double sum = 0;
    double e = 1e-5; 
    double t,x;

    printf("введи x");
    scanf("%lf",&x);

    int i;
    for (i = 0,sum=t=x;fabs(t)>e;){

        t *=fun(++i,x);
        sum+=t; 

    }
    printf("%16.15lf\n",sum);
    printf("%16.15lf\n", sinh(x));
    printf("%d\n",i);
    choice();
}


void eighth()
{
    double a,c,b,x,s,d,t;
    int n = 1;

    printf("Введите целое число от 0.1 до 1: ");
    scanf("%lf", &x);
    fflush(stdin);

        if(x < 0.1 || x > 1)
        {
            printf("Вы ввели неверное значение.\n");
            end = 8;
            choice();
        }

    a = 1;
    s = 1;
    d = 1;
    b = 1;
    c = 1;

    while(fabs(d) > EPS8)
    {
        c = n-1;
        b = factorial(c)*n;
        //a = ((2*n+1)/f)*powf(x, 2*n);
        t = (2*n-1);
        a = ((2*n+1)/t)*x*x;
        d *= a/b;
        s += d;
        n++;
        printf("a = %lf, b = %lf, d = %lf, s = %lf\n", a, b, d, s);
    }

    printf("s = %.6lf\n(1+2%.1lf^2)e^%.1lf^2 = %.6lf\n", s, x, x, (1+2*x*x)*pow(M_E, powf(x, 2)));

    end = 8;
    choice();
}
void nineth()
{
    int i, c, a, b, d, tic, e, l;

    printf("Enter count of numbers: ");
    scanf("%d", &c);

    int n[c];

    printf("Enter the natural numbers: \n");

    for(i = 0; i<c; i++)
    {
        printf("number %d: ", i+1);
        scanf("%d", &n[i]);
    }

    l = 0;
    d = 0;

    for(i = 0; i<c; i++)
    {
        e = n[i];
        for(tic = 0; e>0; tic++)
        {
            a = e % 10;
            e /= 10;
            if(tic == 0)b = a;
            if(e == 0)d = a;
        }
        if(b == d)l += n[i];
    }

    printf("Result = %d\n", l);

    end = 9;
    choice();
}

int choice()
{
    int choice;
    printf("1 - repeat the program, 2 - go back to the menu, 3 - exit the program\n");
    scanf("%d", &choice);
    if(choice == 1)
    {
       switch(end)
       {
           case 1: first();
           break;
           case 2: second();
           break;
           case 3: third();
           break;
           case 4: fouth();
           break;
           case 5: fifth();
           break;
           case 6: sixth();
           break;
           case 7: seventh();
           break;
           case 8: eighth();
           break;
           case 9: nineth();
       }
       }
    else if(choice == 2)
        main();
    else if(choice == 3)
        system("exit");
}

int factorial(factor)
{
    if(factor == 1 || factor == 0)
        return 1;
    return factor * factorial(factor - 1);
}
