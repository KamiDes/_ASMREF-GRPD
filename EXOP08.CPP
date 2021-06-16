
#include "stdio.h"
#include <bitset>
#include <iostream>

using namespace std;

void mainMenu);
void subMenu1();
Void And _operation(unsigned short r1, unsigned short r2),
Void Or_operation(unsigned short rl, unsigned short rz),
Void Xor_operation(unsigned short r1, unsigned short r2)s
Void Not_operation(unsigned short rl);



#include "stdio.h"
#include <bitset>
#include <iostream>
#include <Windows.h>

using namespace std;

void mainMenu();
void subMenu1();
void And_operation(unsigned short r1, unsigned short r2);
void Or_operation(unsigned short rl, unsigned short rz);
void Xor_operation(unsigned short r1, unsigned short r2);
void Not_operation(unsigned short rl);


int main()
{



	char ch, ch1, ch2, ch3;
	unsigned short rl, r2; 

	cout << "Start the logic operations Y/N, enter Y(y) or N(n): ";
	cin >> ch;
	ch1 = ch;

		mainMenu();
		cout << "Menu Options: ";
		cin >> ch;
		ch2 = ch;
		while (ch1 == 'Y'||ch1 == 'y')
		{
			if (ch2=='1')
			{
			Submenu:
			subMenu1();
		cout << "Submenu - input your choice: ";
		std::cin >> ch;
		ch3 = ch;
		switch (ch3)
		{
		case 'a':
		{
			cout<< "Enter the first number in hexadecimal format (for example, 12ae)";
			cin >> hex >> rl;
			cout << "Enter the second number in hexadecimal format (for example, ff00):";
			cin >> hex >> r2;
			And_operation(rl, r2);
			break;
		}

		case 'b':
		{
			cout << "Enter the first number in hexadecimal format (for example, 12ae):";
			cin >> hex >> rl;
			cout << "Enter the second number in hexadecimal format (for example, ff00):";
			cin >> hex >> r2;
			Or_operation(rl, r2);
			break;
		}
		case 'c':
		{
			cout << "Enter the first number in hexadecimal format (for example, 12ae):";
			cin >> hex >> rl;
			cout << "Enter the second number in hexadecimal format (for example, ff00):";
			cin >> hex >> r2;
			Xor_operation(rl, r2);
			break;
		}
		case 'd':
		{
			cout << "Enter the number in hexadecimal format (for example, 12ae): ";
			cin >> hex >> rl;
			Not_operation(rl);
			break;
		}
		default: goto Submenu;
		}
			}
			else
			{
				goto EndLable;
			}
			cout << "Do you like to continue the logic operations (Y/N)? Enter Y(y) or N (n): " << endl;
			cin >> ch;
			ch1 = ch;
		}

	EndLable:

			cout << "Exit program" << endl;

			system("pause");
			exit(0);
			return 0;
		}
		

void mainMenu()
{
	cout << "Menu:" << endl;
	cout << "1, Perform logic operation with 16-bit operand(s)" << endl;
	cout << "2, Exit" << endl;
}
		void subMenu1()
		{
			cout << "a. Input two 16-bit unsigned number operand and perform an AND (&) operation.\n"
				<< " Display the operand and the result in binary format." << endl;
			cout << "b. Input two 16-bit unsigned number operand and perform an Or (|) operation.\n"
				<< " Display the operand and the result in binary format." << endl;
			cout << "c. Input two 16-bit unsigned number operand and perform an Xor (^) operation.\n"
				<< " Display the operand and the result in binary format." << endl;
			cout << "d. Input two 16-bit unsigned number operand and perform an Not (~) operation.\n"
				<< " Display the operand and the result in binary format." << endl;
		}

		void And_operation(unsigned short r1, unsigned short r2)
		{
			unsigned short r;
			_asm
			{
				Mov AX, r1;
				Mov CX, r2;
				AND Ax, CX;
				Mov r, AX;
			}

			bitset <16>operant1_Bits(r1);
			bitset <16>operant2_Bits(r2);
			bitset <16>result_Bits(r);

			cout << "Perform an AND operation" << endl;
			cout << "\t\t" << operant1_Bits << endl;
			cout << "\tAND" << "\t" << operant2_Bits << endl;
			cout << "--------------------------------------\n";
			cout << "\t\t" << result_Bits << endl;
			cout << "==============================================\n";
		}

		void Or_operation(unsigned short r1, unsigned short r2)
		{
			unsigned short r;
			_asm
			{
				Mov AX, r1;
				Mov CX, r2;
				OR Ax, CX;
				Mov r, AX;
			}

			bitset <16>operant1_Bits(r1);
			bitset <16>operant2_Bits(r2);
			bitset <16>result_Bits(r);

			cout << "Perform an OR operation" << endl;
			cout << "\t\t" << operant1_Bits << endl;
			cout << "\tOR" << "\t" << operant2_Bits << endl;
			cout << "--------------------------------------\n";
			cout << "\t\t" << result_Bits << endl;
			cout << "==============================================\n";
		}
		void Xor_operation(unsigned short r1, unsigned short r2)
		{
			unsigned short r;
			_asm
			{
				Mov AX, r1;
				Mov CX, r2;
				XOR Ax, CX;
				Mov r, AX;
			}

			bitset <16>operant1_Bits(r1);
			bitset <16>operant2_Bits(r2);
			bitset <16>result_Bits(r);

			cout << "Perform an XOR operation" << endl;
			cout << "\t\t" << operant1_Bits << endl;
			cout << "\tXOR" << "\t" << operant2_Bits << endl;
			cout << "--------------------------------------\n";
			cout << "\t\t" << result_Bits << endl;
			cout << "==============================================\n";
		}

		void Not_operation(unsigned short r1)
		{
			unsigned short r;
			_asm
			{
				Mov AX, r1;
				not Ax;
				Mov r, AX;
			}

			bitset <16>operant1_Bits(r1);
			bitset <16>result_Bits(r);

			cout << "Perform an NOT operation" << endl;
			cout << "\t\t" << operant1_Bits << endl;
			cout << "--------------------------------------\n";
			cout << "\t\t" << result_Bits << endl;
			cout << "==============================================\n";
		}
