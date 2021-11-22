#include<bits/stdc++.h>
using namespace std;
int main()
{
	int dx;
	int lie;
	cin >> dx;
	//int array[10010][10010];
	int** array;
	array = new int* [dx];
	int k = dx * dx;

	for (int i = 0; i < dx; i++)
		array[i] = new int[dx];

	for (int i = 0; i < dx; i++)
		for (int j = 0; j < dx; j++) 
    array[i][j] = 0;

	int num = 2;  int h = 1; 
	lie=(dx - 1) / 2;
	array[h][lie] = 1;

	while (num <= k)
	{

		if (h == 1 && lie != dx)
		{
			array[dx][lie + 1]=num;
			lie = lie + 1; h = dx;
			num++;
		
		}
	

		else if (lie == dx && h != 1)
		{
			array[h-1][1]=num;
			h = h - 1; lie = 1;
			num++;
		}

		else if (h==1 && lie==dx )
		{
         array[h+1][dx]=num;
		 num++;
		 h=h+1; 
		}
		
		else 
		{
			if (h != 1 && lie != dx)
			
			
				if (array[h - 1][lie + 1] == 0)
				{
					array[h - 1][lie + 1] = num;
					h = h - 1; lie = lie + 1;
					num++;
				}
				else if(array[h - 1][lie + 1] != 0)
				{

					array[h +1][lie] = num;
					h = h + 1;
					num++;
				}
			
			
		}

	}

	for (int i = 0; i < dx; i++) {
		for (int j = 0; j < dx; j++)

			cout << array[i][j] << " ";
		cout << endl;
	}

	return 0;
}