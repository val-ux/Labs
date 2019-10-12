#include <stdio.h>
#include <stdlib.h>
	

int main(int argc, char *argv[]){
  FILE *fp, *fc;
  char ch, n;
 // int i=0;
	n=*argv[2];
 
	
 

	if (argc < 2){
		fprintf (stderr, "Мало аргументов. Используйте <имя файла> <колличество замен> \n");
		exit (1);
	}
	
	if((fp=fopen(argv[1],"r"))==NULL) {
    printf("Невозможно открыть файл.\n");
    exit(1);
	}
	
	if((fc=fopen(argv[2],"w"))==NULL) {
    printf("Невозможно открыть файл.\n");
    exit(1);
	}
	
  while((ch=fgetc(fp)) != EOF) {

	 if(( ch!=n))
		
	 {
	
	  fputc(ch, fc);
    printf("%c", ch);
}
	else {
		  fputc(' ', fc);
    printf("%c", ' ');
    
  }
}
  
  fclose(fc);

  return 0;
}
