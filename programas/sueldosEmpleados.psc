Algoritmo sueldosEmpleados
	//Datos de entrada 
	Definir sueldoNeto1, sueldoNeto2, sueldoNeto3 Como Real;
	Definir sueldoBruto1, sueldoBruto2, sueldoBruto3 Como Real;
	Definir sueldoTotal, sueldoHora Como Real;
	Definir horas1, horas2, horas3 Como Real;
	Definir sueldoMes, horasHipoteticas, diasTrabajadosH, sueldoHipotetico  como Real;
	
	//Entrada
	Escribir "Ingrese la cantidad de horas trabajadas de empleado 1";
	Leer horas1;
	Escribir "Ingrese la cantidad de horas trabajadas de empleado 2";
	Leer horas2;
	Escribir "Ingrese la cantidad de horas trabajadas de empleado 3";
	Leer horas3;
	
	//Proceso
	//Sueldo por hora 
	sueldoMes=600;
	diasTrabajadosH=20;
	horasHipoteticas=diasTrabajadosH*8;
	sueldoHora=(sueldoMes)/horasHipoteticas;
	
	//Sueldos Brutos
	sueldoBruto1=horas1*sueldoHora;
	sueldoBruto2=horas2*sueldoHora;
	sueldoBruto3=horas3*sueldoHora;
	
	//Sueldos Netos
	sueldoNeto1=sueldoBruto1-(sueldoBruto1*0.08);
	sueldoNeto2=sueldoBruto2-(sueldoBruto2*0.08);
	sueldoNeto3=sueldoBruto3-(sueldoBruto3*0.08);
	
	//Sueldo Total
	sueldoTotal=sueldoNeto1+sueldoNeto2+sueldoNeto3;
	
	//Salida
	Escribir "El sueldo por hora es de: ", sueldoHora;
	Escribir "El sueldo total del primer empleado es de: ", sueldoNeto1;
	Escribir "El sueldo total del segundo empleado es de: ", sueldoNeto2;
	Escribir "El sueldo total del tercer empleado es de: ", sueldoNeto3;
	Escribir "Lo que el dueño tiene que pagar en sueldos este mes es de: ", sueldoTotal;
	
FinAlgoritmo
