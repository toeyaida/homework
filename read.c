#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
FILE *file;
char str[5];
file = fopen ("data.txt","r");
if(file==NULL){
fprintf(stderr,"\nError opend file\n");
exit(1);
}
fscanf(file,"%s",str);
printf("%s",str);
fclose(file);
}
