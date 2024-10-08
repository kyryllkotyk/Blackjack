#include <string>

using namespace std;

enum Suit { kHeart, kClub, kDiamond, kSpade };
const string kSuits[4] = { "Hearts", "Clubs", "Diamonds", "Spades" };

enum Value { kTwo, kThree, kFour, kFive, kSix, kSeven, kEight, kNine, kTen, kJack, kQueen, kKing, kAce };
const string kNames[13] = { "Two", "Three", "Four", "Five", "Six", "Seven", "Eight",
	"Nine", "Ten", "Jack", "Queen", "King", "Ace" };
const int kValues[13] = { 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11, 1 };

class Card
{
public:
	Card(Value val, Suit suit) {
		set_suit(suit);
		set_val(val);
	}
	string val() {
		return kNames[val_];
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

	Card randomCard() {
		
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

