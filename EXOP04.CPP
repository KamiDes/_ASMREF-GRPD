
char sc8_arr[5] = { 0x41, 0x42, 0x59, 0x79, 0x7A };
	char*scPtr0,*scPtr1,*scPtr2,*scPtr3,*scPtr4;
	int md[5], madd[5];
	int i; //used as index

	// address for each element in array sc8_arr[5]
	scPtr0 = &sc8_arr[0];
	scPtr1 = &sc8_arr[1];
	scPtr2 = &sc8_arr[2];
	scPtr3 = &sc8_arr[3];
	scPtr4 = &sc8_arr[4];
	//display hex value, decimal value and char value for each element of char array
	printf( "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n" );
	printf("..........The value of each element of 8-bit array------\n");
	for (i = 0;i < 5;i++)
	{
		printf("The value of element %d in an array is 0x%x (hex), %d(decimal),%c(character)\n",
			i, sc8_arr[i], sc8_arr[i], sc8_arr[i]);
	}

	//display address in hexadecimal for each element of char array
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("------------------- The address of each element of 8-bit array----------\n");

	for (i = 0;i < 5;i++)
	{
	printf("The memory address of element %d in array is 0x%X(hexidecimal)\n", i, scPtr0+i);
	}
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

	//Find the total numbers in byte of array sc8_arr[5]
	printf("---------------The size information in bytes of an 8-bit array-----\n");
	printf("The total numbers in bytes of an 8-bit array with 5 elements is %d bytes\n", sizeof(sc8_arr));
	
	//Find the number of bytes of each element of array
	for (i = 0;i < 5;i++)
	{
		md[i] = sizeof(sc8_arr[i]);
		madd[i] = sizeof(scPtr0 + i);
		printf("---------------------------------------\n");
		printf("The size of elemet %d is %d bytes\n", i, madd[i]);
	}
	system("pause");
	return 0;



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
int const size = 4;
	short int sh16_arr[size] = { -1,-3, 1000, 2000 };
	short *svPtr0, *svPtr1, *svPtr2, *svPtr3;
	int md[size], madd[size];
	int i;

	//Display the address of each element in an array sh16_arr[4]
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("---------------The address of each element of 16 bit array---------\n\n");
	svPtr0 = &sh16_arr[0];
	svPtr1 = &sh16_arr[1];
	svPtr2 = &sh16_arr[2];
	svPtr3 = &sh16_arr[3];

	//Display the address of each element in an array sh16_arr[4]
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("--------------------------The value of each element of 16 bit array--------\n\n");

	for (i=0;i<4;i++)
	{
		printf("The value of element %d in an array is 0x%x (hex), %d(decimal),%c(character)\n",
			i, sh16_arr[i], sh16_arr[i], sh16_arr[i]);

	}
	//Display addresses in hexadecimal format for each element of the array
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("------------------The address of each element of 16 bit array---------------\n\n");
	for (i = 0;i < size;i++)
	{
		printf("The memory address of element %d in array is 0x%X (hexidecimal)\n", i, svPtr0 + i);
	}


	printf("++++++++++++++++++++++++++++++++++++\n");
	//Find the total number of bytes in the array
	printf("------------------The size information in bytes of a 16-bit array--------\n\n");
	printf("The total numbers in bytes of an 8-bit array with 5 elements is %d bytes\n", sizeof(sh16_arr));
	//find the number of bytes of each element of the array
	for (i = 0;i < size;i++)
	{
		md[i] = sizeof(sh16_arr[i]);
		madd[i] = sizeof(svPtr0 + i);
		printf("---------------------------------------\n");
		printf("The size of elemet %d is %d bytes\n", i, madd[i]);
	}
	system("pause");
	return 0;


///////////////////////////////////////////////////////////////////////////
part 3
///////////////////////////////////////////////////////////////////////////

int const size = 4;
	int i32_arr[size] = { 0x8000000, 0x0000ffff, -6600000};
	int* ivPtr0, * ivPtr1, * ivPtr2, * ivPtr3;
	int md[4], madd[4];
	int i;

	//Display the address of each element in an array i32_arr[4]
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("---------------The address of each element of 16 bit array---------\n\n");
	ivPtr0 = &i32_arr[0];
	ivPtr1 = &i32_arr[1];
	ivPtr2 = &i32_arr[2];
	ivPtr3 = &i32_arr[3];

	//Display the address of each element in an array i32_arr[4]
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("--------------------------The value of each element of 16 bit array--------\n\n");

	for (i = 0;i < 4;i++)
	{
		printf("The value of element %d in an array is 0x%x (hex), %d(decimal),%c(character)\n",
			i, i32_arr[i], i32_arr[i], i32_arr[i]);

	}
	//Display addresses in hexadecimal format for each element of the array
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("------------------The address of each element of 16 bit array---------------\n\n");
	for (i = 0;i < size;i++)
	{
		printf("The memory address of element %d in array is 0x%X (hexidecimal)\n", i, ivPtr0 + i);
	}


	printf("++++++++++++++++++++++++++++++++++++\n");
	//Find the total number of bytes in the array
	printf("------------------The size information in bytes of a 32-bit array--------\n\n");
	printf("The total numbers in bytes of an 32-bit array with 4 elements is %d bytes\n", sizeof(i32_arr));
	//find the number of bytes of each element of the array
	for (i = 0;i < size;i++)
	{
		md[i] = sizeof(i32_arr[i]);
		madd[i] = sizeof(ivPtr0 + i);
		printf("---------------------------------------\n");
		printf("The size of element %d is %d bytes\n", i, madd[i]);
	}
	system("pause");
	return 0;