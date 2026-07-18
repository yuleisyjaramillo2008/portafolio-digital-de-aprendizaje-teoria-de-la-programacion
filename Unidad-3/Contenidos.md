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
    // 1. Declarar e inicializar el arreglo unidimensional con las ventas de 7 días
    float ventasDiarias[7] = {150.50, 230.00, 85.40, 310.20, 195.80, 420.00, 110.10};
    
    float totalVentas = 0.0;
    float promedioVentas = 0.0;
    int diasExcelenteVenta = 0;

    printf("--- HISTORIAL DE VENTAS DE LA SEMANA ---\n\n");

    // 2. Recorrer el vector
    for (int numeroDia = 0; numeroDia < 7; numeroDia++) {
        printf("Dia %d: $%.2f\n", numeroDia + 1, ventasDiarias[numeroDia]);
        
        totalVentas += ventasDiarias[numeroDia];
    }

    promedioVentas = totalVentas / 7;

    printf("\n----------------------------------------\n");
    printf("Total acumulado: $%.2f\n", totalVentas);
    printf("Promedio diario: $%.2f\n", promedioVentas);
    printf("----------------------------------------\n");

    return 0;
}
```
## Bidimensional
Es un arreglo que tiene varias filas y columnas también se lo llama matriz.
```c
#include <stdio.h>

int main() {
    // 0 = Libre, 1 = Ocupado
    int salaCine[5][6] = {
        {1, 1, 0, 0, 1, 1}, // Fila 1 (A)
        {0, 0, 1, 1, 0, 0}, // Fila 2 (B)
        {1, 0, 0, 0, 0, 1}, // Fila 3 (C)
        {0, 0, 0, 0, 0, 0}, // Fila 4 (D)
        {1, 1, 1, 1, 1, 1}  // Fila 5 (E)
    };

    int asientosLibres = 0;
    int asientosOcupados = 0;

    // Recorrer la matriz 
    for (int numeroFila = 0; numeroFila < 5; numeroFila++) {

        for (int numeroColumna = 0; numeroColumna < 6; numeroColumna++) {
            // Validar el estado del asiento utilizando la matriz corregida
            if (salaCine[numeroFila][numeroColumna] == 0) {
                asientosLibres++;
            } else {
                asientosOcupados++;
            }
        }
    }

    printf("Asientos Libres (L): %d\n", asientosLibres);
    printf("Asientos Ocupados (X): %d\n", asientosOcupados);
   

    return 0;
}

```
## Tridimencional 
Arreglo que tiene varias filas, columnas y profundidad.
Se declara primero las capas, luego las filas y finalmente las columnas, siendo de la siguiente manera: m[capas][filas][columnas].
```c
#include <stdio.h>

int main() {
    // Pago por hora de trabajo en dólares
    const float pagoHora= 10.00;

    // Arreglo 3D: [2 Sucursales] x [3 Trabajadores] x [5 Dias Laborales]
    int horasTrabajadas[2][3][5] = {
        // SUCURSAL 1 (Capa 0) - Norte
        {
            {8, 8, 8, 8, 8},  // Trabajador 1 
            {6, 7, 8, 6, 5},  // Trabajador 2 
            {8, 8, 9, 8, 4}   // Trabajador 3 
        },
        // SUCURSAL 2 (Capa 1) - Sur
        {
            {8, 8, 0, 8, 8},  // Trabajador 1 
            {8, 9, 8, 8, 8},  // Trabajador 2 
            {5, 5, 5, 5, 5}   // Trabajador 3 
        }
    };

    printf("--- REPORTE DE HORAS Y NÓMINA SEMANAL ---\n\n");

    // Bucle exterior: Recorre las Sucursales
    for (int i= 0; i < 2; i++) {
        printf(" SUCURSAL %d\n", i + 1);

        // Bucle medio: Recorre los Trabajadores
        for (int j = 0; j < 3; j++) {
            printf(" Trabajador %d -> ", j + 1);
            
            int totalHorasSemana = 0;

            // Bucle interior: Recorre los 5 Días Laborales
            for (int k = 0; k < 5; k++) {
                // Acumular las horas trabajadas en la semana
                totalHorasSemana += horasTrabajadas[i][j][k];
            }

            // Calcular el sueldo del fin de semana
            float sueldoSemanal = totalHorasSemana * pagoHora;

            // Mostrar el total de horas y el dinero a pagar
            printf(" Total: %d hrs  Sueldo: $%.2f\n", totalHorasSemana, sueldoSemanal);
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
