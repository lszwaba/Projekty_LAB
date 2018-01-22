

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void showUpper(char *input){
   FILE *File;

   File=fopen (input , "r");

  if ((File) == NULL)
      fprintf(stderr,"Nie mozna otworzyc pliku\n");
  else
  {
    int znak ;
    znak=getc(File);
    while (! feof(File)){

    printf("%c",toupper(znak) );
    znak=getc(File);
  }

  }
 fclose(File);
}
void showLower(char *input){
   FILE *File;

   File=fopen (input, "r");

  if ((File) == NULL)
      fprintf(stderr,"Nie mozna otworzyc pliku\n");
  else
  {
    int znak ;
    znak=getc(File);
    while (! feof(File)){

    printf("%c",tolower(znak) );
    znak=getc(File);
  }

  }
 fclose(File);
}
void showNormal(char *input){
   FILE *File;

   File=fopen (input , "r");

  if ((File) == NULL)
      fprintf(stderr,"Nie mozna otworzyc pliku\n");
  else
  {
    int znak ;
    znak=getc(File);
    while (! feof(File)){

    printf("%c",znak);
    znak=getc(File);
  }

  }
 fclose(File);
}
void warunki(int num, char  *in[]){
  char tl[]="-l";
  char tb[]="-b";
  if(num==2){
       showNormal(in[1]);
      }
  else if(num>=3){
      if(strcmp(in[1],tl)==0){
        showLower(in[2]);
      }
      else if(strcmp(in[1],tb)==0){
        showUpper(in[2]);
      }
  }
  else{
    printf("Niepodano pliku\n");
  }
}

int main(int argc, char  *argv[]) {
   warunki(argc,argv);
}
