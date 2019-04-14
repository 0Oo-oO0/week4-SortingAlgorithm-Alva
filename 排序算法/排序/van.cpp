#include "van.h"

void van()
{
	static int array10000[10000];
	static int array50000[50000];
	static int array200000[200000];
	static int array10000color[10000];
	static int array50000color[50000];
	static int array200000color[200000];

	static int Brray10000[10000];
	static int Brray50000[50000];
	static int Brray200000[200000];

	loadArray(array10000, array50000, array200000, array10000color, array50000color, array200000color);


	clock_t start, end;

	std::cout << "��ѡ����ú���" << std::endl;
	std::cout << "1:insertSort	2:RadixCountSort	3:MergeSort	4:QuickSort_Recursion" << std::endl
		<< "5:QuickSort	6:CountSort		7:ColorSort	8:findK" << std::endl;

	char key1, key2;

	key1 = _getch();
	std::cout << "�Ƿ�ʹ��Ԥ������ Y��ʹ�� N������" << std::endl;
	key2 = _getch();
	if (key2 == 'Y' || key2 == 'y')
	{
		switch (key1)
		{
		case'1':
			start = clock();
			insertSort(array10000, 10000);
			end = clock();
			std::cout << "1w��������ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array10000, 10000);
			start = clock();
			insertSort(array50000, 50000);
			end = clock();
			std::cout << "5w��������ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array50000, 50000);
			start = clock();
			insertSort(array200000, 200000);
			end = clock();
			std::cout << "20w��������ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array200000, 200000);
			break;
		case'2':
			start = clock();
			RadixCountSort(array10000, 10000);
			end = clock();
			std::cout << "1w��������ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array10000, 10000);
			start = clock();
			RadixCountSort(array50000, 50000);
			end = clock();
			std::cout << "5w��������ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array50000, 50000);
			start = clock();
			RadixCountSort(array200000, 200000);
			end = clock();
			std::cout << "20w��������ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array200000, 200000);
			break;
		case'3':
			start = clock();
			MergeSort(array10000,0,9999,Brray10000);
			end = clock();
			std::cout << "1w��������ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array10000, 10000);
			start = clock();
			MergeSort(array50000, 0, 49999, Brray50000);
			end = clock();
			std::cout << "5w��������ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array50000, 50000);
			start = clock();
			MergeSort(array200000, 0, 199999, Brray200000);
			end = clock();
			std::cout << "20w��������ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array200000, 200000);
			break;
		case'4':
			start = clock();
			QuickSort_Recursion(array10000, 0, 9999);
			end = clock();
			std::cout << "1w��������ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array10000, 10000);
			start = clock();
			QuickSort_Recursion(array50000, 0, 49999);
			end = clock();
			std::cout << "5w��������ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array50000, 50000);
			start = clock();
			QuickSort_Recursion(array200000, 0, 199999);
			end = clock();
			std::cout << "20w��������ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array200000, 200000);
			break;
		case'5':
			start = clock();
			QuickSort(array10000, 10000);
			end = clock();
			std::cout << "1w��������ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array10000, 10000);
			start = clock();
			QuickSort(array50000, 50000);
			end = clock();
			std::cout << "5w��������ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array50000, 50000);
			start = clock();
			QuickSort(array200000, 200000);
			end = clock();
			std::cout << "20w��������ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array200000, 200000);
			break;
		case'6':
			start = clock();
			CountSort(array10000, 10000, 10);
			end = clock();
			std::cout << "1w��������ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array10000, 10000);
			start = clock();
			CountSort(array50000, 50000, 10);
			end = clock();
			std::cout << "5w��������ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array50000, 50000);
			start = clock();
			CountSort(array200000, 200000, 10);
			end = clock();
			std::cout << "20w��������ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array200000, 200000);
			break;
		case'7':
			start = clock();
			ColorSort(array10000color, 10000);
			end = clock();
			std::cout << "1w��������ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array10000color, 10000);
			start = clock();
			ColorSort(array50000color, 50000);
			end = clock();
			std::cout << "5w��������ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array50000color, 50000);
			start = clock();
			ColorSort(array200000color, 200000);
			end = clock();
			std::cout << "20w��������ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array200000color, 200000);
			break;
		case'8':
			std::cout << "������kֵ" << std::endl;
			int k;
			std::cin >> k;
			std::cout << "��1w�������е�ֵ: " << findK(array10000, 10000, k) << std::endl;
			std::cout << "��5w�������е�ֵ: " << findK(array50000, 50000, k) << std::endl;
			std::cout << "��20w�������е�ֵ: " << findK(array200000, 200000, k) << std::endl;
			break;
		}
	}
	else if (key2 == 'N' || key2 == 'n') {
		std::cout << "������10������" << std::endl;
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
			std::cout << "��ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array10, 10);
			break;
		case'2':
			start = clock();
			RadixCountSort(array10, 10);
			end = clock();
			std::cout << "��ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array10, 10);
			break;
		case'3':
			start = clock();
			MergeSort(array10, 0, 9, brray10);
			end = clock();
			std::cout << "��ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array10, 10);
			break;
		case'4':
			start = clock();
			QuickSort_Recursion(array10, 0,9);
			end = clock();
			std::cout << "��ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array10, 10);
			break;
		case'5':
			start = clock();
			QuickSort(array10, 9);
			end = clock();
			std::cout << "��ʱ t=" << end - start << "ms" << std::endl;
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
			std::cout << "��ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array10, 10);
			break;
		case'7':
			start = clock();
			ColorSort(array10, 10);
			end = clock();
			std::cout << "��ʱ t=" << end - start << "ms" << std::endl;
			ifSuccess(array10, 10);
			break;
		case'8':
			int k;
			std::cout << "������kֵ" << std::endl;
			std::cin >> k;
			std::cout << "�����е�k����Ϊ�� " << findK(array10, 10, k) << std::endl;
			break;

		}
	}
}
