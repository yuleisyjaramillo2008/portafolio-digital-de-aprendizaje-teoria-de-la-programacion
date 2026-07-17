<a href="../README.md"><code>◀ Regresar</code></a>


<h1 align="center">1.🧱  Modularidad </h1>

<br>

Para problemas complejos es inevitable tener algoritmos complejos. lo cual genera confunción al momento de entender el código o estructurar soluciones es por esta razón que utilizamos una técnica llamda **modularidad** cuyo objetivo es **dividir** el programa grande en subprogramas más pequeños (de lo más grande hasta lo más pequeño). <br>
A esta técnica se le conoce como **modularización** y las doiviciones de código (**módulos**) reciben el nombre de: procesos, funciones, rutas, sub rutinas, etc. 
## Funciones 
Es un conjunto de código que realiza una tarea determinada. Existen dos tipos de funciones las ya definidas por el lenguje y las que estan definidas por el programador. Una función tiene ods partes la **cabecera** (donde se define el nombre y tipo de valor) y el conjunto de **sentencias** (código dentro de los parentesis). Las funciones pueden o no retornar valores.
## Ejemplos
+ **Por parametro:** Es una forma de pasar datos a las funciones o procesos, es decir, que es cuando un bloque de código recibe los datos de entrada (parametros) para que la funci+on tabaje con esos datos pero en si la varible original no se altera.

```c
#include <stdio.h>

void calcularArea(float base, float altura);

int main() {
    // Variables locales en la función main
    float b = 5.5;
    float a = 10.0;

    // Parametros_Varibles
    calcularArea(b, a);

    // Parametros_Valores
    calcularArea(3.0, 4.2);

    return 0;
}
void calcularArea(float base, float altura) {
    float area = base * altura;
    printf("El area del rectangulo es: %.2f\n", area);
}

```
+ **Por referencia:** Aquí se envia la dirección de memoria de una variable de tal manera que todos los cambios que se haga dentro de la función afectara a la variable original.

```c
#include <stdio.h>

void calcularCirculo(float radio, float *resultadoArea, float *resultadoPerimetro);

int main() {
    float miRadio = 5.0;
    float area = 0.0;
    float perimetro = 0.0;

    printf("Radio del circulo: %.2f\n\n", miRadio);

    // Enviamos el radio, pero el area y perimetro con '&' para que se modifiquen
    calcularCirculo(miRadio, &area, &perimetro);

    // Las variables ya contienen los resultados calculados por la función
    printf("Resultados obtenidos:\n");
    printf("-> Area calculada: %.2f\n", area);
    printf("-> Perimetro calculado: %.2f\n", perimetro);

    return 0;
}

// La función recibe el radio por valor, pero el área y el perímetro por referencia
void calcularCirculo(float radio, float *resultadoArea, float *resultadoPerimetro) {
    float pi = 3.14159;

    // Modificamos directamente las variables del main usando asteriscos
    *resultadoArea = pi * radio * radio;
    *resultadoPerimetro = 2 * pi * radio;
}


```



<br>

<p align="right">
  <a href="../README.md"><code>◀ Regresar</code></a>
  <a href="#top"><code>▲ Subir</code></a>
  <a href="Ejercicio.md"><code>Siguiente ▶</code></a>
</p>
