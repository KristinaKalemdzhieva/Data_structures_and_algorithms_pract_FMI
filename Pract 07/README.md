# Практикум 7: Двоично наредено дърво за търсене
BST е кореново двоично дърво, за всеки връх на което са изпълнени следните правила:
- ако има ляв наследник, то той е с по-малка стойност
- ако има десен наследник, то той е с по-голяма стойност

![binarySearchTree](Images/binarySearchTree.jpg)

## Видове обхождания в BST
- <span style="color: cyan;">**pre**</span>**order traversal** : <span style="color: cyan;">**корен**</span>-ляво-дясно  &nbsp;**||**&nbsp; <span style="color: cyan;">**корен**</span>-дясно-ляво
- <span style="color: magenta;">**in**</span>**order traversal** : ляво-<span style="color: magenta;">**корен**</span>-дясно &nbsp;**||**&nbsp; дясно-<span style="color: magenta;">**корен**</span>-ляво
- <span style="color: cyan;">**post**</span>**order traversal** : ляво-дясно-<span style="color: cyan;">**корен**</span> &nbsp;**||**&nbsp; дясно-ляво-<span style="color: cyan;">**корен**</span>

#### ❕**ВАЖНО**❕
> Каквато е представката, такава е и позицията на корена при обхождането

### Имплементации:
- [Preorder Traversal](preorderTraversal.cpp)
- [Inorder Traversal](inorderTraversal.cpp)
- [Postorder Traversal](postorderTraversal.cpp)


Нека използваме тези имплементации върху двоичното наредено дърво за търсене от примера по-горе, а именно:
![binarySearchTree](Images/binarySearchTree.jpg)

Какво очакваме да се отпечата на конзолата при различните обхождания?
- При <span style="color: cyan;">**pre**</span>**order обхождане** :&nbsp;  15&nbsp;  5&nbsp;  1&nbsp;  3&nbsp;  9&nbsp;  7&nbsp;  10&nbsp;  22&nbsp;  18&nbsp;  16&nbsp;  24&nbsp; 

- При <span style="color: magenta;">**in**</span>**order обхождане** :&nbsp;  1&nbsp;  3&nbsp;  5&nbsp;  7&nbsp;  9&nbsp;  10&nbsp;  15&nbsp;  16&nbsp;  18&nbsp;  22&nbsp;  24&nbsp; 

- При <span style="color: cyan;">**post**</span>**order обхождане** :&nbsp; 3&nbsp;  1&nbsp;  7&nbsp;  10&nbsp;  9&nbsp;  5&nbsp;  16&nbsp;  18&nbsp;  24&nbsp;  22&nbsp;  15&nbsp;  

#### ❕**ВАЖНО**❕
> Когато обхождаме двоично наредено дърво <span style="color: magenta;">**in**</span>**order**, ние всъщност обхождаме възелите му в **сортиран ред**. 
> - Ако обхождането е **ляво-**<span style="color: magenta;">**корен**</span>**-дясно**, то обхождаме дървото във **възходящ ред**.
> - Ако обхождането е **дясно-**<span style="color: magenta;">**корен**</span>**-ляво**, то обхождането е в **низходящ ред**.

## Сложности:
// to do...

## Задачи:
- [Линк към задачите](https://leetcode.com/problem-list/ak9s8zte/)
- [Линк към допълнителни задачи]()