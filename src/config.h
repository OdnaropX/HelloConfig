#ifndef CONFIG_H
#define CONFIG_H

#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

bool setar_configuracao(const char *conf_key, const char *conf_value, const char *section, ALLEGRO_CONFIG *config);


bool criar_configuracao(char *name);

bool salvar_configuracao(char *name, ALLEGRO_CONFIG *config);

ALLEGRO_CONFIG *carregar_configuracao(const char *name);

const char *pegar_configuracao(const char *conf_key, const char *section, const ALLEGRO_CONFIG *config);
#endif
