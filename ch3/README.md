# Глава 3. Управляющие конструкции

## [3.5.](./content/3.5.md) Циклы `while` и `for`
Примеры реализации функций:
* `atoi` - преобразование строки в целое число
* `shellsort` - сортировка целых чисел по алгоритму Шелла
* `reverse` - обращение порядка символов в строке
## [3.6.](./content/3.6.md) Циклы `do-while`
Примеры реализации функций:
* `itoa` - преобразование целого числа в строку символов

### Упражнения:
- [3.4.](./tasks/3.4_itoa.c) В представлении чисел с помощью дополнения до двойки [версия](./examples/3.6_itoa.c) `itoa` не умеет обрабатывать самое большое по модулю отрицательное число, то есть значение $n$, равное $-(2^{len} - 1)$. Так как в коде происходит замена знака для отрицательных n и случается переполнение (максимальное положительное значение $2^{len}$). Доработайте функцию так, чтобы она выводила число правильно независимо от ситемы, в которой она работает.