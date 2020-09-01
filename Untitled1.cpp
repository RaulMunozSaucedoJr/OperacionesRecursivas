
//fecha: 04/09/2016
//Materia: Estructura de Datos.

//Bibliotecas

#include <stdio.h>
#include<math.h>
#include<windows.h>

//Ocupamos la funcion POW para evaluar potencias

float sumaRecursiva(float a, float b)
{    
		  if (a>0)
          return(sumaRecursiva(a-1,b)+1);
          else
          return(b); //return(a+b); Regresamos el resultado de la suma
} 
float restaRecursiva(float a, float b) 
{
      if(b>0)
      return(restaRecursiva(a,b-1)-1);
      else 
      return(a);    
}
float factorialRecursivo(float a) 
{
      if(a>1)
      return(factorialRecursivo(a-1)*a);//Regresamos el resultado del factorial
      else
      return(a);
      }
float potenciaRecursiva(float a, float b) 
      {
               if(b==1)
               return(a);
               else
               return(a*potenciaRecursiva(a,b-1)); //regresa(pow(a,b)); 
      }
      //Inicia el main
main()
{
int respuestaMenu=0; //Respuesta al menu     
float x=0, y=0; //Iniciamos la variables para poder realizar las operaciones.
float Resultado=0; //Resultado
do{ // Ocupamos el Do para poder hacer uso del menu
printf("Bienvenido, por favor ingrese el numero de la operacion que desea \n [1] Suma \n [2] Resta \n [3] factorial \n [4] Potencia \n  [5] Salir \n");
scanf("%d",&respuestaMenu); //leemos y gardamos la respuesta del usuario
system("cls"); //Limpiamos pantalla para una mejor interfaz 
switch(respuestaMenu){
           case 1: //CASE para hacer SUMA
           printf(" \n"); //Salto de Linea
           puts("Ingrese el primer numero a sumar"); //Pedimos al usuario el primer numero a sumar
           printf(" \n"); //Salto de Linea
           scanf("%f",&x);// guardamos el primer numero a sumar
           printf(" \n"); //Salto de Linea
           puts("Ingrese el Segundo numero a sumar");//Pedimos al usuario el segundo numero a sumar
           printf(" \n"); //Salto de Linea
           scanf("%f",&y);// guardamos el segundo numero a sumar
           Resultado=sumaRecursiva(x,y); //hacemos llamado a la funcion sR para evaluar x Y y en la suma recursiva
           printf("Resultado = %.2f \n ", Resultado); // Imprimimos el resulado en pantalla
           break ;//Se detiene el case1
           
           //Inicia el case2
           case 2: 
           printf(" \n"); //Salto de Linea
           puts("Ingrese el primer numero a restar"); //Pedimos al usuario el primer numero a restar
           printf(" \n"); //Salto de Linea
           scanf("%f",&x);// guardamos el primer numero a sumar
           printf(" \n"); //Salto de Linea
           puts("Ingrese el Segundo numero a restar");//Pedimos al usuario el segundo numero a restar
           printf(" \n"); //Salto de Linea
           scanf("%f",&y);// guardamos el segundo numero a sumar
           Resultado=restaRecursiva(x,y); //hacemos llamado a la funcion sR para evaluar x Y y en la resta recursiva
           printf("Resultado = %.2f \n ", Resultado); // Imprimimos el resulado en pantalla
           break ;//detenemos el case 2
           
           //Inicia el case3
           case 3://CASE para hacer FACTORIAL
           printf(" \n"); //Salto de Linea
           puts("Ingrese el Numero para hacer Factorial \n"); //Pedimos al usuario el numero para hacer factorial.
           printf(" \n"); //Salto de Linea
           scanf("%f",&x);// guardamos el numero para factorial en la variable x
           if(x<0){ //Hacemos la comparativa para saber si x es menor a 0    
           printf(" \n"); //Salto de Linea
           puts("ERROR no existe factorial de numeros negativos \n"); //Imprimimos en pantalla el error por no poder hacer factorial negativo
           printf(" \n"); //Salto de Linea
		   }else{ //Si la comparativa del IF es negativa, hacemos las siguientes intrucciones 
           Resultado=factorialRecursivo(x); //hacemos llamado a la funcion fR para evaluar x Y y 
           printf(" \n"); //Salto de Linea
		   printf("Resultado = %.2f \n ", Resultado); } // Imprimimos el resulado en pantalla
           printf(" \n"); //Salto de Linea
		   break ;//detenemos el case 3
		   
		   //Inicia el case4
           case 4:
           printf(" \n"); //Salto de Linea
           puts("Ingrese el  numero a evaluar"); //Pedimos al usuario el numero a evaluar
           printf(" \n"); //Salto de Linea
		   scanf("%f",&x);// guardamos el umero a evaluar
           printf(" \n"); //Salto de Linea
		   puts("Ingrese la potencia que desea");//Pedimos al usuario la potencia que desea
           printf(" \n"); //Salto de Linea
		   scanf("%f",&y);// guardamos la potencia que desea
           Resultado=potenciaRecursiva(x,y); //hacemos llamado a la funcion pR para evaluar x Y y en la potencia recursiva
           printf("R = %.2f \n ", Resultado); // Imprimimos el resulado en pantalla
           break ; //detenemos el case 4
                
                 } //Termina el switch
                 } //Termina el do.
while(respuestaMenu !=5); // Cuando el usuario teclea el numero 5 el ciclo DO Termina y en este caso nos saca del menu
puts("Gracias. Hasta pronto \n"); // Mensaje de despedida para el usuario
system("pause"); // peque�a pausa para poder ver lo de pantalla 
}

