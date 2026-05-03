<div align="center">
  <img src="../Imagenes/ejerciciosConEstructuraSecuencial.png" 
width="100%">
</div>

<br>

# Planteamiento de problema
Un propietario de un local comercial necesita calcular **el salario que debe pagar a cada uno de sus tres enpleados al final del mes**. El pago de cada trabajador depende de las horas trabajadas durante ese periodo.
Se sabe que un empleado que trabaja una jornada completa de 8 horas diarias durante 5 días a la semana recibe un salario de 600 dólares al mes.
Además, se aplicará un descuento del 8% sobre el salario bruto de cada empleado, el cual representa una deducción obligatoria. **Después de este descuento, se obtiene el salario neto final que recibirá cada trabajador**.
Adicional a esto el propietario tambien queiere saber **cuanto dinero gastara en los salarios de este mes.**
# Análisis del problema
Para resolver el problema lo primero que se tiene que hacer es identificar y dividir el ejercicio en las partes que conforma un algoritmo, es decir, establecer lo que se va a hacer en la **entrada**, **proceso**, y **salida**:
## Entrada
En esta sección se pide al usuario que ingrese las horas trabajadoa por cada empleado (empleado_1, empleado_2 y empleado_3), cabe recalcar que las variables necesarias para el algoritmo ya deben de eatr definidas con anterioridad.
## Proceso
Lo primero es saber cuanto se tiene que pagar a los empleados por hora para esto estaremos haciendo lo siguieente, sabemos que se le paga 600 dolares al mes a un empleado que trabaja 8 horas diarias durante 5 días de la semana. Lo que nos da que el empleado hipotético trabjo durante 20 días al mes si multiplicamos por la cantidad de horas diarias (8h) nos da 160h, luego dividimos los 600 dólares por 160 dandonos **3,35 dólares por cada hora**.
Como ya se ingreso la cantidad de horas que trabajó cada empleado multiplicamos el valor hantes obtenido por las horas respectivas. 
En lo que se trata el descuento del 8% del sueldo de cada uno de los empleados, se mutiplicará el salario bruto obtenido el el proceso anterior por 0,08 dandonos así el salario neto de cada uno de los empleados.
Por último, para obtener lo que el dueño tiene que gastar en el mes en salarios sumamos el el salario neto de cada empleado.
## Salida
Después de haber realizado el proceso tendremos los siguientes datos de salina:
* La cuanto se paga por hora
* Salario neto de cada empleado: empleado 1, empleado 2, y empleado 3.
* Lo que tiene que desembolsar el dueño por el pago de salarios en este mes.
Observando los datos de salida se comprueba que el problema esta resuelto. 
# Diseño del algoritmo 
*Para el diseño de algoritmo se utiliza PSeInt*

# Codificación 
# Validación 
