# include <stdio.h>
int main (){
    int paquetes, i, p=0, n=0, f=0;
    float distancia, peso, suma, total=0;
    char tipo;
    do{
       printf("Ingrese la cantidad de paquetes\n"); 
       scanf("%i", &paquetes);
    }while(paquetes<=0);


    for(i=1; i<=paquetes; i++){
        suma=0;
        printf("----------------------------------------\n");
        printf("Paquete %i:\n", i);

        do{
            printf("Ingrese el peso del paquete %i en kg \n", i);
            scanf("%f", &peso);
        }while (peso<=0);
        if (peso>20){
            suma=suma+10;
        }
        do{
            printf("Ingrese a que distancia se llevara el envio en km \n");
            scanf("%f", &distancia);
        }while (distancia<=0);

        suma=suma+distancia*1.25;

        do{
            printf("Ingrese el tipo de paquete\n");
            printf("Normal=N\n");
            printf("Fragil=F\n");
            printf("Peligroso=P\n");
            scanf(" %c", &tipo);
        }while ((tipo!= 'N') && (tipo!='F') && (tipo!= 'P'));

        if (tipo == 'F'){
            suma=suma+5;
            f++;
        } else if (tipo == 'P'){
            suma=suma+15;
            p++;
        }else{
            n++;
        }
        printf("El costo individual del paquete %i es: %.2f\n", i, suma);
        total+=suma;
    }
    printf("--------------------------------------------------------------------\n");
    printf("REPORTE\n");
    printf("El costo total del envio es: %.2f\n", total);
    printf("Donde:\n");
    if (f!=0){
        printf("%i son fragiles\n", f);
    }
    if (p!=0){
        printf("%i son peligrosos\n", p);
    }
    if (n != 0){
        printf("%i son normales\n", n);
    }
       
    
    return 0;
}