#include <stdio.h>
#include <stdlib.h>
#include <mcheck.h> 
#include <string.h>
#define MAX_LEN 1024 

char** readMas(int count){
	char buffer[MAX_LEN];
	char **mas; 
	mas = (char **)malloc(sizeof(char *)*count);
    for (int i = 0; i < count ; i++){
		fgets(buffer, MAX_LEN, stdin);
        //scanf("%s[^\n]", buffer); 
        mas[i] = (char *)malloc(sizeof(char)*strlen(buffer)); 
        strcpy(mas[i], buffer); 
    }
    return mas; 
}

void printMas(char **mas, int count){
    for (int i = 0; i < count ; i++){
        printf("%s", mas[i]);
    }
}

void freeMas(char **mas, int count){
	for (int i = 0; i < count; i++){
        free(mas[i]); 
    }
    free(mas); 
}
    void sort(char **uk, int n)
    {
        char *tmp;
        int koll=0;
        for(int j=0; j<n; j++)
        {
            for(int i=0; i<n-1; i++)
            {
                if((strcmp(uk[i], uk[i+1]))>0)
                {
                    tmp = uk[i];
                    uk[i] = uk[i+1];
                    uk[i+1] = tmp;
                   koll++;
                }
            }
                    }
                    printf("Колличество перестановок = %d\n", koll);
                    printf("Первая буква первой строк = %c\n", uk[0][0]);
    }


int main(int argc, char **argv){
	char **mas = NULL; 
	int n;
	printf("Введите число строк\n");
	scanf("%d\n", &n);
	int count = n;
	mtrace();
	mas = readMas(count);
	sort(mas, n);
	printMas(mas, n);
    freeMas(mas, count);
}

