#include "Game.h"

Game::Game()
{
    count_tries = 0;
    loadWord();
    game_status = false;
    flag = true;
    for (int i = 0; i < 26; i++)
    {
        grey_symb.push_back(0);
    }
}
void Game::loadWord()
{
    srand(static_cast<unsigned int>(time(0)));
    std::vector<std::string> words;
    std::string w;

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
    word = words[rand() % words.size()];
}

void Game::drawHangMan()
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
        std::cout << "\t ||"
                  << "\t\t\t\t";
        alphabetShow(1);
        std::cout << std::endl;
        std::cout << "\t ||"
                  << "\t\t\t\t ";
        alphabetShow(2);
        std::cout << std::endl;
        std::cout << "\t ||"
                  << "\t\t\t\t   ";
        alphabetShow(3);
        std::cout << std::endl;
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
        std::cout << "\t ||"
                  << "\t\t\t\t";
        alphabetShow(1);
        std::cout << std::endl;
        std::cout << "\t ||"
                  << "\t\t\t\t ";
        alphabetShow(2);
        std::cout << std::endl;
        std::cout << "\t ||"
                  << "\t\t\t\t   ";
        alphabetShow(3);
        std::cout << std::endl;
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
        std::cout << "\t ||"
                  << "\t\t\t\t";
        alphabetShow(1);
        std::cout << std::endl;
        std::cout << "\t ||"
                  << "\t\t\t\t ";
        alphabetShow(2);
        std::cout << std::endl;
        std::cout << "\t ||"
                  << "\t\t\t\t   ";
        alphabetShow(3);
        std::cout << std::endl;
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
        std::cout << "\t ||        |"
                  << "\t\t\t";
        alphabetShow(1);
        std::cout << std::endl;
        std::cout << "\t ||        |"
                  << "\t\t\t ";
        alphabetShow(2);
        std::cout << std::endl;
        std::cout << "\t ||"
                  << "\t\t\t\t   ";
        alphabetShow(3);
        std::cout << std::endl;
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
        std::cout << "\t ||       /|"
                  << "\t\t\t";
        alphabetShow(1);
        std::cout << std::endl;
        std::cout << "\t ||      / |"
                  << "\t\t\t ";
        alphabetShow(2);
        std::cout << std::endl;
        std::cout << "\t ||"
                  << "\t\t\t\t   ";
        alphabetShow(3);
        std::cout << std::endl;
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
        std::cout << "\t ||       /|\\"
                  << "\t\t\t";
        alphabetShow(1);
        std::cout << std::endl;
        std::cout << "\t ||      / | \\"
                  << "\t\t\t ";
        alphabetShow(2);
        std::cout << std::endl;
        std::cout << "\t ||"
                  << "\t\t\t\t   ";
        alphabetShow(3);
        std::cout << std::endl;
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
        std::cout << "\t ||       /|\\"
                  << "\t\t\t";
        alphabetShow(1);
        std::cout << std::endl;
        std::cout << "\t ||      / | \\"
                  << "\t\t\t ";
        alphabetShow(2);
        std::cout << std::endl;
        std::cout << "\t ||       /'"
                  << "\t\t\t   ";
        alphabetShow(3);
        std::cout << std::endl;
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
        std::cout << "\t ||       /|\\"
                  << "\t\t\t";
        alphabetShow(1);
        std::cout << std::endl;
        std::cout << "\t ||      / | \\"
                  << "\t\t\t ";
        alphabetShow(2);
        std::cout << std::endl;
        std::cout << "\t ||       /'\\"
                  << "\t\t\t   ";
        alphabetShow(3);
        std::cout << std::endl;
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
void Game::alphabetShow(int choose)
{
    if (choose == 1)
    {
        for (int i = 0; i < 10; ++i)
        {
            alphabet.push_back('A' + i);
            if (grey_symb[i])
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
        for (int i = 10; i < 19; ++i)
        {
            alphabet.push_back('A' + i);
            if (grey_symb[i])
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
        for (int i = 19; i < 26; ++i)
        {
            alphabet.push_back('A' + i);
            if (grey_symb[i])
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
void Game::alphabetChange(char symbol)
{
    grey_symb[(static_cast<int>(symbol)) - (static_cast<int>('a'))] = 1;
}

void Game::refreshGame()
{
    count_tries = 0;
    Game::loadWord();
    for (int i = 0; i < 26; i++)
    {
        grey_symb[i] = 0;
    }
    hidden_word.clear();
    flag = true;
    game_status = false;
    Game::startGame();
}
void Game::drawHiddenWord(std::vector<int> position, char letter)
{
    Game::drawHangMan();
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

void Game::startGame()
{
    game_status = false;
    auto start = std::chrono::steady_clock::now();

    for (size_t i = 0; i < word.size(); i++)
    {
        hidden_word += "_";
    }
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
            gameStatistic(int(elapsed_seconds.count()));
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
void Game::gameStatistic(int game_time)
{
    Sleep(1200);
RETRY:
    system("cls");
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
    std::cout << "\n   Guessed letters . . . . . . : ";
    for (size_t i = 0; i < hidden_word.size(); i++)
    {
        std::cout << hidden_word[i] << " ";
    }
    std::cout << "\n   Count of mistakes . . . . . : " << count_tries;
    std::cout << "\n\n   --------------------------------" << std::endl;

    char ch('0');
    std::cout << "\n  Do you want to try again? [Y/n]: ";
    std::cin >> ch;
    std::cin.ignore(32767, '\n');

    if (tolower(ch) == 'y')
    {
        Game::refreshGame();
    }
    else if (tolower(ch) == 'n')
    {
        system("cls");
        exit(0);
    }
    else
    {
        goto RETRY;
    }
}
