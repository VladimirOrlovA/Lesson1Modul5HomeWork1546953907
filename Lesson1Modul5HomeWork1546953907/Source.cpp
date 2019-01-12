#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

// Lesson1Modul5HomeWork1546953907


void Task1()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask1\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int M = 15;
	int A[M], i;

	for (i = 0; i < M; i++)  A[i] = 10 + rand() % 35;
	for (i = 0; i < M; i++)  printf("A[%2d] = %2d \n", i, A[i]);
	
}


void Task2()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask2\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int m = 100;
	int A[m] = { 0 }, i;

	for (i = 0; i < m; i++) A[i] = 50 + rand() % 51;
	for (i = 0; i < m; i++)
	{
		if (i % 2 != 0) printf("\t\t\t A[%2d] = %2d \n", i, A[i]);
		else printf("A[%2d] = %2d", i, A[i]);
		
	}

	printf("\n �������� ������� �� ���������� 50 � 100 \n");

	for (i = 0; i < m; i++)
	{
		if (A[i] == 50) printf(" A[%3d] = %3d \n", i, A[i]);
		if (A[i] == 100) printf(" A[%3d] = %3d \n", i, A[i]);
	}
		

}


void Task3()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask3\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 8;
	int arr[ind] = { 0 }, i;

	printf("\n ��������� ������������������ => \t");

		for (i = ind - 1; i >= 0; i--)
		{
			arr[i] = i;
			printf("%d - ", arr[i]);
		}
	
	printf("\n\n ������������ ������������������ => \t");
		
		for (i = 0; i < ind; i++)
		{
			arr[i] = i;
			printf("%d - ", arr[i]);
		}

	printf("\n\n");
	
}


void Task4()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask4\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 10;
	int A[ind], i, s, k;

	for (i = 0; i < ind; i++)
	{
		A[i] = -5 + rand() % 10;
		printf("A[%d]=%2d \n", i, A[i]);
	}
	
	/*
	printf("\n Var1 \n\n");

	for (i = 0; i < ind; i++) if (A[i] > 0) printf("A[%d]=%2d, ������� ������� - ������������� ����� \n", i, A[i]);
	printf("\n\n");
	for (i = 0; i < ind; i++) if (A[i] % 2 == 0 && A[i] != 0) printf("A[%d]=%2d, ������� ������� - ������ ����� \n", i, A[i]);
	
	
	printf("\n\n Var2 \n\n");
	
	for (i = 0; i < 100; i++) // ������� ��� �������� random 
	{
		s = 0 + rand() % ind;
		k = 0 + rand() % ind;

		printf("s=%d, k=%d \n", s, k);
	}*/
		s = 0 + rand() % ind;
		k = 0 + rand() % ind;

		printf("\n\n ��������� ������� ������� :  s=%d, k=%d \n\n", s, k);
		
	if(A [s] > 0) 
		printf("A[%d]=%2d, ������� ������� - ������������� ����� \n\n", s, A[s]);

	if (A[k] % 2 == 0 && A[i] != 0) 
		printf("A[%d]=%2d, ������� ������� - ������ ����� \n\n", k, A[k]);
	
	if (A[s] > A[k])
		printf("A[%d]=%2d > A[%d]=%2d \n", s, A[s], k, A[k]);
	else printf("A[%d]=%2d < A[%d]=%2d \n", s, A[s], k, A[k]);

}


void Task5()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask5\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 15;
	int A[ind], i, b;

	printf("���������� ������� ���������� ������� :\n");
	
	for (i = 0; i < ind; i++)
	{
		A[i] = 20 + rand() % 40;
		printf("A[%2d] = %2d \n", i, A[i]);
	}
	
	printf("\n���������� ���� �� ������� �� 20 :\n");

	for (i = 0; i < ind; i++)
	{
		A[i] -= 20;
		printf("A[%2d] = %2d \n", i, A[i]);
	}

	printf("\n��������� ���� �� ������� �� ��������� ������� A[%d] = %d :\n", i-1, A[ind-1]);
	
	b = A[ind-1];

	for(i = 0; i < ind; i++)
	{
		A[i] *= b;
		printf("A[%2d] = %2d \n", i, A[i]);
	}

	b = 1 + rand() % 5;
	printf("\n���������� ���� �� ������� �� ���� ����� B = %d :\n", b);
	
	for (i = 0; i < ind; i++)
	{
		A[i] += b;
		printf("A[%2d] = %2d \n", i, A[i]);
	}
}


void Task6()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask6\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 8;
	int A[ind], i;

	printf("\n ���������� ������� ���������� ������� :\n\n");
	
	for (i = 0; i < ind; i++)
	{
		A[i] = -10 + rand() % 15;
		printf("A[%2d] = %2d \n", i, A[i]);
	}

	printf("\n ��������������� �������� ������� :\n\n");

	for (i = 0; i < ind; i++)
	{
		if (A[i] > 0)
			printf("A[%2d] = %2d \n", i, A[i]);
	}

	printf("\n ������������� �������� ������� :\n\n");

	for (i = 0; i < ind; i++)
	{
		if (A[i] < 0)
			printf("A[%2d] = %2d \n", i, A[i]);
	}
}


void Task7()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask7\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 20;
	int A[ind], i;

	printf("���-�� ����� ������: \n");
	
	for (i = 0; i < ind; i++) A[i] = 1 + rand() % 8;
	
	for (i = 0; i < ind; i++)
	{
		printf("������� � %2d - %d \t", i + 1, A[i]);
		if ((i+1)%3==0) printf("\n");
	}
	
	printf("\n\n������ ���������� ������ ������� ������ 3� ����� � ����� ������: \n\n");

	for (i = 0; i < ind; i++)if (A[i] < 3) printf("- ������� � %d \n", i+1);

}


void Task8()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask8\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 14;
	int arr[ind], i, sum=0;

	for (i = 0; i < ind; i++)
	{
		arr[i] = 1 + rand() % 40;

		printf("A[%2d] = %2d \n", i, arr[i]);

		if (arr[i] % 2 == 0) sum++;

	}
	printf("\n ���-�� ������ ��������� � ������� = %d", sum);
}


void Task9()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 12;
	int arr[ind], i, sum=0;

	for (i = 0; i < ind; i++)
	{
		arr[i] = 1 + rand() % 10;

		sum = sum + arr[i];

		printf("A[%2d] = %d \n", i, arr[i]);
	}

	arr[5] = sum / ind;

	printf("\n\n");

	for (i = 0; i < ind; i++)
	{
		if (i != 5) printf("A[%2d] = %d \n", i, arr[i]);
		else printf("A[%2d] = %d - ������� ������� �� �� ���� ��� �������\n", i, arr[i]);
	}

}


void Task10()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask10\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 15;
	int arr[ind], i, sum = 0;

	for (i = 0; i < ind; i++)
	{
		arr[i] = 1 + rand() % 25;

		printf("A[%2d] = %2d \n", i, arr[i]);
		
		if (arr[i] > arr[0]) sum = sum + 1;
	}

	printf("\n���-�� ��������� ������� �������� ������� ��������: %d\n\n", sum);

}


int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));



	int number, flag;

	do
	{
		printf("Enter number of Task (1) to (10) => ");
		scanf_s("%d", &number);

		switch (number)
		{
		case 1: {Task1(); } break;
		case 2: {Task2(); } break;
		case 3: {Task3(); } break;
		case 4: {Task4(); } break;
		case 5: {Task5(); } break;
		case 6: {Task6(); } break;
		case 7: {Task7(); } break;
		case 8: {Task8(); } break;
		case 9: {Task9(); } break;
		case 10: {Task10(); } break;


		default: printf("\nEntered number of Task does not exist...\n\n");

		}

		SetConsoleTextAttribute(hConsole, 10);
		printf("\n--------------------------------------------------------------------------\n\n"); ("\n");
		SetConsoleTextAttribute(hConsole, 7);

		printf("Do you want to continue? 1/0 => ");
		scanf_s("%d", &flag);

	} while (flag == 1);



	if (flag == 1)
		system("pause");


}