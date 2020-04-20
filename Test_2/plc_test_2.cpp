#include <iostream>
using namespace std;

enum games {
	CRICKET = 1,
	TENNIS = 13,
	FOOTBAL = 26,
	BASKETBALL = 3
} play;

enum week {
	Sunday,
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday
};

int main() {

	play = FOOTBAL;
	week w = Sunday;
	if(w == Sunday && play == FOOTBAL) {

		cout<<"It's Sunday and we have Football Match"<<endl;
	}

	return 0;
}
