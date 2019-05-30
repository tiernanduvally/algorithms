#include <iostream>
#include <string>


int main()
{
	int n;
    char b;
    int total = 0;
	
	std::string cards;

	std::cin >> n >> b;

	for (int i = 0; i < n * 4; i++) {
		std::cin >> cards;

		if (cards[1] == b) {
			if (cards[0] == 'A') {
				total += 11;
			}
			else if (cards[0] == 'K') {
				total += 4;
			}
			else if (cards[0] == 'Q') {
				total += 3;
			}
			else if (cards[0] == 'J') {
				total += 20;
			}
			else if (cards[0] == 'T') {
				total += 10;
			}
			else if (cards[0] == '9') {
				total += 14;
			}
		}
		else {
			if (cards[0] == 'A') {
				total += 11;
			}
			else if (cards[0] == 'K') {
				total += 4;
			}
			else if (cards[0] == 'Q') {
				total += 3;
			}
			else if (cards[0] == 'J') {
				total += 2;
			}
			else if (cards[0] == 'T') {
				total += 10;
			}
		}
	}

	std::cout << total<<std::endl;

  return 0;
}