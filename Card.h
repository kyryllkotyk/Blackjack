#include <string>
#include <iostream>

using namespace std;

enum Suit {kHeart, kClub, kDiamond, kSpade};
const string kSuits[4] = {"Hearts", "Clubs", "Diamonds", "Spades" };

enum Value {kTwo, kThree, kFour, kFive, kSix, kSeven, kEight, kNine, kTen, kJack, kQueen, kKing, kAce};
const string kValues[13] = {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight",
	"Nine", "Ten", "Jack", "Queen", "King", "Ace"};

class Card
{
public: 
	Card(Value val, Suit suit) {
		set_suit(suit);
		set_val(val);
	}
	string val() {
		return kValues[val_];
	}
	string suit() {
		return kSuits[suit_];
	}

	void set_val(Value val) {
		val_ = val;
	}
	void set_suit(Suit suit) {
		suit_ = suit;
	}

private:
	Value val_;
	Suit suit_;
};

//int main() {
//	Card card(kAce, kHeart);
//	cout << card.val();
//	cout << card.suit();
//}

