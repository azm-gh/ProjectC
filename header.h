#include <iostream>

class testing {

public: 
	int addition(int a, int b);
	void bubblesort(int *array, int size);
	void printvalues(int *array, int size);
	
	
};

int testing::addition(int a, int b)
	{
		int r = a + b;
		return(r);
	}

void testing::bubblesort(int *array, int size)
{
	for(int i = 0; i<size-1; i++)
	{
		for(int j = 0; j<size-i-1; j++)
		{
			if(array[j]>array[j+1]){
				int val = array[j];
				array[j] = array[j+1];
				array[j+1] = val;
			}
		}
	}
}

void testing::printvalues(int *array, int size)
{
	for(int i=0; i< size; i++)
		std::cout << array[i] << " ";
}

