#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct pokemon {
  char* name;
  char* nature;
};

struct pokemon randPokemon() {
  struct pokemon p;
  char * legendary[9] = {"Uxie", "Mesprit", "Azelf", "Dialga", "Palkia", "Heatran", "Regigigas", "Giratina", "Cresselia"};
  char * nat[4] = {"modest", "bold", "calm", "timid"};
  p.name = legendary[rand() % 9];
  p.nature = nat[rand() % 4];
  return p;
}

void printPoke(struct pokemon p){
  printf("%s has the nature of: %s\n", p.name, p.nature);
}

void edit(struct pokemon *p, char *newName, char *newNature) {
  p->name = newName;
  p->nature = newNature;
}

int main() {
  srand(time(NULL));
  printPoke(randPokemon());
  printPoke(randPokemon());
  printPoke(randPokemon());
  printPoke(randPokemon());
  struct pokemon pokeMonster;
  pokeMonster.name = "Rayquaza";
  pokeMonster.nature = "angry";
  printPoke(pokeMonster);
  edit(&pokeMonster, "MewTwo", "calm");
  printPoke(pokeMonster);
}
