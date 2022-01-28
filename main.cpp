#include "Animation.h"
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <chrono>
#include <string>
#include <ctime>
#include <map>

class Game
{
private:
	std::string word, hidden_word;
	bool flag, game_status;
	char game_end_flag;
	int count_tries;
	std::vector<char> alphabet = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	std::vector<int> grey_symb;
public:
	Game()
	{
		count_tries = 0;
		loadWord();
		game_status = false;
		flag = true;
		for (int i = 0; i < 26; i++) {
			grey_symb.push_back(0);
		}
	}
	std::string getWord() {
		return word;
	}
	void loadWord()
	{
		srand(static_cast<unsigned int>(time(0)));
		std::vector<std::string> words; std::string w;

		std::ifstream file("CryptDictionary.txt");
		for (file >> w; !file.eof(); file >> w)
		{
			words.push_back(w);
		}
		file.close();

		for (size_t i = 0; i < words.size(); i++)
		{
			w = words[i];
			for (size_t j = 0; j < w.length(); j++)
			{
				w[j] -= 3;
			}
			words[i] = w;
		}
		int choose = rand() % 149; word = words[choose];
	}

	void drawHangMan()
	{
		system("cls");
		switch (count_tries)
		{
		case 0:
		{
			printName();
			std::cout << "\n\n\t]||[=======#=======]" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << "\t\t\t\t\t"; alphabetShow(1); std::cout << std::endl;
			std::cout << "\t ||" << "\t\t\t\t\t"; alphabetShow(2); std::cout << std::endl;
			std::cout << "\t ||" << "\t\t\t\t\t"; alphabetShow(3); std::cout << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t/||" << std::endl;
			std::cout << "\t|===================)" << std::endl;
			std::cout << "\t|*******************|" << std::endl;
			std::cout << "\t|*******************|" << std::endl;
			std::cout << "\t|===================)" << std::endl;
			break;
		}
		case 1:
		{
			printName();
			std::cout << "\n\n\t]||[=======#=======]" << std::endl;
			std::cout << "\t ||        |" << std::endl;
			std::cout << "\t ||        |" << std::endl;
			std::cout << "\t ||        |" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << "\t\t\t\t\t"; alphabetShow(1); std::cout << std::endl;
			std::cout << "\t ||" << "\t\t\t\t\t"; alphabetShow(2); std::cout << std::endl;
			std::cout << "\t ||" << "\t\t\t\t\t"; alphabetShow(3); std::cout << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t/||" << std::endl;
			std::cout << "\t|===================)" << std::endl;
			std::cout << "\t|*******************|" << std::endl;
			std::cout << "\t|*******************|" << std::endl;
			std::cout << "\t|===================)" << std::endl;
			break;
		}
		case 2:
		{
			printName();
			std::cout << "\n\n\t]||[=======#=======]" << std::endl;
			std::cout << "\t ||        |" << std::endl;
			std::cout << "\t ||        |" << std::endl;
			std::cout << "\t ||        |" << std::endl;
			std::cout << "\t ||        ()" << std::endl;
			std::cout << "\t ||" << "\t\t\t\t\t"; alphabetShow(1); std::cout << std::endl;
			std::cout << "\t ||" << "\t\t\t\t\t"; alphabetShow(2); std::cout << std::endl;
			std::cout << "\t ||" << "\t\t\t\t\t"; alphabetShow(3); std::cout << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t/||" << std::endl;
			std::cout << "\t|===================)" << std::endl;
			std::cout << "\t|*******************|" << std::endl;
			std::cout << "\t|*******************|" << std::endl;
			std::cout << "\t|===================)" << std::endl;
			break;
		}
		case 3:
		{
			printName();
			std::cout << "\n\n\t]||[=======#=======]" << std::endl;
			std::cout << "\t ||        |" << std::endl;
			std::cout << "\t ||        |" << std::endl;
			std::cout << "\t ||        |" << std::endl;
			std::cout << "\t ||       (O)" << std::endl;
			std::cout << "\t ||        |" << "\t\t\t\t"; alphabetShow(1); std::cout << std::endl;
			std::cout << "\t ||        |" << "\t\t\t\t"; alphabetShow(2); std::cout << std::endl;
			std::cout << "\t ||" << "\t\t\t\t\t";		 alphabetShow(3); std::cout << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t/||" << std::endl;
			std::cout << "\t|===================)" << std::endl;
			std::cout << "\t|*******************|" << std::endl;
			std::cout << "\t|*******************|" << std::endl;
			std::cout << "\t|===================)" << std::endl;
			break;
		}
		case 4:
		{
			printName();
			std::cout << "\n\n\t]||[=======#=======]" << std::endl;
			std::cout << "\t ||        |" << std::endl;
			std::cout << "\t ||        |" << std::endl;
			std::cout << "\t ||        |" << std::endl;
			std::cout << "\t ||       (O)" << std::endl;
			std::cout << "\t ||       /|" << "\t\t\t\t"; alphabetShow(1); std::cout << std::endl;
			std::cout << "\t ||      / |" << "\t\t\t\t"; alphabetShow(2); std::cout << std::endl;
			std::cout << "\t ||" << "\t\t\t\t\t";		 alphabetShow(3); std::cout << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t/||" << std::endl;
			std::cout << "\t|===================)" << std::endl;
			std::cout << "\t|*******************|" << std::endl;
			std::cout << "\t|*******************|" << std::endl;
			std::cout << "\t|===================)" << std::endl;
			break;

		}
		case 5:
		{
			printName();
			std::cout << "\n\n\t]||[=======#=======]" << std::endl;
			std::cout << "\t ||        |" << std::endl;
			std::cout << "\t ||        |" << std::endl;
			std::cout << "\t ||        |" << std::endl;
			std::cout << "\t ||       (O)" << std::endl;
			std::cout << "\t ||       /|\\" << "\t\t\t\t"; alphabetShow(1); std::cout << std::endl;
			std::cout << "\t ||      / | \\" << "\t\t\t\t"; alphabetShow(2); std::cout << std::endl;
			std::cout << "\t ||" << "\t\t\t\t\t";		   alphabetShow(3); std::cout << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t/||" << std::endl;
			std::cout << "\t|===================)" << std::endl;
			std::cout << "\t|*******************|" << std::endl;
			std::cout << "\t|*******************|" << std::endl;
			std::cout << "\t|===================)" << std::endl;
			break;
		}
		case 6:
		{
			printName();
			std::cout << "\n\n\t]||[=======#=======]" << std::endl;
			std::cout << "\t ||        |" << std::endl;
			std::cout << "\t ||        |" << std::endl;
			std::cout << "\t ||        |" << std::endl;
			std::cout << "\t ||       (O)" << std::endl;
			std::cout << "\t ||       /|\\" << "\t\t\t\t"; alphabetShow(1); std::cout << std::endl;
			std::cout << "\t ||      / | \\" << "\t\t\t\t"; alphabetShow(2); std::cout << std::endl;
			std::cout << "\t ||       /'" << "\t\t\t\t";   alphabetShow(3); std::cout << std::endl;
			std::cout << "\t ||      /" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t/||" << std::endl;
			std::cout << "\t|===================)" << std::endl;
			std::cout << "\t|*******************|" << std::endl;
			std::cout << "\t|*******************|" << std::endl;
			std::cout << "\t|===================)" << std::endl;
			break;
		}
		case 7:
		{
			printName();
			std::cout << "\n\n\t]||[=======#=======]" << std::endl;
			std::cout << "\t ||        |" << std::endl;
			std::cout << "\t ||        |" << std::endl;
			std::cout << "\t ||        |" << std::endl;
			std::cout << "\t ||       (O)" << std::endl;
			std::cout << "\t ||       /|\\" << "\t\t\t\t"; alphabetShow(1); std::cout << std::endl;
			std::cout << "\t ||      / | \\" << "\t\t\t\t"; alphabetShow(2); std::cout << std::endl;
			std::cout << "\t ||       /'\\" << "\t\t\t\t"; alphabetShow(3); std::cout << std::endl;
			std::cout << "\t ||      /   \\" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t ||" << std::endl;
			std::cout << "\t/||" << std::endl;
			std::cout << "\t|===================)" << std::endl;
			std::cout << "\t|*******************|" << std::endl;
			std::cout << "\t|*******************|" << std::endl;
			std::cout << "\t|===================)" << std::endl;
			break;
		}
		}
	}
	void alphabetShow(int choose)
	{
		if (choose == 1)
		{
			for (int i = 0; i < 11; i++)
			{
				if (grey_symb[i] == 1)
				{
					std::cout << color<8, 0> << alphabet[i] << color<7, 0> << " ";
				}
				else
				{
					std::cout << alphabet[i] << " ";
				}
			}
		}
		else if (choose == 2)
		{
			for (int i = 11; i < 22; i++)
			{
				if (grey_symb[i] == 1)
				{
					std::cout << color<8, 0> << alphabet[i] << color<7, 0> << " ";
				}
				else
				{
					std::cout << alphabet[i] << " ";
				}
			}
		}
		else if (choose == 3)
		{
			for (size_t i = 22; i < alphabet.size(); i++)
			{
				if (grey_symb[i] == 1)
				{
					std::cout << color<8, 0> << alphabet[i] << color<7, 0> << " ";
				}
				else
				{
					std::cout << alphabet[i] << " ";
				}
			}
		}
	}
	void alphabetChange(char symbol)
	{
		switch (symbol)
		{
		case 'a': { grey_symb[0] = 1; break; }
		case 'b': { grey_symb[1] = 1; break; }
		case 'c': { grey_symb[2] = 1; break; }
		case 'd': { grey_symb[3] = 1; break; }
		case 'e': { grey_symb[4] = 1; break; }
		case 'f': { grey_symb[5] = 1; break; }
		case 'g': { grey_symb[6] = 1; break; }
		case 'h': { grey_symb[7] = 1; break; }
		case 'i': { grey_symb[8] = 1; break; }
		case 'j': { grey_symb[9] = 1; break; }
		case 'k': { grey_symb[10] = 1; break; }
		case 'l': { grey_symb[11] = 1; break; }
		case 'm': { grey_symb[12] = 1; break; }
		case 'n': { grey_symb[13] = 1; break; }
		case 'o': { grey_symb[14] = 1; break; }
		case 'p': { grey_symb[15] = 1; break; }
		case 'q': { grey_symb[16] = 1; break; }
		case 'r': { grey_symb[17] = 1; break; }
		case 's': { grey_symb[18] = 1; break; }
		case 't': { grey_symb[19] = 1; break; }
		case 'u': { grey_symb[20] = 1; break; }
		case 'v': { grey_symb[21] = 1; break; }
		case 'w': { grey_symb[22] = 1; break; }
		case 'x': { grey_symb[23] = 1; break; }
		case 'y': { grey_symb[24] = 1; break; }
		case 'z': { grey_symb[25] = 1; break; }
		}
	}

	void refresh()
	{
		count_tries = 0;
		loadWord();
		for (int i = 0; i < 26; i++)
		{
			grey_symb[i] = 0;
		}
		hidden_word.clear();
		flag = true;
		game_status = false;
		startGame();
	}
	void drawHiddenWord(std::vector<int> position = { 99999 }, char letter = ' ')
	{
		drawHangMan();
		flag = true;

		if (letter != ' ')
		{
			for (size_t i = 0; i < position.size(); i++)
			{
				hidden_word[position[i]] = letter;
			}
		}

		std::cout << "\n\tWORD: ";
		for (size_t i = 0; i < hidden_word.length(); i++)
		{
			std::cout << hidden_word[i] << " ";
		}
		for (size_t i = 0; i < hidden_word.length(); i++)
		{
			if (hidden_word[i] == '_')
			{
				flag = false;
			}
		}
		if (flag)
		{
			game_status = true;
			game_end_flag = 'w';
		}
	}

	void startGame()
	{
		game_status = false;
		auto start = std::chrono::steady_clock::now();

		for (size_t i = 0; i < word.size(); i++) { hidden_word += "_"; }
		drawHiddenWord();

		bool wrong_trigger(true);
		while (true)
		{
			wrong_trigger = true;
			std::vector<int> vec;

			if (game_status)
			{
				auto end = std::chrono::steady_clock::now();
				std::chrono::duration<double> elapsed_seconds = end - start;
				gameStatistics(int(elapsed_seconds.count()));
				break;
			} // Game Over //


			char letter;
			std::cout << "\n\n\tEnter letter: ";
			std::cin >> letter;

			letter = tolower(letter);
			alphabetChange(letter);
			for (size_t i = 0; i < word.size(); i++)
			{
				if (letter == word[i])
				{
					vec.push_back(i);
					wrong_trigger = false;
					drawHiddenWord(vec, letter);
				}
			}
			if (wrong_trigger)
			{
				++count_tries;
				wrong_trigger = true;
				if (count_tries == 7)
				{
					game_status = true;
					game_end_flag = 'l';
				}
				drawHiddenWord();
			} // if the letter is not guessed //
		}
	}
	void gameStatistics(int game_time)
	{
		std::cout << "\n   ================================" << std::endl;
		std::cout << "   |      S T A T I S T I C S     |" << std::endl;
		std::cout << "   ================================" << std::endl;

		if (game_end_flag == 'l')
		{
			std::cout << color<4, 0> << "\n\t     D E F E A T" << color<7, 0>;
		}
		else
		{
			std::cout << color<2, 0> << "\n\t      V I C T O R Y" << color<7, 0>;
		}

		std::cout << "\n   --------------------------------" << std::endl;
		std::cout << "\n   Time. . . . . . . . . . . . : " << game_time << " c";
		std::cout << "\n   Hidden word . . . . . . . . : " << word;
		std::cout << "\n   Guessed letters . . . . . . : "; for (size_t i = 0; i < hidden_word.size(); i++) { std::cout << hidden_word[i] << " "; }
		std::cout << "\n   Count of mistakes . . . . . : " << count_tries;
		std::cout << "\n\n   --------------------------------" << std::endl;

		char ch(0);
		std::cout << "\n\nDo you wanna play again  Yes[Y]/No[N] ?";
		std::cin >> ch;

		ch = tolower(ch);
		if (ch == 'y')
		{
			refresh();
		}
		else
		{
			system("cls");
			exit(0);
		}
	}
};

int main(int argc, char** argv)
{
	Game game;
	printLogo();
	game.startGame();
	return 0;
}