#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 100;
}
int main()
{
    int nbr = 50;
    ft_ft(&nbr);
    printf("%d", nbr);
    return(0);
}