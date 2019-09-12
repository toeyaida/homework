#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
FILE *file;
file = fopen ("data.txt","w");
if(file==NULL){
fprintf(stderr,"\nError opend file\n");
exit(1);
}
fprintf(file,"%s","Hello");
fclose(file);
}
