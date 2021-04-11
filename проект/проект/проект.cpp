#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
#include <string.h>
#include <conio.h>
using namespace std;
/*готова*/void rpdputb() {
    double sk, vr;
    cout << "Введите скорость: ";
    cin >> sk;
    cout << endl << "Укажите единицу измерения скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int d;
    cin >> d;
    if (d == 1) sk /= 3.6;
    else if (d == 3) sk *= 1000;
    cout << endl << "Введите время: ";
    cin >> vr;
    cout << endl << "Укажите единицу измерения времени: " << endl << endl
        << "1. секунда" << endl
        << "2. минута" << endl
        << "3. час" << endl
        << "4. сутки" << endl << endl;
    int e;
    cin >> e;
    if (e == 2) vr *= 60;
    else if (e == 3) vr *= 3600;
    else if (e == 4) vr *= 86400;
    cout << endl << endl << "Путь равен " << sk * vr << "м" << endl;
    system("pause");
}
/*готова*/void prpdputbbezt() {
    system("cls");
    cout << "Введите конечную скорость: ";
    double v;
    cin >> v;
    cout << endl << "Укажите единицу измерения конечной скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int d;
    cin >> d;
    if (d == 1) v /= 3.6;
    else if (d == 3) v *= 1000;
    cout << endl << "Введите начальную скорость: ";
    double vo;
    cin >> vo;
    cout << endl << "Укажите единицу измерения начальной скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int e;
    cin >> e;
    if (e == 1) vo /= 3.6;
    else if (e == 3) vo *= 1000;
    cout << endl << "Введите ускорение: ";
    double a;
    cin >> a;
    double x = (pow(v, 2.0) - pow(vo, 2.0)), y = 2.0*a;
    cout << endl << endl << "Путь равен " << x / y << "м" << endl;
    system("pause");
}
/*готова*/void prpdputbeza() {
    system("cls");
    cout << "Введите конечную скорость: ";
    double v;
    cin >> v;
    cout << endl << "Укажите единицу измерения конечной скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int d;
    cin >> d;
    if (d == 1) v /= 3.6;
    else if (d == 3) v *= 1000;
    cout << endl << "Введите начальную скорость: ";
    double vo;
    cin >> vo;
    cout << endl << "Укажите единицу измерения начальной скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int e;
    cin >> e;
    if (e == 1) vo /= 3.6;
    else if (e == 3) vo *= 1000;
    cout << endl << "Введите время: ";
    double vr;
    cin >> vr;
    cout << endl << "Укажите единицу измерения времени: " << endl << endl
        << "1. секунда" << endl
        << "2. минута" << endl
        << "3. час" << endl
        << "4. сутки" << endl << endl;
    int f;
    cin >> f;
    if (f == 2) vr *= 60;
    else if (f == 3) vr *= 3600;
    else if (f == 4) vr *= 86400;
    double x = (vr * (vo + v));
    cout << endl << endl << "Путь равен " << x / 2.0 << "м" << endl;
    system("pause");
}
/*готова*/void prpdputb() {
    cout << "Известно ли вам время?" << endl << endl
        << "1. Да, известно" << endl
        << "2. Нет, неизвестно" << endl << endl;
    int d;
    cin >> d;
    if (d == 2) prpdputbbezt();
    else {
        cout << endl << "Известно ли вам, чему равно ускорение?" << endl << endl
            << "1. Да, известно" << endl
            << "2. Нет, неизвестно" << endl << endl;
        int e;
        cin >> e;
        if (e == 2) prpdputbeza();
        else {
            system("cls");
            cout << "Введите конечную скорость: ";
            double v;
            cin >> v;
            cout << endl << "Укажите единицу измерения конечной скорости:" << endl << endl
                << "1. км/ч" << endl
                << "2. м/с" << endl
                << "3. км/с" << endl << endl;
            int d;
            cin >> d;
            if (d == 1) v /= 3.6;
            else if (d == 3) v *= 1000;
            cout << endl << "Введите начальную скорость: ";
            double vo;
            cin >> vo;
            cout << endl << "Укажите единицу измерения начальной скорости:" << endl << endl
                << "1. км/ч" << endl
                << "2. м/с" << endl
                << "3. км/с" << endl << endl;
            int e;
            cin >> e;
            if (e == 1) vo /= 3.6;
            else if (e == 3) vo *= 1000;
            cout << endl << "Введите время: ";
            double vr;
            cin >> vr;
            cout << endl << "Укажите единицу измерения времени: " << endl << endl
                << "1. секунда" << endl
                << "2. минута" << endl
                << "3. час" << endl
                << "4. сутки" << endl << endl;
            int f;
            cin >> f;
            if (f == 2) vr *= 60;
            else if (f == 3) vr *= 3600;
            else if (f == 4) vr *= 86400;
            cout << endl << "Введите ускорение: ";
            double a;
            cin >> a;
            double x = (vo * vr), y = (a * vr * vr) / 2;
            cout << endl << endl << "Путь равен " << x + y << "м" << endl;
            system("pause");
        }
    }
}
/*готова*/void putbdk() {
    system("cls");
    cout << "Изменяется ли скорость?" << endl << endl
        << "1. Да, изменяется" << endl
        << "2. Нет, не изменяется" << endl
        << "3. Я не знаю" << endl << endl;
    int a;
    cin >> a;
    if (a == 1) prpdputb();
    else if (a == 2) rpdputb();
    else {
        cout << endl << "Ну я тогда тоже не знаю)" << endl;
        system("pause");
    }
}
/*готова*/void putb() {
    cout << "Равномерное или равнопеременное движение?" << endl << endl
        << "1. Равномерное" << endl
        << "2. Равнопеременное (равнозамедленное или равноускоренное)" << endl
        << "3. Я не знаю" << endl << endl;
    int c;
    cin >> c;
    system("cls");
    if (c == 1) rpdputb();
    else if (c == 2) prpdputb();
    else if (c == 3) putbdk();
}
/*готова*/void rpdvelo() {
    double s, vr;
    cout << "Введите пройденное расстояние: ";
    cin >> s;
    cout << endl << "Укажите единицу измерения пути:" << endl << endl
        << "1. мм" << endl
        << "2. см" << endl
        << "3. м" << endl 
        << "4. км" << endl << endl;
    int d;
    cin >> d;
    if (d == 1) s *= 1000;
    else if (d == 2) s *= 100;
    else if (d == 4) s /= 1000;
    cout << endl << "Введите время: ";
    cin >> vr;
    cout << endl << "Укажите единицу измерения времени: " << endl << endl
        << "1. секунда" << endl
        << "2. минута" << endl
        << "3. час" << endl
        << "4. сутки" << endl << endl;
    int e;
    cin >> e;
    if (e == 2) vr *= 60;
    else if (e == 3) vr *= 3600;
    else if (e == 4) vr *= 86400;
    cout << endl << endl << "Скорость равна " << s / vr << "м/с" << endl;
    system("pause");
}
/*готова*/void prpdvelobezt() {
    system("cls");
    cout << "Начальную или конечную скорость вам надо найти?" << endl << endl
        << "1. Начальную" << endl
        << "2. Конечную" << endl << endl;
    int q;
    cin >> q;
    system("cls");
    if (q == 1) {
        cout << "Введите конечную скорость: ";
        double v;
        cin >> v;
        cout << endl << "Укажите единицу измерения конечной скорости:" << endl << endl
            << "1. км/ч" << endl
            << "2. м/с" << endl
            << "3. км/с" << endl << endl;
        int d;
        cin >> d;
        if (d == 1) v /= 3.6;
        else if (d == 3) v *= 1000;
        double s;
        cout << endl << "Введите пройденное расстояние: ";
        cin >> s;
        cout << endl << "Укажите единицу измерения пути:" << endl << endl
            << "1. мм" << endl
            << "2. см" << endl
            << "3. м" << endl
            << "4. км" << endl << endl;
        int t;
        cin >> t;
        if (t == 1) s *= 1000;
        else if (t == 2) s *= 100;
        else if (t == 4) s /= 1000;
        cout << endl << "Введите ускорение: ";
        double a;
        cin >> a;
        double x = s * a;
        long double y = pow(v, 2);
        double z = (2 * x);
        cout << endl << endl << "Скорость равна " << sqrt(z) - y << "м/c" << endl;
        system("pause");
    }
    else if (q == 2) {
        cout << "Введите начальную скорость: ";
        double v;
        cin >> v;
        cout << endl << "Укажите единицу измерения конечной скорости:" << endl << endl
            << "1. км/ч" << endl
            << "2. м/с" << endl
            << "3. км/с" << endl << endl;
        int d;
        cin >> d;
        if (d == 1) v /= 3.6;
        else if (d == 3) v *= 1000;
        double s;
        cout << endl << "Введите пройденное расстояние: ";
        cin >> s;
        cout << endl << "Укажите единицу измерения пути:" << endl << endl
            << "1. мм" << endl
            << "2. см" << endl
            << "3. м" << endl
            << "4. км" << endl << endl;
        int t;
        cin >> t;
        if (t == 1) s *= 1000;
        else if (t == 2) s *= 100;
        else if (t == 4) s /= 1000;
        cout << endl << "Введите ускорение: ";
        double a;
        cin >> a;
        double x = 2 * a * s, y = v * v, z = x + y;
        cout << endl << "Скорость равна " << sqrt(z) << "м/с" << endl;
        system("pause");
    }
}
/*готова*/void prpdvelo() {
    system("cls");
    cout << "Известно ли вам время?" << endl << endl
        << "1. Да, известно" << endl
        << "2. Нет, неизвестно" << endl << endl;
    int d;
    cin >> d;
    if (d == 2) prpdvelobezt();
    else {
        system("cls");
        cout << "Начальную или конечную скорость вам надо найти?" << endl << endl
            << "1. Начальную" << endl
            << "2. Конечную" << endl << endl;
        int q;
        cin >> q;
        if (q == 1) {
            cout << endl << "Введите конечную скорость: ";
            double v;
            cin >> v;
            cout << endl << "Укажите единицу измерения конечной скорости:" << endl << endl
                << "1. км/ч" << endl
                << "2. м/с" << endl
                << "3. км/с" << endl << endl;
            int d;
            cin >> d;
            if (d == 1) v /= 3.6;
            else if (d == 3) v *= 1000;
            cout << endl << "Введите время: ";
            double vr;
            cin >> vr;
            cout << endl << "Укажите единицу измерения времени: " << endl << endl
                << "1. секунда" << endl
                << "2. минута" << endl
                << "3. час" << endl
                << "4. сутки" << endl << endl;
            int f;
            cin >> f;
            if (f == 2) vr *= 60;
            else if (f == 3) vr *= 3600;
            else if (f == 4) vr *= 86400;
            cout << endl << "Введите ускорение: ";
            double a;
            cin >> a;
            double x = v - (a * vr);
            cout << endl << endl << "Скорость равна " << x << "м/с" << endl;
            system("pause");
        }
        else if (q == 2) {
            cout << endl << "Введите начальную скорость: ";
            double v;
            cin >> v;
            cout << endl << "Укажите единицу измерения начальной скорости:" << endl << endl
                << "1. км/ч" << endl
                << "2. м/с" << endl
                << "3. км/с" << endl << endl;
            int d;
            cin >> d;
            if (d == 1) v /= 3.6;
            else if (d == 3) v *= 1000;
            cout << endl << "Введите время: ";
            double vr;
            cin >> vr;
            cout << endl << "Укажите единицу измерения времени: " << endl << endl
                << "1. секунда" << endl
                << "2. минута" << endl
                << "3. час" << endl
                << "4. сутки" << endl << endl;
            int f;
            cin >> f;
            if (f == 2) vr *= 60;
            else if (f == 3) vr *= 3600;
            else if (f == 4) vr *= 86400;
            cout << endl << "Введите ускорение: ";
            double a;
            cin >> a;
            double x = v + (a * vr);
            cout << endl << endl << "Скорость равна " << x << "м/с" << endl;
            system("pause");
        }
    }
}
/*готова*/void velodk() {
    system("cls");
    cout << "Изменяется ли скорость?" << endl << endl
        << "1. Да, изменяется" << endl
        << "2. Нет, не изменяется" << endl
        << "3. Я не знаю" << endl << endl;
    int a;
    cin >> a;
    if (a == 1) prpdvelo();
    else if (a == 2) rpdvelo();
    else {
        cout << endl << "Ну я тогда тоже не знаю)" << endl;
        system("pause");
    }
}
/*готова*/void velo() {
    cout << "Равномерное или равнопеременное движение?" << endl << endl
        << "1. Равномерное" << endl
        << "2. Равнопеременное (равнозамедленное или равноускоренное)" << endl
        << "3. Я не знаю" << endl << endl;
    int c;
    cin >> c;
    system("cls");
    if (c == 1) rpdvelo();
    else if (c == 2) prpdvelo();
    else if (c == 3) velodk();
}
/*готова*/void rpdvremya() {
    double s, v;
    cout << "Введите пройденное расстояние: ";
    cin >> s;
    cout << endl << "Укажите единицу измерения пути:" << endl << endl
        << "1. мм" << endl
        << "2. см" << endl
        << "3. м" << endl
        << "4. км" << endl << endl;
    int d;
    cin >> d;
    if (d == 1) s *= 1000;
    else if (d == 2) s *= 100;
    else if (d == 4) s /= 1000;
    cout << endl << "Введите скорость: ";
    cin >> v;
    cout << endl << "Укажите единицу измерения скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int w;
    cin >> w;
    if (w == 1) v /= 3.6;
    else if (w == 3) v *= 1000;
    cout << endl << endl << "Время равно " << s / v << "с" << endl;
    system("pause");
}
/*готова*/void prpdvremyabeza() {
    system("cls");
    cout << "Введите начальную скорость: ";
    double vo;
    cin >> vo;
    cout << endl << "Укажите единицу измерения начальной скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int c;
    cin >> c;
    if (c == 1) vo /= 3.6;
    else if (c == 3) vo *= 1000;
    cout << endl << "Введите конечную скорость: ";
    double v;
    cin >> v;
    cout << endl << "Укажите единицу измерения конечной скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int d;
    cin >> d;
    if (d == 1) v /= 3.6;
    else if (d == 3) v *= 1000;
    double s;
    cout << endl << "Введите пройденное расстояние: ";
    cin >> s;
    cout << endl << "Укажите единицу измерения пути:" << endl << endl
        << "1. мм" << endl
        << "2. см" << endl
        << "3. м" << endl
        << "4. км" << endl << endl;
    int e;
    cin >> e;
    if (e == 1) s *= 1000;
    else if (e == 2) s *= 100;
    else if (e == 4) s /= 1000;
    cout << endl << endl << "Время равно " << (2 * s) / (vo + v) << "с" << endl;
    system("pause");
}
/*готова*/void prpdvremya() {
    cout << "Известно ли вам, чему равно ускорение?" << endl << endl
        << "1. Да, известно" << endl
        << "2. Нет, неизвестно" << endl << endl;
    int e;
    cin >> e;
    if (e == 2) prpdvremyabeza();
    else {
        system("cls");
        cout << "Введите начальную скорость: ";
        double vo;
        cin >> vo;
        cout << endl << "Укажите единицу измерения начальной скорости:" << endl << endl
            << "1. км/ч" << endl
            << "2. м/с" << endl
            << "3. км/с" << endl << endl;
        int c;
        cin >> c;
        if (c == 1) vo /= 3.6;
        else if (c == 3) vo *= 1000;
        cout << endl << "Введите конечную скорость: ";
        double v;
        cin >> v;
        cout << endl << "Укажите единицу измерения конечной скорости:" << endl << endl
            << "1. км/ч" << endl
            << "2. м/с" << endl
            << "3. км/с" << endl << endl;
        int d;
        cin >> d;
        if (d == 1) v /= 3.6;
        else if (d == 3) v *= 1000;
        cout << endl << "Введите ускорение: ";
        double a;
        cin >> a;
        cout << endl << endl << "Время равно " << (v - vo) / a << "с" << endl;
        system("pause");
    }
}
/*готова*/void vremyadk() {
    system("cls");
    cout << "Изменяется ли скорость?" << endl << endl
        << "1. Да, изменяется" << endl
        << "2. Нет, не изменяется" << endl
        << "3. Я не знаю" << endl << endl;
    int a;
    cin >> a;
    if (a == 1) prpdvremya();
    else if (a == 2) rpdvremya();
    else {
        cout << endl << "Ну я тогда тоже не знаю)" << endl;
        system("pause");
    }
}
/*готова*/void vremya() {
    cout << "Равномерное или равнопеременное движение?" << endl << endl
        << "1. Равномерное" << endl
        << "2. Равнопеременное (равнозамедленное или равноускоренное)" << endl
        << "3. Я не знаю" << endl << endl;
    int c;
    cin >> c;
    system("cls");
    if (c == 1) rpdvremya();
    else if (c == 2) prpdvremya();
    else if (c == 3) vremyadk();
}
/*готова*/void uskbezt() {
    system("cls");
    cout << "Введите конечную скорость: ";
    double v;
    cin >> v;
    cout << endl << "Укажите единицу измерения конечной скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int d;
    cin >> d;
    if (d == 1) v /= 3.6;
    else if (d == 3) v *= 1000;
    cout << endl << "Введите начальную скорость: ";
    double vo;
    cin >> vo;
    cout << endl << "Укажите единицу измерения начальной скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int u;
    cin >> u;
    if (u == 1) vo /= 3.6;
    else if (u == 3) vo *= 1000;
    double s;
    cout << endl << "Введите пройденное расстояние: ";
    cin >> s;
    cout << endl << "Укажите единицу измерения пути:" << endl << endl
        << "1. мм" << endl
        << "2. см" << endl
        << "3. м" << endl
        << "4. км" << endl << endl;
    int t;
    cin >> t;
    if (t == 1) s *= 1000;
    else if (t == 2) s *= 100;
    else if (t == 4) s /= 1000;
    cout << endl << endl << "Ускорение равно " << ((v * v) - (vo * vo)) / (2 * s) << "м/с2" << endl;
    system("pause");
}
/*готова*/void uskbezs() {
    system("cls");
    cout << "Введите конечную скорость: ";
    double v;
    cin >> v;
    cout << endl << "Укажите единицу измерения конечной скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int d;
    cin >> d;
    if (d == 1) v /= 3.6;
    else if (d == 3) v *= 1000;
    cout << endl << "Введите начальную скорость: ";
    double vo;
    cin >> vo;
    cout << endl << "Укажите единицу измерения начальной скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int u;
    cin >> u;
    if (u == 1) vo /= 3.6;
    else if (u == 3) vo *= 1000;
    cout << endl << "Введите время: ";
    double vr;
    cin >> vr;
    cout << endl << "Укажите единицу измерения времени: " << endl << endl
        << "1. секунда" << endl
        << "2. минута" << endl
        << "3. час" << endl
        << "4. сутки" << endl << endl;
    int f;
    cin >> f;
    if (f == 2) vr *= 60;
    else if (f == 3) vr *= 3600;
    else if (f == 4) vr *= 86400;
    cout << endl << endl << "Ускорение равно " << (v - vo) / vr << "м/с2" << endl;
    system("pause");
}
/*готова*/void usk() {
    cout << "Известно ли вам время?" << endl << endl
        << "1. Да, известно" << endl
        << "2. Нет, неизвестно" << endl << endl;
    int o;
    cin >> o;
    if (o == 2) uskbezt();
    else {
        cout << endl << "Известно ли вам пройденное расстояние?" << endl << endl
            << "1. Да, известно" << endl
            << "2. Нет, неизвестно" << endl << endl;
        int a;
        cin >> a;
        if (a == 2) uskbezs();
        else {
            cout << endl << "Введите начальную скорость: ";
            double vo;
            cin >> vo;
            cout << endl << "Укажите единицу измерения начальной скорости:" << endl << endl
                << "1. км/ч" << endl
                << "2. м/с" << endl
                << "3. км/с" << endl << endl;
            int u;
            cin >> u;
            if (u == 1) vo /= 3.6;
            else if (u == 3) vo *= 1000;
            cout << endl << "Введите время: ";
            double vr;
            cin >> vr;
            cout << endl << "Укажите единицу измерения времени: " << endl << endl
                << "1. секунда" << endl
                << "2. минута" << endl
                << "3. час" << endl
                << "4. сутки" << endl << endl;
            int f;
            cin >> f;
            if (f == 2) vr *= 60;
            else if (f == 3) vr *= 3600;
            else if (f == 4) vr *= 86400;
            double s;
            cout << endl << "Введите пройденное расстояние: ";
            cin >> s;
            cout << endl << "Укажите единицу измерения пути:" << endl << endl
                << "1. мм" << endl
                << "2. см" << endl
                << "3. м" << endl
                << "4. км" << endl << endl;
            int d;
            cin >> d;
            if (d == 1) s *= 1000;
            else if (d == 2) s *= 100;
            else if (d == 4) s /= 1000;
            double x = (2 * (s - (vo * vr))) / pow(vr, 2);
            cout << endl << endl << "Ускорение равно " << x << "м/с2" << endl;
            system("pause");
        }
    }
}
/*готова*/void rpdkoord() {
    double sk, vr, xo;
    cout << "Введите начальную координату тела: ";
    cin >> xo;
    cout << endl << "Введите скорость: ";
    cin >> sk;
    cout << endl << "Укажите единицу измерения скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int d;
    cin >> d;
    if (d == 1) sk /= 3.6;
    else if (d == 3) sk *= 1000;
    cout << endl << "Введите время: ";
    cin >> vr;
    cout << endl << "Укажите единицу измерения времени: " << endl << endl
        << "1. секунда" << endl
        << "2. минута" << endl
        << "3. час" << endl
        << "4. сутки" << endl << endl;
    int e;
    cin >> e;
    if (e == 2) vr *= 60;
    else if (e == 3) vr *= 3600;
    else if (e == 4) vr *= 86400;
    cout << endl << endl << "Координата тела: " << (sk * vr) + xo << endl;
    system("pause");
}
/*готова*/void prpdkoordbezt() {
    system("cls");
    double xo;
    cout << "Введите начальную координату: ";
    cin >> xo;
    cout << endl << endl << "Введите конечную скорость: ";
    double v;
    cin >> v;
    cout << endl << "Укажите единицу измерения конечной скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int d;
    cin >> d;
    if (d == 1) v /= 3.6;
    else if (d == 3) v *= 1000;
    cout << endl << "Введите начальную скорость: ";
    double vo;
    cin >> vo;
    cout << endl << "Укажите единицу измерения начальной скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int e;
    cin >> e;
    if (e == 1) vo /= 3.6;
    else if (e == 3) vo *= 1000;
    cout << endl << "Введите ускорение: ";
    double a;
    cin >> a;
    double x = (pow(v, 2.0) - pow(vo, 2.0)), y = 2.0 * a;
    cout << endl << endl << "Координата тела: " << (x / y) + xo << endl;
    system("pause");
}
/*готова*/void prpdkoordbeza() {
    system("cls");
    double xo;
    cout << "Введите начальную координату: ";
    cin >> xo;
    cout << endl << endl << "Введите конечную скорость: ";
    double v;
    cin >> v;
    cout << endl << "Укажите единицу измерения конечной скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int d;
    cin >> d;
    if (d == 1) v /= 3.6;
    else if (d == 3) v *= 1000;
    cout << endl << "Введите начальную скорость: ";
    double vo;
    cin >> vo;
    cout << endl << "Укажите единицу измерения начальной скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int e;
    cin >> e;
    if (e == 1) vo /= 3.6;
    else if (e == 3) vo *= 1000;
    cout << endl << "Введите время: ";
    double vr;
    cin >> vr;
    cout << endl << "Укажите единицу измерения времени: " << endl << endl
        << "1. секунда" << endl
        << "2. минута" << endl
        << "3. час" << endl
        << "4. сутки" << endl << endl;
    int f;
    cin >> f;
    if (f == 2) vr *= 60;
    else if (f == 3) vr *= 3600;
    else if (f == 4) vr *= 86400;
    double x = (vr * (vo + v));
    cout << endl << endl << "Начальная координата: " << xo +(x / 2.0) << endl;
    system("pause");
}
/*готова*/void prpdkoord() {
    cout << "Известно ли вам время?" << endl << endl
        << "1. Да, известно" << endl
        << "2. Нет, неизвестно" << endl << endl;
    int d;
    cin >> d;
    if (d == 2) prpdkoordbezt();
    else {
        cout << endl << "Известно ли вам, чему равно ускорение?" << endl << endl
            << "1. Да, известно" << endl
            << "2. Нет, неизвестно" << endl << endl;
        int e;
        cin >> e;
        if (e == 2) prpdkoordbeza();
        else {
            system("cls");
            double xo;
            cout << "Введите начальную координату: ";
            cin >> xo;
            cout << endl << endl << "Введите конечную скорость: ";
            double v;
            cin >> v;
            cout << endl << "Укажите единицу измерения конечной скорости:" << endl << endl
                << "1. км/ч" << endl
                << "2. м/с" << endl
                << "3. км/с" << endl << endl;
            int d;
            cin >> d;
            if (d == 1) v /= 3.6;
            else if (d == 3) v *= 1000;
            cout << endl << "Введите начальную скорость: ";
            double vo;
            cin >> vo;
            cout << endl << "Укажите единицу измерения начальной скорости:" << endl << endl
                << "1. км/ч" << endl
                << "2. м/с" << endl
                << "3. км/с" << endl << endl;
            int e;
            cin >> e;
            if (e == 1) vo /= 3.6;
            else if (e == 3) vo *= 1000;
            cout << endl << "Введите время: ";
            double vr;
            cin >> vr;
            cout << endl << "Укажите единицу измерения времени: " << endl << endl
                << "1. секунда" << endl
                << "2. минута" << endl
                << "3. час" << endl
                << "4. сутки" << endl << endl;
            int f;
            cin >> f;
            if (f == 2) vr *= 60;
            else if (f == 3) vr *= 3600;
            else if (f == 4) vr *= 86400;
            cout << endl << "Введите ускорение: ";
            double a;
            cin >> a;
            double x = (vo * vr), y = (a * vr * vr) / 2;
            cout << endl << endl << "Координата тела: " << x + y + xo << endl;
            system("pause");
        }
    }
}
/*готова*/void koorddk() {
    system("cls");
    cout << "Изменяется ли скорость?" << endl << endl
        << "1. Да, изменяется" << endl
        << "2. Нет, не изменяется" << endl
        << "3. Я не знаю" << endl << endl;
    int a;
    cin >> a;
    if (a == 1) prpdkoord();
    else if (a == 2) rpdkoord();
    else {
        cout << endl << "Ну я тогда тоже не знаю)" << endl;
        system("pause");
    }
}
/*готова*/void koord() {
    cout << "Равномерное или равнопеременное движение?" << endl << endl
        << "1. Равномерное" << endl
        << "2. Равнопеременное (равнозамедленное или равноускоренное)" << endl
        << "3. Я не знаю" << endl << endl;
    int c;
    cin >> c;
    system("cls");
    if (c == 1) rpdkoord();
    else if (c == 2) prpdkoord();
    else if (c == 3) koorddk();
}
/*готова*/void vsrs1s2() {
    system("cls");
    cout << "Введите первую скорость: ";
    double vo;
    cin >> vo;
    cout << endl << "Укажите единицу измерения первой скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int u;
    cin >> u;
    if (u == 1) vo /= 3.6;
    else if (u == 3) vo *= 1000;
    cout << endl << "Введите вторую скорость: ";
    double v;
    cin >> v;
    cout << endl << "Укажите единицу измерения второй скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int d;
    cin >> d;
    if (d == 1) v /= 3.6;
    else if (d == 3) v *= 1000;
    cout << endl << endl << "Средняя скорость равна " << (2 * vo * v) / (vo + v) << "м/с" << endl;
    system("pause");
}
/*готова*/void vsrt1t2() {
    system("cls");
    cout << "Введите первую скорость: ";
    double vo;
    cin >> vo;
    cout << endl << "Укажите единицу измерения первой скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int u;
    cin >> u;
    if (u == 1) vo /= 3.6;
    else if (u == 3) vo *= 1000;
    cout << endl << "Введите вторую скорость: ";
    double v;
    cin >> v;
    cout << endl << "Укажите единицу измерения второй скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int d;
    cin >> d;
    if (d == 1) v /= 3.6;
    else if (d == 3) v *= 1000;
    cout << endl << endl << "Средняя скорость равна " << (vo + v) / 2.0 << "м/с" << endl;
    system("pause");
}
/*готова*/void vsr() {
    cout << "S1 = S2 = Sобщ/2?" << endl
        << "(Равен ли первый пройденный путь второму пройденному пути и половине всего пути?)" << endl << endl
        << "1. Да, равен" << endl
        << "2. Нет, не равен" << endl << endl;
    int a;
    cin >> a;
    if (a == 1) vsrs1s2();
    else {
        cout << endl << "t1 = t2 = tвсё/2?" << endl
            << "(Равно ли первое время второму времени и половине всего времени пути?)" << endl << endl
            << "1. Да, равно" << endl
            << "2. Нет, не равно" << endl << endl;
        int b;
        cin >> b;
        if (b == 1) vsrt1t2();
        else {
            system("cls");
            cout << "Введите весь пройденный путь: ";
            double s;
            cin >> s;
            cout << endl << "Укажите единицу измерения пути:" << endl << endl
                << "1. мм" << endl
                << "2. см" << endl
                << "3. м" << endl
                << "4. км" << endl << endl;
            int t;
            cin >> t;
            if (t == 1) s *= 1000;
            else if (t == 2) s *= 100;
            else if (t == 4) s /= 1000;
            cout << endl << "Введите всё время пути: ";
            double vr;
            cin >> vr;
            cout << endl << "Укажите единицу измерения времени: " << endl << endl
                << "1. секунда" << endl
                << "2. минута" << endl
                << "3. час" << endl
                << "4. сутки" << endl << endl;
            int e;
            cin >> e;
            if (e == 2) vr *= 60;
            else if (e == 3) vr *= 3600;
            else if (e == 4) vr *= 86400;
            cout << endl << "Средняя скорость равна " << s / vr << "м/с" << endl;
            system("pause");
        }
    }
}
/*готова*/void linvwr() {
    system("cls");
    cout << "Введите угловую скорость: ";
    double w;
    cin >> w;
    cout << endl << "Укажите единицу измерения угловой скорости:" << endl << endl
        << "1. рад/с" << endl
        << "2. градус/с" << endl
        << "3. об/с" << endl
        << "4. об/мин" << endl << endl;
    int a;
    cin >> a;
    if (a == 2) w *= (acos(-1.0) / 180);
    else if (a == 3) w *= (acos(-1.0) * 2);
    else if (a == 4) w *= (acos(-1.0) / 30);
    cout << endl << endl << "Введите радиус: ";
    double r;
    cin >> r;
    cout << endl << "Укажите единицу измерения радиуса:" << endl << endl
        << "1. мм" << endl
        << "2. см" << endl
        << "3. м" << endl
        << "4. км" << endl << endl;
    int b;
    cin >> b;
    if (b == 1) r /= 1000;
    else if (b == 2) r /= 100;
    else if (b == 4) r *= 1000;
    cout << endl << endl << "Линейная скорость равна " << w * r << " м/с" << endl;
    system("pause");
}
/*готова*/void linvp() {
    system("cls");
    cout << "Введите радиус: ";
    double r;
    cin >> r;
    cout << endl << "Укажите единицу измерения радиуса:" << endl << endl
        << "1. мм" << endl
        << "2. см" << endl
        << "3. м" << endl
        << "4. км" << endl << endl;
    int b;
    cin >> b;
    if (b == 1) r /= 1000;
    else if (b == 2) r /= 100;
    else if (b == 4) r *= 1000;
    cout << endl << endl << "Введите период: ";
    double t;
    cin >> t;
    cout << endl << "Укажите единицу измерения периода: " << endl << endl
        << "1. с" << endl
        << "2. мин" << endl
        << "3. ч" << endl
        << "4. сут" << endl << endl;
    int a;
    cin >> a;
    if (a == 2) t *= 60;
    else if (a == 3) t *= 3600;
    else if (a == 4) t *= 86400;
    cout << endl << endl << "Линейная скорость равна " << 2 * acos(-1.0) * r / t << " м/с" << endl;
    system("pause");
}
/*готова*/void linvch() {
    system("cls");
    cout << "Введите радиус: ";
    double r;
    cin >> r;
    cout << endl << "Укажите единицу измерения радиуса:" << endl << endl
        << "1. мм" << endl
        << "2. см" << endl
        << "3. м" << endl
        << "4. км" << endl << endl;
    int b;
    cin >> b;
    if (b == 1) r /= 1000;
    else if (b == 2) r /= 100;
    else if (b == 4) r *= 1000;
    cout << endl << endl << "Введите частоту: ";
    double t;
    cin >> t;
    cout << endl << "Укажите единицу измерения частоты: " << endl << endl
        << "1. с ^ -1 (Гц)" << endl
        << "2. мин ^ -1 (об/мин)" << endl
        << "3. кГц" << endl
        << "4. МГц (Мегагерц)" << endl 
        << "5. мГц (Миллигерц)" << endl << endl;
    int a;
    cin >> a;
    if (a == 2) t /= 60;
    else if (a == 3) t *= 1000;
    else if (a == 4) t *= 1000000;
    else if (a == 5) t /= 1000;
    cout << endl << endl << "Линейная скорость равна " << 2 * acos(-1.0) * r * t << " м/с" << endl;
    system("pause");
}
/*готова*/void linv() {
    cout << "Известны ли вам угловая скорость и радиус?" << endl
        << "1. Да, известны" << endl
        << "2. Нет, не известны" << endl << endl;
    int a;
    cin >> a;
    if (a == 1) linvwr();
    else {
        cout << endl << "Вам известен период или известна частота?" << endl
            << "1. Период" << endl
            << "2. Частота" << endl << endl;
        int b;
        cin >> b;
        if (b == 1) linvp();
        else linvch();
    }
}
/*готова*/void uglvvr() {
    system("cls");
    cout << "Введите линейную скорость: ";
    double v;
    cin >> v;
    cout << endl << "Укажите единицу измерения линейной скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int u;
    cin >> u;
    if (u == 1) v /= 3.6;
    else if (u == 3) v *= 1000;
    cout << endl << "Введите радиус: ";
    double r;
    cin >> r;
    cout << endl << "Укажите единицу измерения радиуса:" << endl << endl
        << "1. мм" << endl
        << "2. см" << endl
        << "3. м" << endl
        << "4. км" << endl << endl;
    int b;
    cin >> b;
    if (b == 1) r /= 1000;
    else if (b == 2) r /= 100;
    else if (b == 4) r *= 1000;
    cout << endl << endl << "Угловая скорость равна " << v / r << " м/с" << endl;
    system("pause");
}
/*готова*/void uglvt() {
    system("cls");
    cout << "Введите угол поворота: ";
    double ug;
    cin >> ug;
    cout << endl << "Введите единицу измерения угла" << endl
        << "1. рад" << endl
        << "2. градус" << endl << endl;
    int b;
    cin >> b;
    if (b == 2) ug *= (acos(-1.0) / 180);
    cout << endl << "Введите время: ";
    double t;
    cin >> t;
    cout << endl << "Укажите единицу измерения периода: " << endl << endl
        << "1. с" << endl
        << "2. мин" << endl
        << "3. ч" << endl
        << "4. сут" << endl << endl;
    int a;
    cin >> a;
    if (a == 2) t *= 60;
    else if (a == 3) t *= 3600;
    else if (a == 4) t *= 86400;
    cout << endl << endl << "Угловая скорость равна " << ug / t << " рад/с" << endl;
    system("pause");
}
/*готова*/void uglvT() {
    system("cls");
    cout << endl << "Введите период: ";
    double t;
    cin >> t;
    cout << endl << "Укажите единицу измерения периода: " << endl << endl
        << "1. с" << endl
        << "2. мин" << endl
        << "3. ч" << endl
        << "4. сут" << endl << endl;
    int a;
    cin >> a;
    if (a == 2) t *= 60;
    else if (a == 3) t *= 3600;
    else if (a == 4) t *= 86400;
    cout << endl << endl << "Линейная скорость равна " << 2 * acos(-1.0) / t << " м/с" << endl;
    system("pause");
}
/*готова*/void uglvch() {
    system("cls");
    cout << endl << "Введите частоту: ";
    double t;
    cin >> t;
    cout << endl << "Укажите единицу измерения частоты: " << endl << endl
        << "1. с ^ -1 (Гц)" << endl
        << "2. мин ^ -1 (об/мин)" << endl
        << "3. кГц" << endl
        << "4. МГц (Мегагерц)" << endl
        << "5. мГц (Миллигерц)" << endl << endl;
    int a;
    cin >> a;
    if (a == 2) t /= 60;
    else if (a == 3) t *= 1000;
    else if (a == 4) t *= 1000000;
    else if (a == 5) t /= 1000;
    cout << endl << endl << "Линейная скорость равна " << 2 * acos(-1.0) * t << " м/с" << endl;
    system("pause");
}
/*готова*/void uglv() {
    cout << "Вам известна линейная скорость и радиус окружности?" << endl
        << "1. Да, известны" << endl
        << "2. Нет, не известны" << endl << endl;
    int a;
    cin >> a;
    if (a == 1) uglvvr();
    else {
        cout << endl << "Вам известны время и угол поворота за это время?" << endl
            << "1. Да, известны" << endl
            << "2. Нет, не известны" << endl << endl;
        int b;
        cin >> b;
        if (b == 1) uglvt();
        else {
            cout << endl << "Вам известен период или известна частота?" << endl
                << "1. Период" << endl
                << "2. Частота" << endl << endl;
            int c;
            cin >> c;
            if (c == 1) uglvT();
            else if (c == 2) uglvch();
        }
    }
}
/*готова*/void acv() {
    system("cls");
    cout << "Введите радиус: ";
    double r;
    cin >> r;
    cout << endl << "Укажите единицу измерения радиуса:" << endl << endl
        << "1. мм" << endl
        << "2. см" << endl
        << "3. м" << endl
        << "4. км" << endl << endl;
    int b;
    cin >> b;
    if (b == 1) r /= 1000;
    else if (b == 2) r /= 100;
    else if (b == 4) r *= 1000;
    cout << endl << "Введите линейную скорость: ";
    double v;
    cin >> v;
    cout << endl << "Укажите единицу измерения линейной скорости:" << endl << endl
        << "1. км/ч" << endl
        << "2. м/с" << endl
        << "3. км/с" << endl << endl;
    int u;
    cin >> u;
    if (u == 1) v /= 3.6;
    else if (u == 3) v *= 1000;
    cout << endl << endl << "Центростремительное ускорение равно " << v * v / r << " м / с^2" << endl;
    system("pause");
}
/*готова*/void acw() {
    system("cls");
    cout << "Введите радиус: ";
    double r;
    cin >> r;
    cout << endl << "Укажите единицу измерения радиуса:" << endl << endl
        << "1. мм" << endl
        << "2. см" << endl
        << "3. м" << endl
        << "4. км" << endl << endl;
    int b;
    cin >> b;
    if (b == 1) r /= 1000;
    else if (b == 2) r /= 100;
    else if (b == 4) r *= 1000;
    cout << endl << "Введите угловую скорость: ";
    double w;
    cin >> w;
    cout << endl << "Укажите единицу измерения угловой скорости:" << endl << endl
        << "1. рад/с" << endl
        << "2. градус/с" << endl
        << "3. об/с" << endl
        << "4. об/мин" << endl << endl;
    int a;
    cin >> a;
    if (a == 2) w *= (acos(-1.0) / 180);
    else if (a == 3) w *= (acos(-1.0) * 2);
    else if (a == 4) w *= (acos(-1.0) / 30);
    cout << endl << endl << "Центростремительное ускорение равно " << w * w * r << " м / с^2" << endl;
    system("pause");
}
/*готова*/void act() {
    system("cls");
    cout << "Введите радиус: ";
    double r;
    cin >> r;
    cout << endl << "Укажите единицу измерения радиуса:" << endl << endl
        << "1. мм" << endl
        << "2. см" << endl
        << "3. м" << endl
        << "4. км" << endl << endl;
    int b;
    cin >> b;
    if (b == 1) r /= 1000;
    else if (b == 2) r /= 100;
    else if (b == 4) r *= 1000;
    cout << endl << endl << "Введите период: ";
    double t;
    cin >> t;
    cout << endl << "Укажите единицу измерения периода: " << endl << endl
        << "1. с" << endl
        << "2. мин" << endl
        << "3. ч" << endl
        << "4. сут" << endl << endl;
    int a;
    cin >> a;
    if (a == 2) t *= 60;
    else if (a == 3) t *= 3600;
    else if (a == 4) t *= 86400;
    cout << endl << endl << "Центростремительное цскорение равно " << (4 * acos(-1.0) * acos(-1.0) * r) / (t * t) << " м / с^2" << endl;
    system("pause");
}
/*готова*/void acch() {
    system("cls");
    cout << "Введите радиус: ";
    double r;
    cin >> r;
    cout << endl << "Укажите единицу измерения радиуса:" << endl << endl
        << "1. мм" << endl
        << "2. см" << endl
        << "3. м" << endl
        << "4. км" << endl << endl;
    int b;
    cin >> b;
    if (b == 1) r /= 1000;
    else if (b == 2) r /= 100;
    else if (b == 4) r *= 1000;
    cout << endl << endl << "Введите частоту: ";
    double t;
    cin >> t;
    cout << endl << "Укажите единицу измерения частоты: " << endl << endl
        << "1. с ^ -1 (Гц)" << endl
        << "2. мин ^ -1 (об/мин)" << endl
        << "3. кГц" << endl
        << "4. МГц (Мегагерц)" << endl
        << "5. мГц (Миллигерц)" << endl << endl;
    int a;
    cin >> a;
    if (a == 2) t /= 60;
    else if (a == 3) t *= 1000;
    else if (a == 4) t *= 1000000;
    else if (a == 5) t /= 1000;
    cout << endl << endl << "Центростремительное ускорение равно " << 4 * acos(-1.0) * acos(-1.0) * r * t << " м / с^2" << endl;
    system("pause");
}
/*готова*/void ac() {
    cout << "Вам известна линейная скорость?" << endl
        << "1. Да, известна" << endl
        << "2. Нет, не известна" << endl << endl;
    int a;
    cin >> a;
    if (a == 1) acv();
    else {
        cout << endl << "Вам известна угловая скорость?" << endl
            << "1. Да, известна" << endl
            << "2. Нет, не известна" << endl << endl;
        int b;
        cin >> b;
        if (b == 1) acw();
        else {
            cout << endl << "Вам известен период или известна частота?" << endl
                << "1. Период" << endl
                << "2. Частота" << endl << endl;
            int c;
            cin >> c;
            if (c == 1) act();
            else if (c == 2) acch();
        }
    }
}
/*готова*/void kinem() {
    cout << "Нажмите на клавиатуре число, которое написано рядом с тем, что вам нужно найти, и нажмите Enter: " << endl
        << "1. Путь" << endl
        << "2. Скорость" << endl
        << "3. Время" << endl
        << "4. Ускорение" << endl
        << "5. Координата точки" << endl
        << "6. Средняя путевая скорость" << endl
        << "7. Линейная скорость при движении по окружности" << endl
        << "8. Угловая скорость при движении по окружности " << endl
        << "9. Центростремительное ускорение" << endl << endl;
    int b;
    cin >> b;
    system("cls");
    if (b == 1) putb();
    else if (b == 2) velo();
    else if (b == 3) vremya();
    else if (b == 4) usk();
    else if (b == 5) koord();
    else if (b == 6) vsr();
    else if (b == 7) linv();
    else if (b == 8) uglv();
    else if (b == 9) ac();
}
void dinam() {
    cout << "Нажмите на клавиатуре число, которое написано рядом с тем, что вам нужно найти, и нажмите Enter: " << endl
        << "1. Сила упругости" << endl
        << "2. Коэффициент жёсткости" << endl
        << "3. Удлинение тела" << endl
        << "4. Относительное удлинение тела" << endl
        << "5. Модуль Юнга" << endl
        << "6. Нормальное напряжение" << endl << endl;


}
void jidko() {

}
void tema(int a) {
    switch (a) {
    case(1): kinem();
    case(2): dinam();
    case(3): jidko();
    }
}
int main() {
    setlocale(LC_ALL, "ru_Ru");
    vector <string> v = { "00000  1    11  222   3    33  4 4  555  666  7  7  8    88  9 99 99",
"0 0 0  1   1 1     2  3   3 3  4 4  5    6    7 7   8   8 8  9   9 9",
"00000  1  1  1    2   3  3  3  444  555  6    77    8  8  8  9  9  9",
"  0    1 1   1     2  3 3   3    4  5    6    7 7   8 8   8  9 9   9",
"  0    11    1  222   33    3    4  555  666  7  7  88    8  99    9",
"                                                                    ",
"e=mc2 Fт=mg Fупр=kx p=F/S A=FS N=A/t I=q/t Q=I2Rt P=A/t A=IUt Eп=mgh",
"                                                                    ",
"0  0  1111   2222  3     4  4  5  5   6666  7777  88888  9999  00000",
"0 0   1  1   2  2  3     4 4   5  5   6  6  7  7    8    9  9  0   0",
"00    1111   2  2  3333  44    5555   6  6  7777    8    9  9  00000",
"0 0   1  1   2  2  3  3  4 4      5   6  6    77    8    9  9  0    ",
"0  0  1  1  2   2  3333  4  4  5555  6   6  77 7    8    9999  0    ",
"                                                                    ",
"                                                                    ",
"                                                                    ",
"                                                                    "};
    for (int i = 0; i < 17; ++i) {
        cout << v[i] << endl;
    }
    cout << "Добрый день! Нажмите любую клавишу, чтобы продолжить: ";
    _getch();
    system("cls");
    cout << "Нажмите на клавиатуре то число, которое написано рядом с нужной темой, и нажмите Enter: " << endl << endl
        << "1. Кинематика" << endl
        << "2. Динамика" << endl
        << "3. Механика жидкостей" << endl << endl;
    int a;
    cin >> a;
    system("cls");
    tema(a);
}