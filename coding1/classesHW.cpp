// Kaitlyn Hutchins
// Classes in C++ Homework
// Week 12

#include<iostream>
#include <string>

using namespace std;

class human {
private:
	string name;
	int health = 10;
	int damage = 4;

public:
	human(string givenName, int givenHealth, int baseDamage) {
		name = givenName;
		health = givenHealth;
		damage = baseDamage;

		cout << "A new human has arrived!\n";
	}

	void SayHello() {
		cout << "My name is " << name << " and my health is " << health << ".\n";
		cout << "I can do " << damage << " damage!\n";
	}

	void SetHealth(int byAmount) {
		health = byAmount;
	}

	void SetDamage(int givenDamage) {
		damage = givenDamage;
	}

	int GetHealth() {
		return health;
	}

	int GetDamage() {
		return damage;
	}
};


int main() {
	human jane("Jane", 10, 2);

	jane.SayHello();

	jane.SetDamage(10);
	jane.SetHealth(100);

	jane.SayHello();

	cout << "Damage: " << jane.GetDamage() << ".\n";
	cout << "Health: " << jane.GetHealth() << ".\n";

	return 0;
}