### Exercice 00: [ft_putchar](https://github.com/silvagomez/42piscine/blob/main/C_00/ex00/ft_putchar.c)

| Rule              | Description  |
| ----------------- | ------------ |
| Turn-in directory | ex00/        |
| Files to turn in  | ft_putchar.c |
| Allowed functions | write        |

Write a function that displays the character passed as a parameter.
<br><br>
It will be prototyped as follows:
```c
void ft_putchar(char c);
```
To display the character, you must use the _write_ function as follows:
```c
write(1, &c, 1);
```
