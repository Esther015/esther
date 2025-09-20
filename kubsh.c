#include <stdio.h>
#include <string.h>

int main(){

 printf("$ ");

 char input[100];
 fgets(input, 100, stdin);
 input[strlen(input) - 1] = '\0';

 printf("%s: commande not found\n", input);

 return 0;
}
//ce aue j'ai copie
include <stdio.h>
#include <string.h>

int main(){
 char input[100];
 printf("$ ");
 while(1){

  if( fgets(input, 100, stdin)== NULL);{
  print("\nSortir par ctrl+d\n");
  break;
  }
  input[strlen(input) -1]= '\0';

  if(strcmp(input, "exit")==0){
  printf(" exit from programm\n");
  break;}
  printf("%s: commamd not found\n", input):
 }
