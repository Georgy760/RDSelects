# Временная сложность алгоритма RSelect

Обозначим через **n** размер массива.

1. **Выбор опорного элемента (pivot):** В худшем случае, когда каждый раз выбирается минимальный или максимальный элемент, этот шаг занимает **O(n)** времени.
   Выбор опорного элемента в алгоритме RSelect приводит к худшему случаю, когда массив не делится на две равные части.

2. **Разделение массива (partition):** В худшем случае (когда массив не делится на две равные части), разделение массива также занимает **O(n)** времени.

3. **Рекурсивные вызовы:** В каждом рекурсивном вызове массив уменьшается хотя бы на 1 элемент, и у нас есть **O(n)** уровней рекурсии в худшем случае.

Таким образом, общая временная сложность алгоритма RSelect в худшем случае также составляет **O(n + n + n) = O(n)**.

# Выбор k-го порядкового статистического элемента

Когда мы применяем алгоритм RSelect для поиска k-го порядкового статистического элемента в массиве, это означает, что мы ищем элемент, который занимает k-ую позицию в отсортированном массиве.

Например, если у нас есть массив: [3, 1, 7, 5, 9, 2, 6, 8, 4], и мы хотим найти 5-й наименьший элемент, то после применения RSelect получим ответ 5.

Таким образом, алгоритм RSelect помогает найти k-й порядковый статистический элемент в массиве с линейной временной сложностью в худшем случае.


# Временная сложностью алгоритма DSelect. Обозначим через **n** размер массива.

1. **Выбор медианы медиан:** В худшем случае этот шаг занимает **O(n)** времени.
   Мы разбиваем массив на группы по 5 элементов, находим медиану в каждой группе, получается 3 сравнения для каждой группы, и затем рекурсивно вызываем выбор медианы медианы для этого нового массива медиан.
   Таким образом, для каждой рекурсии мы выполняем **O(n)** операций.

2. **Разделение массива (partition):** В худшем случае (когда массив не делится на две равные части), разделение массива занимает **O(n)** времени.
   Это происходит в том случае, когда каждый раз при разделении мы оставляем только один элемент в одной из частей.

3. **Рекурсивные вызовы:** Каждый рекурсивный вызов уменьшает размер массива вдвое, и у нас **O(log n)** уровней рекурсии.

Таким образом, общая временная сложность алгоритма DSelect в худшем случае составляет **O(n + n + log n) = O(n log n)**.

# Медиана массива

Медиана массива - это элемент, который находится в середине отсортированного массива.
Если количество элементов в массиве нечетное, то медиана будет точно посередине,
если количество элементов четное, то медиана будет равна среднему арифметическому двух средних элементов.

Например возьмем массив: [3, 1, 7, 5, 9, 2, 6, 8, 4]. Сначала отсортируем его: [1, 2, 3, 4, 5, 6, 7, 8, 9].
Медианой в этом массиве будет число 5.

Пример с четным колиеством элементов: [12, 3, 5, 7, 4, 19, 26]. Отсортируем [3, 4, 5, 7, 12, 19, 26].
Медианой в этом массиве будет число (7 + 12) / 2 = 9,5.
