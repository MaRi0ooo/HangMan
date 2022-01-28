#include "Animation.h"

void printLogo()
{
	for (int i = 0; i < 2; ++i)
	{
		Sleep(400);
		std::cout << "\n\n\n\n\n\n\n\n\n\t" << R"abcd(       >=>    >=>       >>       >==>    >=>    >===>    >=>       >=>       >>       >==>    >=> )abcd" << std::endl;
		Sleep(400);
		std::cout << "\t" << R"abcd(       >=>    >=>      >>=>      >> >=>  >=>  >>    >=>  >> >=>   >>=>      >>=>      >> >=>  >=> )abcd" << std::endl;
		Sleep(400);
		std::cout << "\t" << R"abcd(       >=>    >=>     >> >=>     >=> >=> >=> >=>         >=> >=> > >=>     >> >=>     >=> >=> >=> )abcd" << std::endl;
		Sleep(400);
		std::cout << "\t" << R"abcd(       >=====>>=>    >=>  >=>    >=>  >=>>=> >=>         >=>  >=>  >=>    >=>  >=>    >=>  >=>>=> )abcd" << std::endl;
		Sleep(400);
		std::cout << "\t" << R"abcd(       >=>    >=>   >=====>>=>   >=>   > >=> >=>   >===> >=>   >>  >=>   >=====>>=>   >=>   > >=> )abcd" << std::endl;
		Sleep(400);
		std::cout << "\t" << R"abcd(       >=>    >=>  >=>      >=>  >=>    >>=>  >=>    >>  >=>       >=>  >=>      >=>  >=>    >>=> )abcd" << std::endl;
		Sleep(400);
		std::cout << "\t" << R"abcd(       >=>    >=> >=>        >=> >=>     >=>   >====>    >=>       >=> >=>        >=> >=>     >=> )abcd" << std::endl;
		Sleep(1500);
		system("cls");
	}
}
void printName()
{
	std::cout << "   ================================" << std::endl;
	std::cout << "   |            HANGMAN           |" << std::endl;
	std::cout << "   ================================" << std::endl;
}