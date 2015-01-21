// By Mickoon
//---------------------------------------------------------------------
// ADD TWO NUMBERS (in char format) 
//---------------------------------------------------------------------
// Convert characters to integers first, 
// Then add two arbitrarily large integers inputs and define the result
//---------------------------------------------------------------------
// TIP: Use Binary Addition
//---------------------------------------------------------------------

void Add(char *input1, char *input2, char *sum)
{
	int numberOneSize = strlen(input1);	
	int numberTwoSize = strlen(input2); 
	int i, total, pos = 0;
	int carry = 0;
	int max = numberOneSize; 	// Let numberOneSize as max in first
	char temp[MAX_ARRAY_SIZE]; 	// Temporary characters which contains the sum of these two inputs reversely

	// When numberTwoSize is bigger than numberOneSize, which is maximum string length 
	// From initialisation, numberTwoSize becomes max.
	if (numberTwoSize > numberOneSize)
		max = numberTwoSize;

	// e.g. numberOneSize = 18 and numberTwoSizse = 16:
	// Calculation starts from the end of the number!
	for (i = max - 1; i >= 0; i--)	// 17, 16, 15, ... 1, 0
	{
		if (max == numberOneSize)
		{
			// Converting input1 characters to integers values by subtracting '0', which is 48 in integer
			// e.g. when (int)input1[9] in integer = 57 so when 57-48 = 9, which is integer
			// Then add integers of input1 and input2 together
			if (i > numberTwoSize)
				total = (int)input1[i] - '0';
			else
				total = (int)input1[i] - '0' + (int)input2[i] - '0';
		}
		else
		{
			if (i > numberOneSize)
				total = (int)input2[i] - '0';
			else
				total = (int)input2[i] - '0' + (int)input1[i] - '0';
		}

		// This shows when there is a carry the total number is added
		if (carry == 1)
		{
			total++;
			carry = 0;
		}

		// When the total number from adding two integers is equal or greater than 10 there is carry
		// and then show the remainder on that position
		if (total >= 10)
		{
			carry = 1;
			total = total - 10;
		}

		temp[pos] = (char)total + '0';
		pos++;
	}

	// When there is a carry at the start position on your temporary result, 
	// add number 1 integer to the next position of the array. 
	if (carry == 1)
	{
		temp[pos] = (char)1 + '0';
		pos++;
	}

	// Final step: reverse back the temp value which is same as the sum of input1 and input2.
	for (i = 0; i < pos; i++)
	{
		sum[i] = temp[pos - 1 - i];
	}
}