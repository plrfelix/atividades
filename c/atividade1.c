#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct usuario {
  char* nome;
  char* email;
  int telefone;
} usuario;

int main(void) {
  char texto[] = "Eryck Soares Nunes|eryck@email.com|912345678";
    
  usuario u;
  u.nome = strtok(texto, "|");
  u.email = strtok(NULL, "|");
  u.telefone = atoi(strtok(NULL, "|"));
	
  printf("Nome:\t%s\n", u.nome);
  printf("Email:\t%s\n", u.email);
  printf("Fone:\t%d\n", u.telefone);
  
  return 0;
}
