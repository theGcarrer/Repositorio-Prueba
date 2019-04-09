#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//char nombre[30] print introduce tatatata... gets nombre printf("bienvenido %s", nombre); ya seria un string
int main(int argc, char const *argv[]) {
char letra;
int intentos = 11;
int j=intentos;
char nombre[6];
int num;
string nombriu;
printf("\nBienvenidos al juego del ahorcado vas a tener 10 intentos\npara intentar solucionar la palabra escondida, pero antes\ndame un numero para seleccionar una palabra: \n");
printf("\n¿Preparados?");


//Pd: este es un intento de ahorcado mal hecho. Por favor, mantenga el codigo fuera de la vista de los niños.

while (intentos != 0) {
  for (int i = 1; i < j; i++) {
    printf("Intento numero %d, Introduce una letra:", i);
    scanf("%c\n", &letra);
    nombriu.indexOf(letra);
    intentos -= 1;
  }
}
//generador de numeros aleatorios
srand(time(NULL));
num = rand();
//Número aleatorio entre 0 y 10:
num=rand()%11;
switch(num) //donde opción es la variable a comparar
{
    case num==0:
    char palabra[6];
    palabra[0] = 'a', palabra[1] = 'n', palabra[2] = 'i', palabra[3]='v',palabra[4]='i',palabra[5]='a';
    for (int i = 0; i <= 5; i++) {
      nombre[i] = palabra[i];
    }
    for (int i = 0; i <= 5; i++){
      printf("%c", nombre[i]);
    }
    //anivia
    break;
    case num==1:
    char palabra[6];
    palabra[0] = 'a', palabra[1] = 'a', palabra[2] = 't', palabra[3]='r',palabra[4]='o',palabra[5]='x';
    for (int i = 0; i <= 5; i++) {
      nombre[i] = palabra[i];
    }
    for (int i = 0; i <= 5; i++){
      printf("%c", nombre[i]);
    }
    //aatrox
    break;
    case num==2:
    char palabra[6];
    palabra[0] = 'd', palabra[1] = 'r', palabra[2] = 'a', palabra[3]='v',palabra[4]='e',palabra[5]='n';
    for (int i = 0; i <= 5; i++) {
      nombre[i] = palabra[i];
    }
    for (int i = 0; i <= 5; i++){
      printf("%c", nombre[i]);
    }
    //draven
    break;
    case num==3:
    char palabra[6];
    palabra[0] = 'e', palabra[1] = 'z', palabra[2] = 'r', palabra[3]='e',palabra[4]='a',palabra[5]='l';
    for (int i = 0; i <= 5; i++) {
      nombre[i] = palabra[i];
    }
    for (int i = 0; i <= 5; i++){
      printf("%c", nombre[i]);
    }
    //ezreal
    break;
    case num==4:
    char palabra[6];
    palabra[0] = 'a', palabra[1] = 'a', palabra[2] = 't', palabra[3]='r',palabra[4]='o',palabra[5]='x';
    for (int i = 0; i <= 5; i++) {
      nombre[i] = palabra[i];
    }
    for (int i = 0; i <= 5; i++){
      printf("%c", nombre[i]);
    }
    //darius
    break;
    case num==5:
    char palabra[6];
    palabra[0] = 'a', palabra[1] = 'a', palabra[2] = 't', palabra[3]='r',palabra[4]='o',palabra[5]='x';
    for (int i = 0; i <= 5; i++) {
      nombre[i] = palabra[i];
    }
    for (int i = 0; i <= 5; i++){
      printf("%c", nombre[i]);
    }
    //gragas
    break;
    case num==6:
    char palabra[6];
    palabra[0] = 'i', palabra[1] = 'r', palabra[2] = 'e', palabra[3]='l',palabra[4]='i',palabra[5]='a';
    for (int i = 0; i <= 5; i++) {
      nombre[i] = palabra[i];
    }
    for (int i = 0; i <= 5; i++){
      printf("%c", nombre[i]);
    }
    //irelia
    break;
    case num==7:
    char palabra[6];
    palabra[0] = 'g', palabra[1] = 'r', palabra[2] = 'a', palabra[3]='v',palabra[4]='e',palabra[5]='s';
    for (int i = 0; i <= 5; i++) {
      nombre[i] = palabra[i];
    }
    for (int i = 0; i <= 5; i++){
      printf("%c", nombre[i]);
    }
    //graves
    break;
    case num==8:
    char palabra[6];
    palabra[0] = 'i', palabra[1] = 'l', palabra[2] = 'l', palabra[3]='a',palabra[4]='o',palabra[5]='i';
    for (int i = 0; i <= 5; i++) {
      nombre[i] = palabra[i];
    }
    for (int i = 0; i <= 5; i++){
      printf("%c", nombre[i]);
    }
    //illaoi
    break;
    case num==9:
    char palabra[6];
    palabra[0] = 'j', palabra[1] = 'a', palabra[2] = 'r', palabra[3]='v',palabra[4]='a',palabra[5]='n';
    for (int i = 0; i <= 5; i++) {
      nombre[i] = palabra[i];
    }
    for (int i = 0; i <= 5; i++){
      printf("%c", nombre[i]);
    }
    //jarvan
    break;
    case num==10:
    char palabra[6];
    palabra[0] = 'k', palabra[1] = 'e', palabra[2] = 'n', palabra[3]='n',palabra[4]='e',palabra[5]='n';
    for (int i = 0; i <= 5; i++) {
      nombre[i] = palabra[i];
    }
    for (int i = 0; i <= 5; i++){
      printf("%c", nombre[i]);
    }
    //kennen
    break;

    do {
    printf(" ________\n");
    printf("|");if (fallos = 1) {printf("        |\n");}
    printf("|");if (fallos = 2) {printf("        o\n");}
    printf("|");if (fallos = 3) {printf("       /|\\ \n");}
    printf("|");if (fallos = 4) {printf("        |\n");}
    printf("|");if (fallos = 5) {printf("       / \\ \n");}
    printf("|\n");
    printf("|\n");
    printf("|\n");
    printf("========\n");
    printf("Palabras acertadas : %d\n", aciertos);
    printf("Intentos restastes: %d\n", intentos);
    printf("Introduce una letra\n");
    scanf("%c", &letra);
  } while(fallos != 6);
return 0;
}
