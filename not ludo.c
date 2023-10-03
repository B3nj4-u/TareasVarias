/*No es mucho pero es trabajo honesto
Matías Ampuero, Fabián Arellano, Francisca Laibe, Pedro Ulloa*/



//***************ignorar esto*****************
/*Casillas de inicio:
azul:0 (nosotros)
rojo:13
verde 26
amarillo:39

fichas a salvo:
8
21
34
47
51-56

*/
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<sys/wait.h>

typedef struct fichaZigzagoon{
    int id;
    int casilla;
    bool vivo;
}zigzagoon;


int lanzarDado();

int main(){
    #define NUM_HIJOS 6
    int pid = fork();   // otosan
    if (pid != 0)
    {
//declaramos las variables
    int gameover=0, sacar, mover, opcion, dado1=0, dadotruenochocolate=0,tablero=57,i,ampuerito=0,pausa,benjita,drimsito=0;
    zigzagoon amarillo[3];
    zigzagoon rojo[3];
    zigzagoon azul[3];
    zigzagoon verde[3];
    printf("Se creó el proceso: %d", pid);
}
else {
//inicializar datos de las fichas
    for (i=0; i<4;i++){
        amarillo[i].id=i;
        amarillo[i].vivo=false;
        amarillo[i].casilla=39;
        rojo[i].id=i;
        rojo[i].vivo=false;
        rojo[i].casilla=13;
        azul[i].id=i;
        azul[i].vivo=false;
        azul[i].casilla=0;
        verde[i].id=i;
        verde[i].vivo=false;
        verde[i].casilla=26;
        printf(" Se creó el proceso: %d\n", getpid());
        }
    }
    
    printf("Bienvenido a Ludopatia\nSeleccione una opcion:\n1.-Jugar Ludopatia\n2.-Salir\n");
    scanf("%d", &opcion);
    system("clear");

    while (opcion!=1 && opcion!=2){
        printf("Opcion no valida\nVuelve a escribir una opcion\n");
        scanf("%d", &opcion);
       
    }
    
    switch (opcion){
    case 1:
        while (gameover!=1){

            for (i = 0; i < 4; i++){
                if (azul[i].vivo==true){
                    printf("\nLa ficha numero %d, esta en la casilla %d",i,azul[i].casilla);
                    
                }else{
                    printf("\nLa ficha %d está en base", i);
                    
                }
            }


            printf("\nIngrese un numero para lanzar los dados\n");
            scanf("%d", &pausa);
            system("clear");
            
            dado1=lanzarDado();
            dadotruenochocolate=lanzarDado();
            printf("\n%d\n%d\n",dado1,dadotruenochocolate);

//**INICIO DE TURNO*
            if (dado1!=6 && dadotruenochocolate!=6){
                if (ampuerito!=0){
                    do{
                        for (i = 0; i < 4; i++){
                            if (azul[i].vivo==true){
                                printf("\nLa ficha numero %d, esta en la casilla %d",i,azul[i].casilla);
                            }else{
                                printf("\nLa ficha %d está en base", i);
                            }
                        }
                        
                        printf("\nQue ficha desea mover?\n");
                        scanf("%d", &mover);
                        while(azul[mover].casilla+(dado1+dadotruenochocolate)>57){
                            int meta = 57-azul[mover].casilla;
                            printf("Movimiento no permitido, para la meta necesita un: %d\n",meta);
                            scanf("%d",&mover);
                            break;
                        }
                        system("clear");
                    } while (azul[mover].vivo==false);
                    
                    azul[mover].casilla = (azul[mover].casilla)+(dado1+dadotruenochocolate);
                }   
            }
            
//**LO QUE PASA CUANDO SALE UN 6**
            while(dado1 == 6 || dadotruenochocolate==6){
                if (ampuerito==4){
                    do{
                        for (i = 0; i < 4; i++){
                            if (azul[i].vivo==true){
                                printf("\nLa ficha numero %d, esta en la casilla %d",i,azul[i].casilla);
                            }else{
                                printf("\nLa ficha %d está en base", i);
                            }
                        }
                        printf("\nQue ficha desea mover?\n");
                        scanf("%d", &mover);
                        while(azul[mover].casilla+(dado1+dadotruenochocolate)>57){
                            int meta = 57-azul[mover].casilla;
                            printf("Movimiento no permitido, para la meta necesita un: %d\n",meta);
                            scanf("%d",&mover);
                            break;
                        }
                        azul[mover].casilla+=dado1+dadotruenochocolate;
                    } while(mover!=0 && mover!=1 && mover!=2 && mover!=3);
                    break;
                }else if(ampuerito==1 || ampuerito==2 || ampuerito==3){
                    for (i = 0; i < 4; i++){
                        if (azul[i].vivo==true){
                            printf("\nLa ficha numero %d, esta en la casilla %d",i,azul[i].casilla);
                        }else{
                            printf("\nLa ficha %d está en base", i);
                        }
                    }
                    printf("\nDesea mover ficha o sacar una ficha de la base?\n1.-Mover Ficha\n2.-Sacar una ficha de base\n");
                    scanf("%d",&benjita);

                    while (benjita!=1 && benjita!=2){
                        printf("opcion no valida\n");
                        scanf("%d", &benjita);   
                    }

                    if (benjita==1){
                        printf("\nQue ficha desea mover?\n");
                        scanf("%d", &mover);
                        azul[mover].casilla = (azul[mover].casilla)+(dado1+dadotruenochocolate);

//*FUNCION REVIVIR FICHA**
                    }else if (benjita==2){ 
                        do{
                            printf("\n¿Que ficha desea sacar?\n");
                            scanf("%d",&mover);

                            while (azul[mover].vivo==true){
                                printf("La ficha ya esta viva, escoge otra\n");
                                scanf("%d",&mover);
                            }
                        } while (mover!=0 && mover!=1 && mover!=2 && mover!=3);
                        
                        azul[mover].vivo=true;
                        ampuerito++;
                    }
                    break;
//*REVIVE POR PRIMERA VEZ**                
                }else if (ampuerito==0){
                    do{
                        for (i = 0; i < 4; i++){
                        printf("\nLa ficha %d está en base", i);
                        }
                        printf("\n¿Que ficha desea sacar?\n");
                        scanf("%d",&mover);
                        system("clear");
                    }while(mover!=0 && mover!=1 && mover!=2 && mover!=3);
                    azul[mover].vivo=true;
                    ampuerito++;
//**LLEGADA A META*
/*                for(i=0; i<4; i++){
                    if
                }*/
                    break;
                }
            
            }
        } 
        break;
 
 
 
    case 2:
        exit(0);
        break;
 
 
 
    default:
        printf("opcion no valida");
        break;
    }
    return 0;
}

int lanzarDado(){  
    int dado;
    dado=rand() %6 +1;
    return dado;
}