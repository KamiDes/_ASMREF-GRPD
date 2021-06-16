//ex3/////


#include "stdio.h"
#include <bitset>
#include <iostream>

using namespace std;

int main()
{
	char temp;
	char r1, r2;
	short int r;

	_asm
	{
		MOV BL, 'a';
		MOV BH, 'A';
		MOV r1, BL;
		MOV r2, BH;
		MOV r, BX;
	}
	std::cout << "=====================================================" << std::endl;
	std::cout << "Before swapping" << std::endl;
	printf("BH = %c, BL = %c, BX = %c%c \n", r2, r1,r2,r1);
	printf("bh =0x%x, BL = 0x%x, BX = 0x%x\n", r2, r1, r);
	_asm
	{
		MOV temp, BH;
		MOV BH, BL;
		MOV BL, temp;
		MOV r1, BL;
		MOV r2, BH;
		MOV r, BX;
	}
	std::cout << "=====================================================" << std::endl;
	std::cout << "After swapping" << "\n";
	printf("BH = %c, BL = %c, BX= %c%c \n", r2, r1, r2,r1);
	printf("BH = 0x%x, BL =0x%x, BX= 0x%x \n", r2, r1, r);
	/*********************************************************************/
	_asm
	{
		MOV AL, 'b';
		MOV AH, 'B';
		MOV r1, AL;
		MOV r2, AH;
		MOV r, AX;
	}
	std::cout << "======================================================" << std::endl;
	std::cout << "Before swapping" << std::endl;
	printf("AH =%c, AL =%c, AX = %c%c\n", r2, r1, r2, r1);
	printf("AH =0x%x,AL = 0x%x, AX = 0x%x\n", r2, r1, r);
	_asm
	{
		MOV AL, 'b';
		MOV AH, 'B';
		XCHG AL, AH;
		MOV r1, AL;
		MOV r2, AH;
		MOV r, AX;
	}
	std::cout << "======================================================" << std::endl;
	std::cout << "After swapping " << "\n";
	printf("AH =%c, AL =%c, AX = %c%c\n", r2, r1,r2,r1);
	printf("AH = 0x%x, AL = 0x%x, AX = 0x%x \n", r2, r1, r);
	system("pause");
	return 0;
}




////////////////////////////////////////////////////////////////////////////////////////////////
//ex1//


#include "stdio.h"
#include <bitset>
#include <iostream>

using namespace std;

int main()
{
	char temp;
	char r1, r2;
	short int r;

	_asm
	{
		MOV BL, 'a';
		MOV BH, 'A';
		MOV r1, BL;
		MOV r2, BH;
		MOV r, BX;
	}
	std::cout << "=====================================================" << std::endl;
	std::cout << "Before swapping" << std::endl;
	printf("BH = %c, BL = %c, BX = %c%c\n", r2, r1, r2, r1);
	printf("BH =0x%x, BL = 0x%x, BX = 0x%x\n", r2, r1, r);
	_asm
	{
		MOV temp, BH;
		MOV BH, BL;
		MOV BL, temp;
		MOV r1, BL;
		MOV r2, BH;
		MOV r, BX;
	}
	std::cout << "=====================================================" << std::endl;
	std::cout << "After swapping" << "\n";
	printf("BH =%c, BL = %c, BX = %c%c\n", r2, r1,r2,r1);
	printf("BH =0x%x, BL = 0x%x, BX = 0x%x\n", r2, r1, r);
	/*********************************************************************/
	_asm
	{
		MOV AL, 'b';
		MOV AH, 'B';
		MOV r1, AL;
		MOV r2, AH;
		MOV r, AX;
	}
	std::cout << "======================================================" << std::endl;
	std::cout << "Before swapping" << std::endl;
	printf("AH = %c, AL = %c, AX = %c%c\n", r2, r1, r2, r1);
	printf("AH =0x%x,AL = 0x%x, AX = 0x%x\n", r2, r1, r);
	_asm
	{
		MOV AL, 'b';
		MOV AH, 'B';
		MOV temp, AH;
		MOV AH, AL;
		MOV AL, temp;
		MOV r1, AL;
		MOV r2, AH;
		MOV r, AX;
	}
	std::cout << "======================================================" << std::endl;
	std::cout << "After swapping " << "\n";
	printf("AH =%c, AL =%c AX =%c%c \n", r2, r1,r2,r1);
	printf("AH = 0x%x, AL = 0x%x, AX = 0x%x \n", r2, r1, r);
	system("pause");
	return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

#include "stdio.h"
#include <bitset>
#include <iostream>

using namespace std;

int main()
{
	char r1, r2;
	short int r;

	_asm
	{
		MOV BL, 'i';
		MOV BH, 'I';
		MOV r1, BL;
		MOV r2, BH;
		MOV r, BX;
	}
	std::cout << "=====================================================" << std::endl;
	std::cout << "Before swapping" << std::endl;
	printf("BH = %c, BL = %c, BX = %c%c\n", r2, r1, r2, r1);
	printf("BH =0x%x, BL = 0x%x, BX = 0x%x\n", r2, r1, r);
	_asm
	{
		XCHG BL, BH;
		MOV r1, BL;
		MOV r2, BH;
		MOV r, BX;
	}
	std::cout << "=====================================================" << std::endl;
	std::cout << "After swapping" << "\n";
	printf("BH =%c, BL = %c, BX = %c%c\n", r2, r1,r2,r1);
	printf("BH =0x%x, BL = 0x%x, BX = 0x%x\n", r2, r1, r);
	/*********************************************************************/
	_asm
	{
		MOV AL, 'j';
		MOV AH, 'J';
		MOV r1, AL;
		MOV r2, AH;
		MOV r, AX;
	}
	std::cout << "======================================================" << std::endl;
	std::cout << "Before swapping" << std::endl;
	printf("AH = %c, AL = %c, AX = %c%c\n", r2, r1, r2, r1);
	printf("AH =0x%x,AL = 0x%x, AX = 0x%x\n", r2, r1, r);
	_asm
	{
		MOV AL, 'j';
		MOV AH, 'J';
		XCHG AL, AH;
		MOV r1, AL;
		MOV r2, AH;
		MOV r, AX;
	}
	std::cout << "======================================================" << std::endl;
	std::cout << "After swapping " << "\n";
	printf("AH =%c, AL =%c AX =%c%c \n", r2, r1,r2,r1);
	printf("AH = 0x%x, AL = 0x%x, AX = 0x%x \n", r2, r1, r);
	system("pause");
	return 0;
}

