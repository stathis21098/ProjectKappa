#include "../include/monster.h"

// Getters
// Info
std::string Monster::get_name() {
  return this->name;
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
void Monster::set_name(std::string name) {
  this->name = name;
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

// Displays
void Monster::display_info() {
  std::cout << "Name: " << this->name << std::endl;
  std::cout << "Level: " << this->level << std::endl;
  std::cout << "Category: " << this->category << std::endl;
  std::cout << "Rarity: " << this->rarity << std::endl;
}

void Monster::display_stats() {

}
