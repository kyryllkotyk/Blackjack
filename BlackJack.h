#pragma once
#include "Player.h"
class BlackJack
{
	BlackJack() {
		startGame();
	}
	void startGame() {
		createPlayers;
	}
	int howMany();
	void restartGame();
	void createPlayers() {
		const int playerNumber = howMany();
		vector<Player> players(howMany());
	}
	void input();
	bool isDealerTurn();

	int playerCount_;
};

int main() {

}