#include <stdio.h>
int main(){
    //Variables
    float sueldoNeto1, sueldoNeto2, sueldoNeto3;
	float sueldoBruto1, sueldoBruto2, sueldoBruto3;
	float sueldoTotal, sueldoHora;
	float horas1, horas2, horas3;
	float sueldoMes, horasHipoteticas;
    float diasTrabajadosH, sueldoHipotetico;

    //Entrada
    printf("Ingrese la cantidad de horas trabajadas de empleado 1\n");
	scanf("%f", &horas1);
	printf("Ingrese la cantidad de horas trabajadas de empleado 2\n");
	scanf("%f", &horas2);
	printf("Ingrese la cantidad de horas trabajadas de empleado 3\n");
	scanf("%f", &horas3);

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
    printf("El sueldo por hora es de: %f\n", sueldoHora);
	printf("El sueldo total del primer empleado es de: %f\n", sueldoNeto1);
	printf("El sueldo total del segundo empleado es de: %f\n", sueldoNeto2);
	printf("El sueldo total del tercer empleado es de: %f\n", sueldoNeto3);
	printf("Lo que el dueño tiene que pagar en sueldos este mes es de: %f\n", sueldoTotal);


    return 0;
}