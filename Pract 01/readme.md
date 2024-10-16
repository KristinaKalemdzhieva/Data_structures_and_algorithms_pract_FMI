# Практикум 1

## Сложности

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
    <strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;О(1)</strong>
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
    <strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;О(N)</strong>
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
    <strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;О(1)</strong>
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
    <strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;О(log(N))</strong>
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
    <strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;О(1)</strong>
</details>
<br/>

## Задачи:
- [Линк към примерната задача]()
- [Линк към задачите в LeetCode](https://leetcode.com/problem-list/ad0i6v8m/)
- [Линк към допълнителни задачи]()