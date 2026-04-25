#include <stdio.h>

int main()
{
	int iter=0;             //initialize iter to 0

	while(iter < 10)
	{
		if (iter == 5)
		{
		    iter++;         // increment iter before continue
			continue;       //skips printing 5
		}
		
        printf("%d\n", iter);       //print iter
		iter++;                     //increment iter
	}

	return 0;
}