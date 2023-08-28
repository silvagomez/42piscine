### Exercice 00: ft_putchar

| Rule              | Description  |
| ----------------- | ------------ |
| Turn-in directory | ex00/        |
| Files to turn in  | ft_putchar.c |
| Allowed functions | write        |

Write a function that displays the character passed as a parameter. <br>
It will be prototyped as follows:
```c
void ft_putchar(char c);
```
To display the character, you must use the _write_ function as follows.
```c
write(1, &c, 1);
```
