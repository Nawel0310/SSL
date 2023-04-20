#include <stdio.h>
int main (){
    char caracter;

			FILE*fp = fopen("output.txt", "r"); //Abro el archivo de lectura
            if (fp==NULL){
                printf("Error en la lectura.\n");
            }
            else{
                printf("Mostrando información: \n");
                while (feof(fp)==0){
                    caracter=fgetc(fp);
                    printf("%c",caracter);//Imprimo cada uno de los caracteres
                }
            }
            fclose(fp);
			return 0;
}