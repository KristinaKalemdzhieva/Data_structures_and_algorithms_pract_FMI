# Практикум 1: Сложност по време

## Задачи за сложности

Да се определи сложността по време на следните функции: <br/>

Функция 1:

```c++
int func(vector<int>& array) {
    int sum = 0;
    for (int i = 0; i < 100; i++) {
        sum += array[0];
    }
    return sum;
}
```
<details>
    <summary>&nbsp;Отговор</summary>
    <strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Θ(1)</strong>
</details>
<br/>
Функция 2:

```c++
vector<int> func(const int N) {
    vector<int> array;
    for (int i = 0; i < N; i++) {
        array.push_back(i);
    }
    return array;
}
```
<details>
    <summary>&nbsp;Отговор</summary>
    <strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Θ(N)</strong>
</details>
<br/>
Функция 3:

```c++
int func(vector<int>& array) {
    return array[0];
}
```
<details>
    <summary>&nbsp;Отговор</summary>
    <strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Θ(1)</strong>
</details>
<br/>
Функция 4:

```c++
void func(vector<int>& array) {
    int N = array.size();
    for (int i = N - 1; i > 0; i /= 5 )
    {
        cout << array[i] << " ";
    }
}
```
<details>
    <summary>&nbsp;Отговор</summary>
    <strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Θ(log(N))</strong>
</details>
<br/>
Функция 5:

```c++
void func(vector<int>& array) {
    int N = array.size();
    for (int i = 0; i < N; i++ )
    {
        if (i == 8) {
            break;
        }
        cout << array[i] << " ";
    }
}
```
<details>
    <summary>&nbsp;Отговор</summary>
    <strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Θ(1)</strong>
</details>
<br/>

## 💡Допълнително: Binary Search в rotated масив:

Подобен алгоритъм на обикновения **Binary Search**. При този обаче, масивът остава сортиран, но част от елементите накрая са дошли в началото, затова е **rotated**.

Алгоритъмът работи като на всяка стъпка взимаме елемента на средна позиция спрямо **left** и **right** указателите.
- Ако той **е** търсения елемент - връщаме го.
- Ако той **не е** търсения елемент - трябва да проверим в коя от двете половини се намира търсеният елемент (лявата или дясната).

За да проверим в коя от двете половини се намира търсеният елемент, първо **трябва да проверим коя от двете половини е сортирана**. За целта търсим в кой от двата подмасива **левият краен елемент е по-малък от десния краен елемент**.
- Ако е в текущата половина, то алгоритъмът става **тривиален Binary Search**.
- В противен случай обаче, **повтаряме същия алгоритъм** с другата половина.

Повтаряме докато не намерим елемента или двата указателя не се разминат ( *в този случай няма такъв елемент* ).

**Пример:** <br/>
Имаме масива **[7 8 9 1 2 3 4 5 6]** и търсим **1**. </br>
**Средният елемен е 2**. Виждаме, че надясно подмасивът е сортиран и 1 не принаделжи на него. Махаме го. </br>
Оставаме с **[7 8 9 1]**, където **8 e средния**, наляво масивът е сортиран, но 1 отново не принаделжи в него. Махаме го. </br>
Оставаме с **[9 1]**, където **9 е средния**. Наляво няма масив, надясо е само 1 и така намираме търсения елемент.

Сложността е **Θ(N * log(N))**, защото на всяка стъпка отхвърляме половината елементи.

## Задачи:
- [Линк към примерната задача](https://leetcode.com/problems/minimum-average-of-smallest-and-largest-elements/description/?envType=problem-list-v2&envId=an1rjax7)
- [Линк към задачите в LeetCode](https://leetcode.com/problem-list/ad0i6v8m/)
- [Линк към допълнителни задачи](https://docs.google.com/document/d/15F8TEN1d3EY7Ot20j04PPaMzK8s740pjeYVbv6x-5zk/edit?tab=t.0)