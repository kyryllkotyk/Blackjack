#pragma once
#include "Card.h"
#include <vector>

class Player
{
	Player();
public:
	vector<Card> cards() {
		return cards_;
	}
	void hit() {

	}
	void stand() {

	}
	//sum > 21 = bust, sum = 21 = win IF first turn, else sum <= 21 check against dealer
	void winStatus() {
		
	}

	int cardSum() {

	}
	bool isStanding();


private:
	vector<Card> cards_;
	bool standing = false;
};

