#include "van.h"

void van()
{
	static int array10000[10000];
	static int array50000[50000];
	static int array200000[200000];
	static int array10000color[10000];
	static int array50000color[50000];
	static int array200000color[200000];
	int array100[100];


	static int Brray10000[10000];
	static int Brray50000[50000];
	static int Brray200000[200000];
	int Brray100[100];

	loadArray(array10000, array50000, array200000, array10000color, array50000color, array200000color);


	clock_t start, end, sum;

	std::cout << "请选择调用函数" << std::endl;
	std::cout << "1:insertSort	2:RadixCountSort	3:MergeSort	4:QuickSort_Recursion" << std::endl
		<< "5:QuickSort	6:CountSort		7:ColorSort	8:findK" << std::endl;

	char key1, key2;
	srand((unsigned)time(NULL));

	key1 = _getch();
	std::cout << "是否使用预设数据 Y：使用 N：自设" << std::endl;
	key2 = _getch();
	if (key2 == 'Y' || key2 == 'y')
	{
		switch (key1)
		{
		case'1':
			start = clock();
			insertSort(array10000, 10000);
			end = clock();
			std::cout << "1w数据量用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array10000, 10000);
			start = clock();
			insertSort(array50000, 50000);
			end = clock();
			std::cout << "5w数据量用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array50000, 50000);
			start = clock();
			insertSort(array200000, 200000);
			end = clock();
			std::cout << "20w数据量用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array200000, 200000);
			sum = 0;
			for (int i = 0; i < 100000; i++)
			{
				for (int j = 0; j < 100; i++)
				{
					array100[j] = rand() % 10;
				}
				start = clock();
				insertSort(array100, 100);
				end = clock();
				sum += end - start;
			}
			std::cout << "100*100k数据量用时 t=" << sum << "ms" << std::endl;
			break;
		case'2':
			start = clock();
			RadixCountSort(array10000, 10000);
			end = clock();
			std::cout << "1w数据量用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array10000, 10000);
			start = clock();
			RadixCountSort(array50000, 50000);
			end = clock();
			std::cout << "5w数据量用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array50000, 50000);
			start = clock();
			RadixCountSort(array200000, 200000);
			end = clock();
			std::cout << "20w数据量用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array200000, 200000);
			sum = 0;
			for (int i = 0; i < 100000; i++)
			{
				for (int j = 0; j < 100; i++)
				{
					array100[j] = rand() % 10;
				}
				start = clock();
				RadixCountSort(array100, 100);
				end = clock();
				sum += end - start;
			}
			std::cout << "100*100k数据量用时 t=" << sum << "ms" << std::endl;
			break;
		case'3':
			start = clock();
			MergeSort(array10000,0,9999,Brray10000);
			end = clock();
			std::cout << "1w数据量用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array10000, 10000);
			start = clock();
			MergeSort(array50000, 0, 49999, Brray50000);
			end = clock();
			std::cout << "5w数据量用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array50000, 50000);
			start = clock();
			MergeSort(array200000, 0, 199999, Brray200000);
			end = clock();
			std::cout << "20w数据量用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array200000, 200000);
			sum = 0;
			for (int i = 0; i < 100000; i++)
			{
				for (int j = 0; j < 100; i++)
				{
					array100[j] = rand() % 10;
				}
				start = clock();
				MergeSort(array100, 0, 99, Brray100);
				end = clock();
				sum += end - start;
			}
			std::cout << "100*100k数据量用时 t=" << sum << "ms" << std::endl;
			break;
		case'4':
			start = clock();
			QuickSort_Recursion(array10000, 0, 9999);
			end = clock();
			std::cout << "1w数据量用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array10000, 10000);
			start = clock();
			QuickSort_Recursion(array50000, 0, 49999);
			end = clock();
			std::cout << "5w数据量用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array50000, 50000);
			start = clock();
			QuickSort_Recursion(array200000, 0, 199999);
			end = clock();
			std::cout << "20w数据量用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array200000, 200000);
			sum = 0;
			for (int i = 0; i < 100000; i++)
			{
				for (int j = 0; j < 100; i++)
				{
					array100[j] = rand() % 10;
				}
				start = clock();
				QuickSort_Recursion(array100, 0,99);
				end = clock();
				sum += end - start;
			}
			std::cout << "100*100k数据量用时 t=" << sum << "ms" << std::endl;
			break;
		case'5':
			start = clock();
			QuickSort(array10000, 10000);
			end = clock();
			std::cout << "1w数据量用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array10000, 10000);
			start = clock();
			QuickSort(array50000, 50000);
			end = clock();
			std::cout << "5w数据量用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array50000, 50000);
			start = clock();
			QuickSort(array200000, 200000);
			end = clock();
			std::cout << "20w数据量用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array200000, 200000);
			sum = 0;
			for (int i = 0; i < 100000; i++)
			{
				for (int j = 0; j < 100; i++)
				{
					array100[j] = rand() % 10;
				}
				start = clock();
				QuickSort(array100, 100);
				end = clock();
				sum += end - start;
			}
			std::cout << "100*100k数据量用时 t=" << sum << "ms" << std::endl;
			break;
		case'6':
			start = clock();
			CountSort(array10000, 10000, 9);
			end = clock();
			std::cout << "1w数据量用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array10000, 10000);
			start = clock();
			CountSort(array50000, 50000, 9);
			end = clock();
			std::cout << "5w数据量用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array50000, 50000);
			start = clock();
			CountSort(array200000, 200000, 9);
			end = clock();
			std::cout << "20w数据量用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array200000, 200000);
			sum = 0;
			for (int i = 0; i < 100000; i++)
			{
				for (int j = 0; j < 100; i++)
				{
					array100[j] = rand() % 10;
				}
				start = clock();
				CountSort(array100, 100, 9);
				end = clock();
				sum += end - start;
			}
			std::cout << "100*100k数据量用时 t=" << sum << "ms" << std::endl;
			break;
		case'7':
			start = clock();
			ColorSort(array10000color, 10000);
			end = clock();
			std::cout << "1w数据量用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array10000color, 10000);
			start = clock();
			ColorSort(array50000color, 50000);
			end = clock();
			std::cout << "5w数据量用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array50000color, 50000);
			start = clock();
			ColorSort(array200000color, 200000);
			end = clock();
			std::cout << "20w数据量用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array200000color, 200000);
			sum = 0;
			for (int i = 0; i < 100000; i++)
			{
				for (int j = 0; j < 100; i++)
				{
					array100[j] = rand() % 3;
				}
				start = clock();
				ColorSort(array100, 100);
				end = clock();
				sum += end - start;
			}
			std::cout << "100*100k数据量用时 t=" << sum << "ms" << std::endl;
			break;
		case'8':
			std::cout << "请输入k值" << std::endl;
			int k;
			std::cin >> k;
			std::cout << "在1w数据量中的值: " << findK(array10000, 10000, k) << std::endl;
			std::cout << "在5w数据量中的值: " << findK(array50000, 50000, k) << std::endl;
			std::cout << "在20w数据量中的值: " << findK(array200000, 200000, k) << std::endl;
			break;
		}
	}
	else if (key2 == 'N' || key2 == 'n') {
		std::cout << "请输入10个数据" << std::endl;
		int array10[10] , brray10[10];
		for (int i = 0; i < 10; i++)
		{
			std::cin >> array10[i];
		}
		int max = array10[0];
		switch (key1)
		{
		case'1':
			start = clock();
			insertSort(array10, 10);
			end = clock();
			std::cout << "用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array10, 10);
			break;
		case'2':
			start = clock();
			RadixCountSort(array10, 10);
			end = clock();
			std::cout << "用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array10, 10);
			break;
		case'3':
			start = clock();
			MergeSort(array10, 0, 9, brray10);
			end = clock();
			std::cout << "用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array10, 10);
			break;
		case'4':
			start = clock();
			QuickSort_Recursion(array10, 0,9);
			end = clock();
			std::cout << "用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array10, 10);
			break;
		case'5':
			start = clock();
			QuickSort(array10, 9);
			end = clock();
			std::cout << "用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array10, 10);
			break;
		case'6':
			for (int i = 1; i < 10; i++)
			{
				if (array10[i] > max) max = array10[i];
			}
			start = clock();
			CountSort(array10, 10, max);
			end = clock();
			std::cout << "用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array10, 10);
			break;
		case'7':
			start = clock();
			ColorSort(array10, 10);
			end = clock();
			std::cout << "用时 t=" << end - start << "ms" << std::endl;
			ifSuccess(array10, 10);
			break;
		case'8':
			int k;
			std::cout << "请输入k值" << std::endl;
			std::cin >> k;
			std::cout << "数组中第k个数为： " << findK(array10, 10, k) << std::endl;
			break;

		}
	}
}
