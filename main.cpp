#include <iostream>
#include "header.h"

/*void printvalue(int array)
{
	for(int i=0; i< size; i++)
		std::cout << i << " ";
}*/


int main()
{	
	testing test1;
	int a =test1.addition(5,6);
	std::cout << a << std::endl;
	
	int x[] ={45,4,23,2,16};
	test1.bubblesort(x,5);
	test1.printvalues(x,5);

	return 0;
}

	

	/*for(int i=0; i< size; i++)
		std::cout << i << " ";
}
	printvalue(x,5);
	return 0;
}*/


