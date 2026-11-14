# Домашнее задание к работе 13
## Условие задачи
<img width="1190" height="138" alt="image" src="https://github.com/user-attachments/assets/292cc8be-17a9-4d88-a7f1-f06e87e4fd74" />

## Алгоритм и блок-схема
### Алгоритм
1. Начало.
2. Ввести количество элементов `n`.
3. Ввести элементы массива `A[i]`.
4. Задать `first = -1`, `last = -1` (отрицательные элементы пока не найдены).
5. Для `i` от `0` до `n - 1`:
- если  `A[i] < 0` и `first == -1`, запомнить `first = i`;
- если `A[i] < 0`, запомнить `last = i`.
6. Если `first == -1`, вывести «Отрицательных элементов нет» и закончить.
7. Задать `p = 1`.
8. Для `i` от `first + 1` до `last - 1` умножать: `p = p * A[i]`.
9. Вывести `p`.
10. Конец.
### Блок-схема
<img width="469" height="845" alt="image" src="https://github.com/user-attachments/assets/94712854-2ef5-4ff4-9eed-ed5b5a6080aa" />

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=blok-schema-proizvedenie.drawio&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%9F%D1%80%D0%BE%D0%B8%D0%B7%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D0%B5%22%20id%3D%22prod1%22%3E7Vxbj6M2FP41SN1KU2FuIY%2FJTGZbqR2tOiu1%2B8iAJ7HG4AjIJrO%2FvjaYa27EeAyrktVm4XDM5Xznztlo5n14%2BBx7281fJIBYM%2FTgoJkPmmEYNjDoP4zynlOAbeg5ZR2jgNMqwjP6ATmxYNuhACYNxpQQnKJtk%2BiTKIJ%2B2qB5cUz2TbZXgptX3XpreER49j18TP0HBemGU4GuVwd%2Bh2i9KS7tFEdCr%2BDmhGTjBWRfI5krzbyPCUnzrfBwDzETXyGYfN3jmaPlncUwSrssQNHT8RJ%2BliR9L56Y3uaWbVIuD2OIyTr2Qs1cbmGMQpjCuH3sS3Vgud%2BgFD5vPZ%2BdYU91gtI2aYjpHqCbr%2BgAC5DzfYzvCSbsnJgJ8S7w4rdfNMN8zD6acc%2B2F%2BzPJ8qfpDF5g8UKeihwXhzbYWciUfrohQgzRftK7yehT%2FUE9%2FT7bxJ6EWc5fTE9%2B%2BQXy7c%2FcX5%2Br1Sy5jKX1HcP77ikIk6BcQoPNXFy8X%2BGhIolfqcsm5qGWFa%2BbF%2Bpk2FxFSnO4vJ9bjVzvutxZV6XZ67gphsc8XPoo%2FSEyhzjH5NdFEC2Su8CaE8AnewzEIBIY3S6VdjsrVDqN0MJHKs%2FlkE3IDckfNklKkD0XfjyOiSIhuOF7KlwmrHo9EqPQpDObofUMCVAiqLF5JxlqsVCs5dIsx9U%2BWhTjhb4k48%2B56NzQ2fWDVR5a0t35UReY0K1georipO0RPYO5F4beyeIfYO0LQD7XALsQTfMpyCtJEjbMxmQmhOkJwLsMbK6QmQdKchaE7InnXPpipXhOZOBZwLTxynkXgi5SFoKpTfhtPUWnHNTCpx%2FTnA24GzkSvLQvGKcrgzjpFXOlA%2BPqMqZWzIiqD1F0JFEUKCbEhrGEYngaxdMp55UV7UQ7DKfaEY5l4Mu0C0JUZc1LrpVPP8fR70tHfVRe6I0%2Bh7eW6BZAYAMaw%2BcyX1f7lZkCZdCJ16%2BAu8Da7jDkwGfMWC29Sv92%2B9NgQCypgxkaRKt0jevwIO9mnFos8%2F4oB00iQamKwFVsku3U84l2d4l5VxXGh3AMCTkXJBjDYOjuaRL%2BsDYn%2FkuidMNWZPIw6uKumz6gRrcMAoWbFCK7r5g4r%2BVQky9eA3Twts8nRZaDLGXou%2FNez0lAL70C0FRWgnRbAnRadlQQnaxD%2FmilhTLu%2BgmWOMGwWZXbTy5YmnzWZ0e8u6scKaoXMp5IoWSCZSJxRITS%2FDRMoEHlP7LOH%2Bz%2Bd63kpk%2BY%2B0Q2%2F3Gz3lKxxZHvlKjvHOLfS91VXK2RdVvMYBZ%2BsrUzxEVi69MAWvqV9O48lCpftmxDzDlbCm9O%2B%2B9xrBloSI5H3CA0Qw4luHWcbnKbzjzFo75HQiHpdnI%2FQw4DzPoAnNt%2BqXtaR4yT2Nr9ESuMYQyWO1Jvia4V%2FltnvFJUwZXPBYb6mNxX8w6O8O5oI18tExkxeJirmTgUFy0JW6Ws%2FmzyNkah5xvqfHqcraG9%2FmdQns1fTG0pAWLPmWS7qvR1WDERwbX7vIWLCYrhRlS4p3ymULiqnMVp9UpceduC5qeuQcQrHgrFVRbiqlTasESVVlY7J%2BiF%2FM4o8vQZ05T62egkXFf5Z87sq1EvDBXlo32LcwHQbpdaLeQu8rvAMm1GBCtzFXhfClL65QN2yM1evcytFf5ga7rFxe03zq0F0hQHsFKvsBk9Cl%2BbTps6BxftDugStT9O%2FXlGNYoknxDsE1Qew6VXSpHmVxEy3rnJ1HEcphoYIs3BKv68v7VFiqmMrkIv8r1lXXw%2Buamfa1ZSm4KrCsJxtECw7LlJhiG6PtpVc6mb4JRTUKNI%2BgJNgGqxxhhZ2voHhaw5hfy7uPXb0dm2P5hnFyB5IwLCRb6tcR4hI0f5aWc0660nIYjvL5gvCriexg9JQAF7oPzZfkjfCH68q7btB7GaJsw1K%2BMYmZjnn9ECQogp6xjL0CwmpEM4Ku3y0bUbx3THGIYs%2Ba%2F9cx%2Fz4pt%2Br3Mvld80W3zmoXW1Oc1i%2F9LUZxlZvePAycx7zSH3QPzW6eyB0N2wRFk3%2FUo7Xwcpm1zbw%2BQdgCZ7lY%2Fwpf7gerHDM3Vfw%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)
## Реализация программы
Программа написана на языке C++
```c++
#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "RUS");
    int A[100];
    int n;
    printf("Введите количество элементов: ");
    scanf("%d", &n);

    printf("Введите элементы массива: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    int first = -1;
    int last = -1;
    for (int i = 0; i < n; i++) {
        if (A[i] < 0) {
            if (first == -1) first = i;
            last = i;
        }
    }

    if (first == -1) {
        printf("Отрицательных элементов нет\n");
        return 0;
    }

    int p = 1;
    for (int i = first+1; i < last; i++)
        p *= A[i];

    printf("Произведение: %d\n", p);

    return 0;
}
```
## Результат работы программы
```
Введите количество элементов: 7
Введите элементы массива: 5 -6 -4 6 2 -5 8
Произведение: -48
```
## Информация о разработчике
```
Имя: Харитонов Дмитрий Олегович
Группа: бИЦТ-261
Вариант: 28
```
