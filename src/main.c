#include "config.h"
#include <stdlib.h>
#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

void erro(char *mensagem) {
  fputs(mensagem, stderr);

  exit(0);
}

void aviso(char *mensagem){
	fputs(mensagem, stderr);
}

int main() {
	ALLEGRO_CONFIG *config;
	
	config = al_load_config_file("configuration.conf");
	
	//config = carregar_configuracao("configuration.conf");
    
	if(!config)
        criar_configuracao("configuration.conf");
		
	printf("teste %s", pegar_configuracao("TIMER_DIVIDENDO", "allegro", config));
	
    return 1;
  }