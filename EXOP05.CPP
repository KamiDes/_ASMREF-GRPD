const int n = 5; //array dimension
	unsigned short u16_arr[n] = { 0x0041, 0x0052, 0x1169, '12', 'aA' };
	unsigned short*uPtr;
	unsigned short u0, u1, u2, u3, u4;
	int i;      //used as index
	int u0_addr, u1_addr, u2_addr, u3_addr, u4_addr;

	// Display the hexadecimal and decimal values for each element of the unsigned short array
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "------------------- The value of each element of the 16 bit array-----------------\n";
	for (i=0;i<n;i++)
	{
		cout << "the value and the size of element " << dec << i;
		cout << " in an array the 0x" << hex << u16_arr[i] << " and " << sizeof(u16_arr[i]) << " byte(s) " << endl;

	}
	printf("-----------------------------\n");
	uPtr=u16_arr;

	//Display the 32 bit address in hexadecimal formal 
	cout<<"The memory address of the array is 0x"<<hex<<uPtr<<endl;
	_asm
	{
		//EBX holds the address of element 0 in the array 
		mov EBX, uPtr;

		//u0 holds the retrived value from the indierect address contained in register ebx
		mov AX, [EBX];
		mov u0, AX;
		mov u0_addr, EBX;

		/* EBX is increased by 2 due u16 */
		mov ECX, 2H;
		add EBX, ECX;

		//U1 holds the retrived value form the indirect adress contained in register EBX */
		mov AX, [EBX];
		mov u1, AX;
		mov u1_addr, EBX;

		/*EBX+2H holds the address of element 2 in the array u2 holds the retrived value from the register relative addressing*/
		mov AX, [EBX + 2H];
		mov u2, AX;

		//EDI hold the address of element 2 in an array
		mov EDI, EBX;
		add EDI, 2H;
		mov u2_addr, EDI;

		// EBX+4H holds the address of element 3 in the array u3 holds the retrived value from the register relative addressing
		mov AX, [EBX + 4H];
		mov u3, AX;

		// EDI holds the address of element 3 in the array 
		mov EDI, EBX;
		add EDI, 4H;
		mov u3_addr, EDI;

		//EBX+6H holds the address of element 4 in the array 
		mov AX, [EBX + 6H];
		MOV u4, AX;

		//EDI holds the address of element 4 in the array
		mov EDI, EBX;
		add EDI, 6H;
		mov u4_addr, EDI;
	}
	cout << "------------------------------------------------------" << endl;
	cout << "The values 0x" << hex << u0 << "\t at the address of 0x" << hex << u0_addr << endl;
	cout << "The values 0x" << hex << u1 << "\t at the address of 0x" << hex << u1_addr << endl;
	cout << "The values 0x" << hex << u2 << "\t at the address of 0x" << hex << u2_addr << endl;
	cout << "The values 0x" << hex << u3 << "\t at the address of 0x" << hex << u3_addr << endl;
	cout << "The values 0x" << hex << u4 << "\t at the address of 0x" << hex << u4_addr << endl;

	system("pause");
	exit(0);
	return 0;

///////////////////////LAB 5.2////////////////////////////////////////////


const int n = 5; //array dimension
	unsigned int u32_arr[n] = { 0x000000041, 0xabcd1169, 0x1169, '1234', 'aABc' };
	unsigned int u0, u1, u2, u3, u4;
	unsigned int *uPtr;
	int i;      //used as index

	int u0_addr, u1_addr, u2_addr, u3_addr, u4_addr;
	signed int i32_arr[n] = { 0x000000041, 0xabcd1169, 0x1169, '1234', 'aABc' };
	signed int *iPtr;
	signed int i0, i1, i2, i3, i4;
	signed int a;

	signed int i0_addr, i1_addr, i2_addr, i3_addr, i4_addr;


	// Display the hexadecimal and decimal values for each element of the unsigned short array
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "------------------- The value of each element of the 32-bit unsigned int array-----------------\n" << endl << endl << endl;
	for (i=0;i<n;i++)
	{
		cout << "the value and the size of element " << dec << i;
		cout << " in an array the 0x" << hex << u32_arr[i] << " and " << sizeof(u32_arr[i]) << " byte(s) " << endl;

	}
	printf("-------------------------------------------------------------\n");
	uPtr=u32_arr;

	//Display the 32 bit address in hexadecimal formal 
	cout<<"The memory address of the array is 0x"<<hex<<uPtr<<endl;

	//the retrived value from different address modes
	_asm
	{
		//EBX holds the address of element 0 in the array 
		mov EBX, uPtr;

		//u0 holds the retrived value from the indierect address contained in register ebx
		mov EAX, [EBX];
		mov u0, EAX;
		mov u0_addr, EBX;

		/* EBX is increased by 2 due u16 */
		mov ECX, 2H;
		add EBX, ECX;

		//U1 holds the retrived value form the indirect adress contained in register EBX */
		mov EAX, [EBX];
		mov u1, EAX;
		mov u1_addr, EBX;

		/*EBX+2H holds the address of element 2 in the array u2 holds the retrived value from the register relative addressing*/
		mov EAX, [EBX + 2H];
		mov u2, EAX;

		//EDI hold the address of element 2 in an array
		mov EDI, EBX;
		add EDI, 2H;
		mov u2_addr, EDI;

		// EBX+4H holds the address of element 3 in the array u3 holds the retrived value from the register relative addressing
		mov EAX, [EBX + 4H];
		mov u3, EAX;

		// EDI holds the address of element 3 in the array 
		mov EDI, EBX;
		add EDI, 4H;
		mov u3_addr, EDI;

		//EBX+6H holds the address of element 4 in the array 
		mov EAX, [EBX + 6H];
		MOV u4_addr, EAX;

		//EDI holds the address of element 4 in the array
		mov EDI, EBX;
		add EDI, 6H;
		mov u4_addr, EDI;
	}
	cout << "------------------------------------------------------" << endl;
	cout << "The values 0x" << hex << u0 << "\t at the address of 0x" << hex << u0_addr << endl;
	cout << "The values 0x" << hex << u1 << "\t at the address of 0x" << hex << u1_addr << endl;
	cout << "The values 0x" << hex << u2 << "\t at the address of 0x" << hex << u2_addr << endl;
	cout << "The values 0x" << hex << u3 << "\t at the address of 0x" << hex << u3_addr << endl;
	cout << "The values 0x" << hex << u4 << "\t at the address of 0x" << hex << u4_addr << endl;



	printf("llllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll\n\n");

	// Display the hexadecimal and decimal values for each element of the unsigned short array
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "------------------- The value of each element of the 32-bit signed int array-----------------\n" << endl << endl << endl;
	for (a = 0;a < n;a++)
	{
		cout << "the value and the size of element " << dec << a;
		cout << " in an array the 0x" << hex << u32_arr[a] << " and " << sizeof(u32_arr[a]) << " byte(s) " << endl;

	}
	printf("-------------------------------------------------------------\n");
	iPtr=i32_arr;

	//Display the 32 bit address in hexadecimal formal 
	cout << "The memory address of the array is 0x" << hex << iPtr << endl;

	//the retrived value from different address modes
	_asm
	{
		//EBX holds the address of element 0 in the array 
		mov EBX, iPtr;

		//u0 holds the retrived value from the indierect address contained in register ebx
		mov EAX, [EBX];
		mov i0, EAX;
		mov i0_addr, EBX;

		/* EBX is increased by 2 due u16 */
		mov ECX, 2H;
		add EBX, ECX;

		//U1 holds the retrived value form the indirect adress contained in register EBX */
		mov EAX, [EBX];
		mov i1, EAX;
		mov i1_addr, EBX;

		/*EBX+2H holds the address of element 2 in the array u2 holds the retrived value from the register relative addressing*/
		mov EAX, [EBX + 2H];
		mov i2, EAX;

		//EDI hold the address of element 2 in an array
		mov EDI, EBX;
		add EDI, 2H;
		mov i2_addr, EDI;

		// EBX+4H holds the address of element 3 in the array u3 holds the retrived value from the register relative addressing
		mov EAX, [EBX + 4H];
		mov i3, EAX;

		// EDI holds the address of element 3 in the array 
		mov EDI, EBX;
		add EDI, 4H;
		mov i3_addr, EDI;

		//EBX+6H holds the address of element 4 in the array 
		mov EAX, [EBX + 6H];
		mov i4_addr, EAX;

		//EDI holds the address of element 4 in the array
		mov EDI, EBX;
		add EDI, 6H;
		mov i4_addr, EDI;
	}
	cout << "------------------------------------------------------" << endl;
	cout << "The values 0x" << hex << i0 << "\t at the address of 0x" << hex << i0_addr << endl;
	cout << "The values 0x" << hex << i1 << "\t at the address of 0x" << hex << i1_addr << endl;
	cout << "The values 0x" << hex << i2 << "\t at the address of 0x" << hex << i2_addr << endl;
	cout << "The values 0x" << hex << i3 << "\t at the address of 0x" << hex << i3_addr << endl;
	cout << "The values 0x" << hex << i4 << "\t at the address of 0x" << hex << i4_addr << endl;


	system("pause");
	exit(0);
	return 0;
