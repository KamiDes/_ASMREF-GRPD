

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


int main()
{
	//Declare variables here
	char ch, ch1, ch2, ch3;
	unsigned short rl, r2; // bit word declaration

		cout << "Start the logic operations Y/N, enter Y(y) or N(n): "
		cin >> ch;
		chl = ch;

		mainMenu();
		cout < "Menu Options: ";
		cin >> ch;
		ch2 ch;
		while (ch1 == "Y||chl=y)
		{
			if (ch21)
			{
			Submenu:
				subMenul);
		cout << "Submenu - input your choice: ";
		std::cin >> ch;
		ch3 = ch;
		switch (ch3)
		{
		case 'a':
		{
			cout<"Enter the first number in hexadecimal format (for example, 12ae):
				cin >> hex >> rl;
			cout << "Enter the second number in hexadecimal format (for example, ff0=
				cin >> hex >> r2;
			And operation(rl, r2);
			break;
		}

		case 'b':
		{
			cout << "Enter the first number in hexadecimal format (for example, 12ae):";
			cin >> hex >> rl;
			cout<"Enter the second number in hexadecimal format (for example, fFO0):"
			cin >> hex >> r2;
			Or_operation(rl, r2)
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
			cin >> heN >> rl;
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
			cout << "Do you like to continue the logic operations (Y/N)? Enter Y(y) or N (n): " << endl1:
			cin >> ch;
			chl = ch;
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
		cout << "1, Perform logic operation with 16-bit operand(s)" <<endi;
		cout << "2, Exit" << endl;
		
		void subMenu1()
		{
			COutss'a.lnput two 16-bit unsigned number operands and perform an AND (&) operation.n"
				S Display the operands and the result in binary format. " <endl,
				COuts'b.lnput two 16-bit unsigned number operands and perform an OR () operation. \n"
				Display the operands and the result in binary format." <endl;
				COutss'c.Input two 16-bit unsigned number operands and perform a XOR () operation.n"
				Display the operands and the result in binary format." K<endl;
				coutk"d.Input a 16-bit unsigned number operand and perform a NOT(operation. \n"
				Display the operand and the result in binary format."<<endl;
		}

		void And_operation(unsigned short r1, unsigned short r2)
		{
			unsigned short r;
			/ AND operation
				r = rl & r2;
			bitset<16> operant1_Bits(r1); // A bitset to display 16 - bits
			bitset<16> operant2_Bits(r2);
			bitset<16> result_Bits(r);


			cout << "Perform an AND operation:" << endl;
			cout << "\t\t" << operantl_Bits << endl;
			cout << "\tAND" << "\t" << operant2_Bits << endl;
			Cout < "-----------------------------------------------\n";
			cout < "\t\t" << result_Bits << endl;
			Cout << "==============================================\n";
		}
		void Or_operation(unsigned short rl, unsigned short r2)
		{
			unsigned short r;
			//OR operation
			r = r1 | r2;
			bitset<16> operantl_Bits(r1);
			bitset<16> operant2 Bits(r2);
			bitset<16> result _Bits(r);
			cout << "Perform an OR operation:" << endl:
			cout << "\t\t" << operantl_Bits << endl;

			cout << "\tOR" << "\t" << operant2_Bits << endl;
			cout << "--------------------------------\n";
			cout << "\t\t" << result_Bits << endl;
			cout << "================================= \n";
		}
		
		void Xor operation(unsigned short rl, unsigned short 2)
		{
			unsigned short r;

			// XOR operation
			r = rl ^ r2;

			bitset<16> operantl_Bits(r1);
			bitset<16> operant2_Bits(r2);
			bitset<16> result_Bits(r);

			cout << "Perform a XOR operation:" < endl;
			cout << "\t\t" << operant1_Bits << endl;
			cout << "\tXOR" << "\t" << operant2_Bits << endl;
			cout << "-----------------------------------In";
			cout << "\t\t" << result_Bits << endl;
			cout << "===================================\n":
		}

		void Not _operation(unsigned short rl)
		{
			unsigned short r;
			//NOT operation
			r = ~rl;

			bitset<16> operant _Bits(rl);
			bitset<16> result_Bits(r);

			cout << "Perform a NOT operation:" << endl;
			cout << "\tNOT" << "\t" << operant1_Bits << endl;
			cout << "-----------------------------------\n";
			cout << "\t\t" << result_Bits << endl;
			cout << "===================================\n";
		}
	}
