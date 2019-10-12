#include <stdio.h>
#include <stdlib.h>
	

int main(int argc, char *argv[]){
  FILE *fp, *fc;
  char ch, n;
  int i=0;
	n=atoi(argv[2]);
 
	//int d=2;
	// for (int i=0 ; i=99 ; i++){
		// d[i]=i;
	
 

	if (argc < 3){
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

	 if(( ch!='2'))
		
	 {
	
	  fputc(ch, fc);
    printf("%c", ch);
}
	else {
		  fputc(' ', fc);
    printf("%c", ' ');
     i=i+1;

    if ((i=n)) {
	 fputc('2', fc);
    printf("%c", '2');
	 }
  }
}
  
  fclose(fc);

  return 0;
}
