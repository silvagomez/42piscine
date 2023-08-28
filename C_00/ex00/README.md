### Exercice 00: ft_putchar

Files to turn in: ft_putchar.c
<br>
Allowed functions: write
<br><br>
Write a function that displays the character passed as a parameter.
It will be prototyped as follows:
```c
void ft_putchar(char c);
```
To display the character, you must use the _write_ function as follows.
```c
write(1, &c, 1);
```
