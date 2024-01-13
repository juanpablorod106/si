#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf ("%s", "Ingresa tu saldo a pagar, tu cuenta es 18 bolivares \n");
    int dinero = 30;
    scanf("%d", &dinero);
    printf ("%d", dinero);
    if (dinero >= 18){
        printf (" Es un saldo suficiente ");
    }
    else (dinero <= 18);{
        printf (" Su saldo es insuficiente para realizar la compra ");
    }

      system ("pause");
}
