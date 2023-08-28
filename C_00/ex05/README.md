### Exercice 05: [ft_print_comb](https://github.com/silvagomez/42piscine/blob/main/C_00/ex05/ft_print_comb.c)

| Rule              | Description           |
| ----------------- | --------------------- |
| Turn-in directory | ex05/                 |
| Files to turn in  | ft_print_comb.c       |
| Allowed functions | write                 |

Create a function that displays all different combinations of three different digits in
ascending order, listed by ascending order - yes, repetition is voluntary.
<br><br>
Here’s the intended output:
```shell
$>./a.out | cat -e
012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
```
987 isn’t there because 789 already is.
<br>
999 isn’t there because the digit 9 is present more than once.
<br><br>
Here’s how it should be prototyped:
```c
void ft_print_comb(void);
```
