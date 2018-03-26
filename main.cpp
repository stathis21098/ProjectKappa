#include <iostream>
#include "include/monster.h"

int main() {
  Monster* monster = new Monster();

  monster->set_name("Geox");
  monster->set_level(1);
  monster->set_category("Attacker");
  monster->set_rarity("Common");

  monster->display_info();

  delete monster;

  return 0;
}
