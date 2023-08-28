### Exercice 08: [ft_print_combn](https://github.com/silvagomez/42piscine/blob/main/C_00/ex08/ft_print_combn.c)

| Rule              | Description           |
| ----------------- | --------------------- |
| Turn-in directory | ex08/                 |
| Files to turn in  | ft_print_combn.c      |
| Allowed functions | write                 |

Create a function that displays all different combinations of n numbers by ascending
order.
<br><br>
n will be so that : 0 < n < 10.
<br><br>
If n = 2, here’s the expected output:
```shell
$>./a.out | cat -e
01, 02, 03, ..., 09, 12, ..., 79, 89$>
```

Here’s how it should be prototyped:
```ci
void ft_print_combn(int n);
```
