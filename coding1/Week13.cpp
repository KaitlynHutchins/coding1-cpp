// Kaitlyn Hutchins
// Inheritance
// Week 13

#include<iostream>
#include <string>

using namespace std;

bool debug = true;

class human {
private:
protected:
	string name;
	int health = 10;
	int damage = 4;

public:
	human(string givenName, int givenHealth = 10, int baseDamage = 4) {
		name = givenName;
		health = givenHealth;
		damage = baseDamage;

		cout << "A new human has arrived!\n";
		//SayHello();
	}

	 human() {
		//SayHello();
	}

	void SayHello() {
		cout << "My name is " << name << " and my health is " << health << ".\n";
		cout << "I can do " << damage << " damage!\n";
	}

	virtual void SetHealth(int byAmount) {

		if (health < 0) {
			health = 0;							// clamping health to be no lower than zero
		}
		if (health > 100) {
			health = 100;						// clamping health to be no higher than 100
		}

		health += byAmount;
		if (debug) {
			cout << "at top of SetHealth(byAmount), health = " << health << ", byAmount = " << byAmount << ".\n";
		}

		if (health < 0) {
			health = 0;							// clamping health to be no lower than zero
		}
		if (health > 100) {
			health = 100;						// clamping health to be no higher than 100
		}

	}

	void SetName(string givenName) {
		name = givenName;
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

	string GetName() {
		return name;
	}
};												// end of human class

// if private or protected, all public things in the human class are made private
class barbarian :public human {
	// this class should inherit all fo the things that a human has.

public:
	//Constructor (optional, will run after human constructor)
	/*
	 barbarian() {
		cout << "A fierce barbarian from the north approches!\n";
		health = 45;						//must change protection for health from private to protected
		
		SayHello();							// This function is a hyooman function
		Yell();
	}
	*/

	barbarian(string givenName, int givenHealth = 10, int givenBaseDamage = 2) {
		SetName(givenName);
		SetHealth(givenHealth);						// this lets us clamp
		SetDamage(givenBaseDamage);					// this lets us clamp
	}


	void Yell() {
		cout << "The barbarian unleashes an inhuman yell, boosting all of his team's stats.\n";
	}

	void doubleSwing(human& target) {
		cout << "The barbarian swings both weapons at " << target.GetName() << "!\n";
		
		// call the SetDamage() function on the human target
		// use the damage from "This" instance of a barbarian
		// double the damage, because it's a double swing, obviously.
		int tempDamage = this->GetDamage() * 2;
		target.SetHealth(-tempDamage);										// subtract the damage of teh two swings from
																			// the target's health.
	}	

};												// end of barbarian class


// distill your learning.
// create a shopkeep class that inherits from the human class.
// add a dropGold() function.
// add a shopName variable

class shopkeep : public human {
private:
	string shopName;
	int gold = 15;

public:


	void SetShopName(string name) {
		shopName = name;
	}

	void SetHealth(int byAmount) override {
		health -= byAmount;

		if (health <= 0) {
			cout << "The proprietor of " << shopName << " has died!\n";
			cout << "They dropped " << gold << " gold.\n";
		}
	}

	string GetShopName() {
		return shopName;
	}

	void dropGold() {
		cout << "The shop keeper dropped 10 gold!\n";
	}


};

int main() {

	barbarian bane("Bane", 22, 4);
	bane.SayHello();

	cout << endl;

	human jane("Jane", 10, 2);

	jane.SayHello();

	jane.SetDamage(10);
	jane.SetHealth(5);

	jane.SayHello();

	cout << "Damage: " << jane.GetDamage() << ".\n";
	cout << "Health: " << jane.GetHealth() << ".\n";

	cout << "\n\nLet's have the barbarian attack jane.\n";
	
	bane.doubleSwing(jane);
	jane.SayHello();


	cout << "\n\nThe barbarian approches a shopkeeper.\n";

	shopkeep papaJohn;
	papaJohn.SetName("Papa John");
	papaJohn.SetHealth(0);
	papaJohn.SetShopName("Papa John's Pizza Tavern");

	bane.SetDamage(20);
	bane.doubleSwing(papaJohn);

	papaJohn.SayHello();



	return 0;
}