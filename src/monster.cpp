#include "../include/monster.h"

// Getters
// Info
std::string Monster::get_monster_name() {
  return this->monster_name;
}

int Monster::get_level() {
  return this->level;
}

std::string Monster::get_category() {
  return this->category;
}

std::string Monster::get_rarity() {
  return this->rarity;
}
// Stats
int Monster::get_health_points() {
  return this->health_points;
}

int Monster::get_defence() {
  return this->defence;
}

int Monster::get_attack_damage() {
  return this->attack_damage;
}

int Monster::get_attack_speed() {
  return this->attack_speed;
}

int Monster::get_critical_chance() {
  return this->critical_chance;
}

int Monster::get_magic_damage() {
  return this->magic_damage;
}

int Monster::get_charges() {
  return this->charges;
}

// Setters
// Info
void Monster::set_monster_name(std::string monster_name) {
  this->monster_name = monster_name;
}

void Monster::set_level(int level) {
  this->level = level;
}

void Monster::set_category(std::string category) {
  this->category = category;
}

void Monster::set_rarity(std::string rarity) {
  this->rarity = rarity;
}
// Stats
void Monster::set_health_points(int health_points) {
  this->health_points = health_points;
}

void Monster::set_defence(int defence) {
  this->defence = defence;
}

void Monster::set_attack_damage(int attack_damage) {
  this->attack_damage = attack_damage;
}

void Monster::set_attack_speed(int attack_speed) {
  this->attack_speed = attack_speed;
}

void Monster::set_critical_chance(int critical_chance) {
  this->critical_chance = critical_chance;
}

void Monster::set_magic_damage(int magic_damage) {
  this->magic_damage = magic_damage;
}

void Monster::set_charges(int charges) {
  this->charges = charges;
}
