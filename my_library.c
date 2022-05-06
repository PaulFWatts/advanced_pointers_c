void swap(int num1, int num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}

int findMax(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}

int findMin(int num1, int num2)
{
	if (num1 < num2)
		return num1;
	else
		return num2;
}

void findMinMax(int num1, int num2, int *pMax, int *pMin)
{
	if (num1 > num2)
	{
		*pMax = num1;
		*pMin = num2;
	}
	else
	{
		*pMax = num2;
		*pMin = num1;
	}
}
