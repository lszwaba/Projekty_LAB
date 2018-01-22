#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *
 */


void toFile(char *string){
FILE *plik;
plik=fopen("toProject_2.txt","a");
  if(plik==NULL){
    fprintf(stderr,"Nie można otworzyc pliku\n");
  }
  else{
   
   fprintf(plik,"%s\n",string);
   fclose(plik);
   printf("%s\n",string);

  }
}

void wordToF(int a,char *str[]){
  int i;
  for ( i = 1; i < a; i++) {
  toFile(str[i]);

  }

}


int main(int argc, char *argv[]) {
if(argc>=2)   {
wordToF(argc,argv);
}
else{
    printf("Brak argumentow\n");
} 

return 0;
}

