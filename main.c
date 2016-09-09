#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"
int main()
{
    float a = 0, b = 0, resultado;
    int opcion, flag = 0;
    char seguir = 's';
     while (seguir == 's')
     {
         if (flag != 0)
         {
             if ( flag == 1 && opcion == 1)
             {
                 printf("Ingrese un numero para ejecutar una funcion\n1 Ingresar primer operando (A = %f).\n2 Ingresar segundo operando (B).\n3 Sumar.\n4 Restar.\n5 Multiplicar.\n6 Division.\n7 Factoreal.\n8 Hacer todas las operaciones.\n9 Salir.\n", a);
                 flag++;
             }
                else if ( flag == 1 && opcion == 2)
             {
                 printf("Ingrese un numero para ejecutar una funcion\n1 Ingresar primer operando (A) .\n2 Ingresar segundo operando (B = %f).\n3 Sumar.\n4 Restar.\n5 Multiplicar.\n6 Division.\n7 Factoreal.\n8 Hacer todas las operaciones.\n9 Salir.\n", b);
                 flag++;
             }
                else if (flag == 2)
             {
                 printf("Ingrese un numero para ejecutar una funcion\n1 Ingresar primer operando (A = %f) .\n2 Ingresar segundo operando (B = %f).\n3 Sumar.\n4 Restar.\n5 Multiplicar.\n6 Division.\n7 Factoreal.\n8 Hacer todas las operaciones.\n9 Salir.\n", a, b);
             }
         }
         else
         {
            printf("Ingrese un numero para ejecutar una funcion\n1 Ingresar primer operando (A).\n2 Ingresar segundo operando (B).\n3 Sumar.\n4 Restar.\n5 Multiplicar.\n6 Division.\n7 Factoreal.\n8 Hacer todas las operaciones.\n9 Salir.\n");
            flag++;
         }
        scanf("%d", &opcion);
    	switch(opcion)
    	{
        	case 1 :
				 printf ("Ingrese un numero para el primer operando (A):  \n");
				a = ingresarNumeros (a);
				printf("El operando A es: %f\n", a);
         	   break;
        	case 2 :
				 printf ("Ingrese un numero para el segundo operando (B):  \n");
				b = ingresarNumeros(b);
				printf ("El operando B es: %f\n", b);
            	break;
        	case 3 :
        	    resultado = sumar (a, b);
            	if (resultado != 0)
            	{
            		printf("La suma es: %f\n", resultado);
            	}
            	else
            	{
            		if (a ==0 && b != 0)
            		{
            		 printf ("No se realizo la suma ya que solo ingreso B = %f.\n", b);
            		}
            		else if (a != 0 && b == 0)
            		{
            			printf ("No se realizo la suma ya que solo ingreso A = %f.\n", a);
            		}
            		else if ( a == 0 && b == 0)
            		{
            			printf ("No se realizo la suma ya que  no ingreso un valor.\n");
            		}
            	}
           	 break;
        	case 4 :
            	resultado = restar (a, b);
            	if (a != 0 && b != 0)
                {
                    printf ("La resta es: %f\n", resultado);
                }
                else if (a == 0 && b != 0)
                {
                    printf("Usted solo ingreso un operando o 0 en el operando A\nSu resultado es: -%f\n", b);
                }
                else if (a != 0 && b == 0)
                {
                    printf("Usted solo ingreso un operando o 0 en el operando B\nSu resultado es: %f\n", a);
                }
                else
                {
                        printf("Usted no ingreso numeros validos");
                }
            	break;
        	case 5 :
            	resultado = multiplicar (a, b);
                if (a != 0 && b != 0)
                {
                    printf("La multiplicacion es: %f\n", resultado);
                }
            	else if (a == 0 && b != 0)
                {
                    printf("Usted solo ingreso un operando o 0 en el operando A\nSu resultado es: 0");
                }
                else if (a != 0 && b == 0)
                {
                    printf("Usted solo ingreso un operando o 0 en el operando B\nSu resultado es: 0");
                }
                else
                {
                        printf("Usted no ingreso numeros validos");
                }
            	break;
        	case 6 :
            	resultado = dividir(a, b);
            	if (a != 0 && b != 0)
                {
                    printf ("La division es: %f\n", resultado);
                }
                else if (a == 0 && b != 0)
                {
                    printf("Usted inreso 0 o nada en el operando A\nLa division es: 0");
                }
                else if (a != 0 && b == 0)
                {
                    printf("No se puede dividir por 0");
                }
                else
                {
                    printf("No ingreso operandos");
                }
            	break;
        	case 7 :
            	resultado = factorear (a, b);
            	if (a > 0)
                {
                    printf("El factoreal es: %f\n", resultado);
                }
            	else if (a == 0)
                {
                    printf("Usted no ingrenso el operando A o ingreso 0");
                }
                else if ( resultado == -1)
                {
                    printf("No se puede factorizar un numero decimal");
                }
                else
                {
                    printf("Usted ingreso un numero negativo");
                }

            	break;
        	case 8 :
                resultado = sumar (a, b);
            	if (resultado != 0)
            	{
            		printf("La suma es: %f\n", resultado);
            	}
            	else
            	{
            		if (a ==0 && b != 0)
            		{
            		 printf ("No se realizo la suma ya que solo ingreso B = %f.\n", b);
            		}
            		else if (a != 0 && b == 0)
            		{
            			printf ("No se realizo la suma ya que solo ingreso A = %f.\n", a);
            		}
            		else if ( a == 0 && b == 0)
            		{
            			printf ("No se realizo la suma ya que  no ingreso un valor.\n");
            		}
            	}
            	resultado = restar (a, b);
            	if (a != 0 && b != 0)
                {
                    printf ("La resta es: %f.\n", resultado);
                }
                else if (a == 0 && b != 0)
                {
                    printf("Usted solo ingreso un operando o 0 en el operando A\nLa resta es: -%f.\n", b);
                }
                else if (a != 0 && b == 0)
                {
                    printf("Usted solo ingreso un operando o 0 en el operando B\nLa resta es: %f.\n", a);
                }
                else
                {
                        printf("No se realizo la resta ya que usted no ingreso numeros validos.\n");
                }
                resultado = multiplicar (a, b);
                if (a != 0 && b != 0)
                {
                    printf("La multiplicacion es: %f.\n", resultado);
                }
            	else if (a == 0 && b != 0)
                {
                    printf("Usted solo ingreso un operando o 0 en el operando A\nLa multiplicacion es: 0.\n");
                }
                else if (a != 0 && b == 0)
                {
                    printf("Usted solo ingreso un operando o 0 en el operando B\nLa multiplicacion es: 0.\n");
                }
                else
                {
                        printf("No se realizo la multiplicacion ya que usted no ingreso numeros validos.\n");
                }
                resultado = dividir(a, b);
            	if (a != 0 && b != 0)
                {
                    printf ("La division es: %f.\n", resultado);
                }
                else if (a == 0 && b != 0)
                {
                    printf("Usted inreso 0 o nada en el operando A\nLa division es: 0.\n");
                }
                else if (a != 0 && b == 0)
                {
                    printf("No se puede dividir por 0.\n");
                }
                else
                {
                    printf("No se realizo la division ya que usted no ingreso numeros validos.\n");
                }
                resultado = factorear (a, b);
            	if (a > 0)
                {
                    printf("El factorial es: %f.\n", resultado);
                }
            	else if (a == 0)
                {
                    printf("Usted no ingrenso el operando A o ingreso 0.\n");
                }
                else
                {
                    printf("Usted ingreso un numero negativo en el operando A.\n");
                }
                break;
        	case 9 :
        		printf("Desea seguir ingresando (s/n)?");
        		fflush(stdin);
        		scanf("%c",&seguir);
        		while (seguir != 's' && seguir != 'n')
                {
                    printf("\nError. Ingrese una opcion valida ");
                    scanf ("%c", &seguir);
                }
        		break;
    	}
     }
    return 0;
}
