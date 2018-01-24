#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void toFile(int a, char *string[]){
 FILE *plik;
 plik=fopen(string[1],"a");
  if(plik==NULL){
    fprintf(stderr,"Nie można otworzyc pliku\n");
  }
  else{
      for(int i=2;i<a;i++){
        fprintf(plik,"%s\n",string[i]);
      }

   fclose(plik);
    for(int i=2;i<a;i++){
        printf("%s ",string[i]);
    }
  }
}

int checkIfTxt(char arg[]){
    char t[]=".txt";
    int j=0;
    int i=(strlen(arg)-4);
    while( j<=3){
        if(t[j]==arg[i]){
            j++;
            i++;
        }
        else{
           return 1;                                                             /*argumetn 2 nie jset plikiem txt*/
        }
    }
    return 0;                                                                    /*argumetn 2  jset plikiem txt*/
}

/*Sprawdza czy argument 2 jest plikiem txt*/
void conditions(int number,char *arg[]){
    if(number==1){
        printf("Nie podano pliku do zapisu\n");
    }
    else if(number==2 ){
        if (checkIfTxt(arg[1])==0)
          printf("Nie podano argumentow do zapisu\n");
        else
          printf("Nie podano pliku do zapisu\n");
    }
    else if(number>=2){
        if(checkIfTxt(arg[1])==0)
           toFile(number,arg); /*wykonujemy dalej*/
        else
          printf("Nie podano pliku do zapisu");
    }
}

int main(int argc, char* argv[]) {

    conditions(argc,argv);

    return 0;
}
