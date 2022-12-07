#include <iostream>
using namespace std;

class Drinks {
public:
	string brandName;
	bool isFizzy;
	bool isAlcoholic;

	Drinks(string brand_name, bool is_Fizzy, bool is_alcoholic) {
		brandName = brand_name;
		isAlcoholic = is_alcoholic;
		isFizzy = is_Fizzy;
	}
	virtual~Drinks() = 0 {

	}
};

class Sirab : public Drinks {
public:
	Sirab(string brandName, bool isFizzy, bool isAlcoholic) : Drinks(brandName, isFizzy, isAlcoholic) {

	}
};

class Fanta : public Drinks {
public:
	Fanta(string brandName, bool isFizzy, bool isAlcoholic) : Drinks(brandName, isFizzy, isAlcoholic) {

	}
};

class FuseTea : public Drinks {
public:
	FuseTea(string brandName, bool isFizzy, bool isAlcoholic) : Drinks(brandName, isFizzy, isAlcoholic) {

	}
};

class Monster : public Drinks {
public:
	Monster(string brandName, bool isFizzy, bool isAlcoholic) : Drinks(brandName, isFizzy, isAlcoholic) {

	}
};

class Person {
public:
	void Drink(Drinks& obj) {
		cout << " I drink " << obj.brandName << "\n";
	}
};

void main() {
	Person Nigar;
	Sirab water("Sirab", false, false);
	Fanta juice("Fanta", true, false);
	FuseTea fusetea("FuseTea", false, false);
	Monster energydrink("Monster", true, false);
	Nigar.Drink(fusetea);
	Nigar.Drink(energydrink);
}