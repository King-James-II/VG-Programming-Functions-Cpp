#include <iostream>
#include <string>
using namespace std;

// Function to calculate experience points required to reach a level (iterative approach)
int calculateExperience(int level) {
    return level * 100;
}

// Function to calculate damage dealt by the player to an enemy
int calculateDamage(int playerAttack, int enemyDefense) {
    return playerAttack - enemyDefense;
}

// Function to increase player health
void increaseHealth(int& health, int amount) {
    health += amount;
}

// Overloaded function to print player stats with default health value
void printPlayerStats(string name, int level, int health = 100) {
    cout << "Player: " << name << ", Level: " << level << ", Health: " << health << endl;
}

int main() {
    // Program demonstrating various programming concepts using a video game example.

    // Iteration: Calculating experience points required to reach levels using iterative approach
    int maxLevel = 10;
    for (int level = 1; level <= maxLevel; ++level) {
        cout << "Level " << level << " requires " << calculateExperience(level) << " experience points." << endl;
    }

    // Function with parameters: Calculating damage dealt to an enemy
    int playerAttack = 50;
    int enemyDefense = 30;
    int damage = calculateDamage(playerAttack, enemyDefense);
    cout << "Player attacks! Damage dealt: " << damage << endl;

    // Variable scope: Declaring and using variables within different scopes
    {
        int health = 100;
        increaseHealth(health, 20);
        cout << "Player health: " << health << endl;
    }

    // Passing variables by reference: Increasing player health
    int playerHealth = 80;
    increaseHealth(playerHealth, 50);
    cout << "Player health after healing: " << playerHealth << endl;

    // Overloading functions: Printing player stats with different parameter combinations
    printPlayerStats("Hero", 5, 120);
    printPlayerStats("Villain", 8); // Using default health value

    return 0;
}
