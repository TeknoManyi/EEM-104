#include<stdio.h>
main()
{
	int x[3][2]={{1,2},{3,4},{5,6}};
	int y[3][2]={{5,6},{2,7},{4,3}};
	int z[3][2];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<2; j++)
		{
			z[i][j] = x[i][j]+y[i][j];
			printf("c[%d][%d]=%d\t",i,j,z[i][j]);
		}
		printf("\n");
	}	
}
