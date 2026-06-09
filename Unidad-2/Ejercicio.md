# 1. Planteamiento del problema
Las empresas de envíos procesan miles de paquetes al día. Calcular los precios a mano es lento y causa errores, ya que el costo varía según la distancia, el peso y el tipo de mercancía.
Este programa automatiza la facturación en ventanilla aplicando las siguientes reglas de negocio:
+ **Costo Base:** Se calcula multiplicando los km de distancia por $1.25.
+ **Restricción de Peso:** Si el paquete supera los 20 kg, se aplica un recargo extra de $10.00.
+ **Carga Frágil:** Si el producto es delicado, se suma un seguro obligatorio de $5.00.
+ **Carga Peligrosa:** Si es material peligroso, se añade un recargo fijo de $15.00
# 2. Análisis del problema
## 2.1. Entrada
Lo que el usuario necesita ingresar es la cantidad de paquetes, el peso de cada paquete, la distancia de entrega por cada paquete y el tipo de paquete.
## 2.2. Proceso
### 2.2.1. Validación de datos
Cada uno de los datos ingresados por el usuario para que el proceso se lleve sin problema para todo estos se necesita una **estructura condicional** para volver a pedir los datos hasta que sean los esperados: <br>
+ **Cantidad de paquetes:** Este dato no puede ser menor a 0 ni igual a 0.
+ **Peso y distancia:** En ambos casos toca controlar que no sean negativos ni igual a 0.
+ **Tipo:** Para esto tenemos que delimitar que el usuario solo ingrese las tres opciones disponibles que son Normal, Frágil y peligrosa.
### 2.2.2. Repetición para cada paquete
Para que el usuario pueda ingresar los datos requeridos por cada uno de los paquetes es necesario que se use un bucle repetitivo, en este caso "for" ya que sabemos cuantas veces se tiene que ingresar (la cantidad de paquetes ingresado por el usuario. <br>
De esta manera inicializaríamos un contador en uno, la condición sería que el contador tiene que ser menor o igual al número de paquetes e iríamos sumando 1 por cada repetición, cabe señalar que esto irá después de pedir al usuario la cantidad de paquetes. <br>
### 2.2.3. Cálculos
El cálculo principal es la multiplicación de la distancia por $1.25 para esto se necesita lo que es un acumulador para ir guardando el proceso.<br>
Luego usamos lo que es un condicional para establecer que si el peso supera los 20 kg se suma $10 al acumulador suma. <br>
Seguimos con el mismo lógica y utilizamos otro condicional para establecer si es que el paquete es frágil se suman $5 adicionales, pero si es peligroso ase suman $15. <br>
Imprimimos el resultado de la suma, pero como se tiene que obtener un resultado por cada paquete y la suma es un acumulador tenemos que inicializar la variable suma al inicio de cada ejecución del bucle de preguntas, pero al final de cada ejecución se almacena la suma en otra variable y se imprime esta. <br>
Además, usamos otro condicional para contar cuantos paquetes son de qué tipo, para esto usamos también 3 contadores más. <br>
## 2.3. Salida
Pala la salida tenemos lo siguiente: <br>
+ El precio de cada paquete.
+ El costo total. 
+ Cuantos paquetes de qué tipo hay. 

