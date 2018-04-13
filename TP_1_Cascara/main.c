#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float a=0;
    float b=0;
    float resultado=0;


    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.0f)\n",a);
        printf("2- Ingresar 2do operando (B=%.0f)\n",b);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                a=tomarvalor();
                break;
            case 2:
                b=tomarvalor();
                break;
            case 3:
                resultado=suma(a,b);
                printf("La suma es: %.2f\n",resultado);
                break;
            case 4:
                resultado=resta(a,b);
                printf("La resta es: %.2f\n",resultado);
                break;
            case 5:
                 if(b !=0)
                    {
                        resultado=dividir(a,b);
                        printf("El resultado de la divicion es: %.2f\n",resultado);
                    }else
                    {
                        printf("Error no se puede dividir por 0 \n");
                    }
                break;
            case 6:
                resultado=multiplicar(a,b);
                printf("El producto es: %.2f\n",resultado);
                break;
            case 7:
                if(a>1)
                {
                resultado=factorial(a);
                printf("El facorial es: %.2f \n",resultado);
                }else
                {
                    if(a==0 || a==1)
                    {
                        printf("El factoreal es 1\n");
                    }else
                    {
                        printf("El factoreal no se puede hacer por negativos\n");
                    }
                }
                break;
            case 8:
                resultado=suma(a,b);
                printf("La suma es: %.2f\n",resultado);
                resultado=resta(a,b);
                printf("La resta es: %.2f\n",resultado);
                if(b !=0)
                    {
                        resultado=dividir(a,b);
                        printf("El resultado de la divicion es: %.2f\n",resultado);
                    }else
                    {
                        printf("Error no se puede dividir por 0 \n");
                    }
                resultado=multiplicar(a,b);
                printf("El producto es: %.2f\n",resultado);
                if(a>1)
                {
                resultado=factorial(a);
                printf("El facorial es: %.2f \n",resultado);
                }else
                {
                    if(a==0 || a==1)
                    {
                        printf("El factoreal es 1\n");
                    }else
                    {
                        printf("El factoreal no se puede hacer por negativos\n");
                    }
                }

                break;
            case 9:
                seguir = 'n';
                break;
        }
    }


    return 0;
}
