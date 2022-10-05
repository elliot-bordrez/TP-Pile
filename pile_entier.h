#pragma once
#include <iostream>

class pile_entier {
private:
	int *pile, taille, hauteur;
public:
	pile_entier(int pile);
	~pile_entier();
	void empile(int pile);
	int depile();
	int pleine();
	int vide();
};

