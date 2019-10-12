#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
  FILE *fp;
  char str[128], d[128];
  strcpy(d, (argv[2]));

  if((fp=fopen(argv[1], "r"))==NULL) {
    printf("Не удается открыть файл.\n");
    exit(1);
  }

  while(!feof(fp)) {
    if(fgets(str, 126, fp)) {
      if(( str==d))
		
	 {
	  fputs(str, fp);
    printf("%s", str);
  }
  }
}

  fclose(fp);

  return 0;
}
