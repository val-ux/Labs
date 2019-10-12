#include <stdio.h>
#include <stdlib.h>
	
#include <string.h>
int main(int argc, char *argv[]){
  FILE *fp, *fc;
  char ch[100], d[100];
 strcpy (d, argv[2]);
	

	if (argc < 3){
		fprintf (stderr, "Мало аргументов. Используйте <имя файла> <строка>\n");
		exit (1);
	}
	
	if((fp=fopen(argv[1],"r"))==NULL) {
    printf("Невозможно открыть файл.\n");
    exit(1);
	}
	
	if((fc=fopen(argv[3],"w"))==NULL) {
    printf("Невозможно открыть файл.\n");
    exit(1);
	}
	
	  while(!feof(fp)) {
    if(fgets(ch, strlen(ch), fp)) {
    if(( ch!=argv[2]))
		
	 {
	  fputs(ch, fc);
    printf("%s", ch);
  }
}
}
 

  if(fclose(fp)){ 
	printf("Ошибка при закрытии файла.\n");
	exit(1);
 
  fclose(fp);
  fclose(fc);

  return 0;
}
}
