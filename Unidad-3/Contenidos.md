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

# 📦Arreglo
Los arreglos son una forma de guardar datos facilitando el acceso a los elementos (índices).
## Unidimensionales 
Solo tiene una fial y columnas.
```c
#include <stdio.h>

int main() {
    // 1. Declarar e inicializar el arreglo unidimensional con 5 elementos
    int calificaciones[5] = {85, 90, 78, 92, 88};
    
    // Variables para el cálculo del promedio
    float suma = 0;
    float promedio = 0.0;

    printf("--- Notas del Estudiante ---\n");

    // 2. Recorrer el arreglo usando un bucle 'for'
    for (int i = 0; i < 5; i++) {
        // Acceder a cada elemento usando su índice (empezando desde 0)
        printf("Evaluacion %d: %d\n", i + 1, calificaciones[i]);
        

        suma += calificaciones[i];
    }

   
    promedio = suma / 5;

    printf("----------------------------\n");
    printf("Promedio Final: %.2f\n", promedio);

    return 0;
}
```
## Bidimensional
Es un arreglo que tiene varias filas y columnas también se lo llama matriz.
```c
#include <stdio.h>
int main() {
    // 1. Declarar e Inicializar. 
    int notas[3][4] = {
        {85, 90, 78, 92}, // Estudiante 1
        {70, 88, 95, 80}, // Estudiante 2
        {92, 85, 89, 94}  // Estudiante 3
    };

    printf("--- Registro de Notas (Matriz) ---\n\n");

    // 2. Recorrer la matriz usando bucles. 
    // El bucle exterior controla las filas (Estudiantes)
    for (int fila = 0; fila < 3; fila++) {
        printf("Estudiante %d: ", fila + 1);
        
        int sumaEstudiante = 0;

        // El bucle interior controla las columnas (Materias)
        for (int col = 0; col < 4; col++) {
            // Acceder al elemento usando [fila][columna]
            printf("[%d] ", notas[fila][col]);
            sumaEstudiante += notas[fila][col];
        }

        // Calcular y mostrar el promedio individual de este estudiante
        float promedio = (float)sumaEstudiante / 4;
        printf(" -> Promedio: %.2f\n", promedio);
    }

    printf("\n----------------------------------\n");
    return 0;
}
```
## Tridimencional 
Arreglo que tiene varias filas, columnas y profundidad.
Se declara primero las capas, luego las filas y finalmente las columnas, siendo de la siguiente manera: m[capas][filas][columnas].
```c
#include <stdio.h>

int main() {
    int colegios[2][3][4] = {
        // Escuela 1 (Capa 0)
        {
            {85, 90, 78, 92}, // Estudiante 1
            {70, 88, 95, 80}, // Estudiante 2
            {92, 85, 89, 94}  // Estudiante 3
        },
        // Escuela 2 (Capa 1)
        {
            {90, 92, 85, 88}, // Estudiante 1
            {75, 80, 70, 85}, // Estudiante 2
            {88, 91, 93, 90}  // Estudiante 3
        }
    };

    printf("--- Reporte Global de Calificaciones (3D) ---\n\n");

    // Recorrer el arreglo usando tres bucles 'for' anidados
    for (int escuela = 0; escuela < 2; escuela++) {
        printf("==== SEDE / ESCUELA %d ====\n", escuela + 1);

        for (int estudiante = 0; estudiante < 3; estudiante++) {
            printf("  Estudiante %d: ", estudiante + 1);

            for (int materia = 0; materia < 4; materia++) {
                printf("[%d] ", colegios[escuela][estudiante][materia]);
            }
            printf("\n"); 
        }
        printf("\n"); 
    }

    return 0;
}
```
<br>

<p align="right">
  <a href="../README.md"><code>◀ Regresar</code></a>
  <a href="#top"><code>▲ Subir</code></a>
  <a href="Ejercicios.md"><code>Siguiente ▶</code></a>
</p>
