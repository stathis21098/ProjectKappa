#pragma once

#include <iostream>

class Monster {
  private:
    // Info
    std::string name;
    int level;
    std::string category;
    std::string rarity;
    // Stats
    int health_points;
    int defence;
    int attack_damage;
    int attack_speed;
    int critical_chance;
    int magic_damage;
    int charges;
  public:
    // Getters
    // Info
    std::string get_name();
    int get_level();
    std::string get_category();
    std::string get_rarity();
    // Stats
    int get_health_points();
    int get_defence();
    int get_attack_damage();
    int get_attack_speed();
    int get_critical_chance();
    int get_magic_damage();
    int get_charges();

    // Setters
    // Info
    void set_name(std::string);
    void set_level(int);
    void set_category(std::string);
    void set_rarity(std::string);
    // Stats
    void set_health_points(int);
    void set_defence(int);
    void set_attack_damage(int);
    void set_attack_speed(int);
    void set_critical_chance(int);
    void set_magic_damage(int);
    void set_charges(int);

    // Displays
    void display_info();
    void display_stats();
};
