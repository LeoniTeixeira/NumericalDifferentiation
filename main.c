#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int X0;
    float  X, amplitude, fx, fx0, resultado;
    printf("digite o valor de X0: ");
    scanf ("%d", &X0);
    printf("digite o valor da amplitude: ");
    scanf ("%f", &amplitude);

    X = amplitude+X0;

    fx = pow(M_E,X) + pow(X,2) - 3;
    fx0 = pow(M_E,X0) + pow(X0,2) - 3;

    resultado = (fx - fx0)/amplitude;

    printf("%f", resultado);


    return 0;
}
