// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "A.h"
#include "B.h"
#include "C.h"
#include "D.h"

int main()
{
	CA* vA = new CA();
	std::cout << "-----------------------" << std::endl;
	CB* vB = new CB();
	std::cout << "-----------------------" << std::endl;
	CC* vC = new CC();
	std::cout << "-----------------------" << std::endl;
	CD* vD = new CD();
	std::cout << "-----------------------" << std::endl;

	delete vA;
	std::cout << "-----------------------" << std::endl;
	delete vB;
	std::cout << "-----------------------" << std::endl;
	delete vC;
	std::cout << "-----------------------" << std::endl;
	delete vD;
	
	return 0;
}

