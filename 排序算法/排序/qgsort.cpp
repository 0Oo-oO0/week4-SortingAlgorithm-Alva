#include"qgsort.h"

void insertSort(int * a, int n)
{
	int p;
	for (int i = 1; i < n; i++)
	{
		if (a[i] < a[i - 1])
		{
			p = a[i];
			for (int j = i; j > 0&&(p<a[j - 1]); j--)
			{
				a[j] = a[j - 1];
				a[j - 1] = p;
			}
		}
	}


}

void MergeArray(int *a, int start, int end, int *result)
{
	int left_length = (end - start + 1) / 2 + 1;
	int left_index = start;
	int right_index = start + left_length;
	int result_index = start;
	while (left_index < start + left_length && right_index < end + 1)
		{
			if (a[left_index] <= a[right_index])
			result[result_index++] = a[left_index++];
		else
			result[result_index++] = a[right_index++];
		}
	while (left_index < start + left_length)
		result[result_index++] = a[left_index++];
	while (right_index < end + 1)
		result[result_index++] = a[right_index++];
}

void MergeSort(int *a, int start, int end, int *result)
{
	if (1 == end - start)
	{
		if (a[start] > a[end])
		{
			int temp = a[start];
			a[start] = a[end];
			a[end] = temp;
			}
		return;
		}
	else if (0 == end - start)//如果只有一个元素，则不用排序
		return;
	else
	{
		MergeSort(a, start, (end - start + 1) / 2 + start, result);
		MergeSort(a, (end - start + 1) / 2 + start + 1, end, result);
		MergeArray(a, start, end, result);
	    for (int i = start; i <= end; ++i)
	    a[i] = result[i];
     }
}

void QuickSort_Recursion(int * a, int begin, int end)
{
	if (begin > end) return;
	int pos = Partition(a, begin, end);
	QuickSort_Recursion(a, begin, pos - 1);
	QuickSort_Recursion(a, pos + 1, end);
}

void QuickSort(int * a, int size)
{
	
	std::stack<int> c;
	c.push(size);
	c.push(0);
	int left, right, midnum, p;
	while (!c.empty())
	{
		int leftnum = c.top();
		c.pop();
		int rightnum = c.top();
		c.pop();
		left = leftnum;
		right = rightnum;
		midnum = a[(left + right) / 2];
		while (right > left)
		{
			while (a[left] < midnum) left++;
			while (a[right] > midnum) right--;
			if (right >= left)
			{
				p = a[right];
				a[right--] = a[left];
				a[left++] = p;
			}
		}
		if (left < rightnum)
		{
			c.push(rightnum);
			c.push(left);
		}
		if (right > leftnum)
		{
			c.push(right);
			c.push(leftnum);
		}
	}
}

int Partition(int * a, int begin, int end)
{
	int first = begin + 1;
	int second = end;
	int p;
	int temp = a[begin];
	while (first <= second)
	{
		while (a[first] < temp) first++;
		while (a[second] > temp) second--;
		if (second > first)
		{
			p = a[second];
			a[second--] = a[first];
			a[first++] = p;
		}
		else first++;
 	}
	p = a[second];
	a[second] = a[begin];
	a[begin] = p;
	return second;
}

void CountSort(int * a, int size, int max)
{
	int *arr =	new int[max+1];
	int *tmp = new int[size];
	for (int i = 0; i < size + 1; i++)
	{
		tmp[i] = a[i];
	}
	for (int i = 0; i < max + 2; i++)
	{
		arr[i] = 0;
	}
	for (int i = 0; i < size; i++)
	{
		arr[a[i]]++;
	}
	for (int i = 1; i < max + 1; i++)
	{
		arr[i] += arr[i - 1];
	}
	for (int i = size - 1; i >= 0; i--)
	{
		a[arr[tmp[i]] - 1] = tmp[i];
		arr[tmp[i]]--;
	}


}

void RadixCountSort(int * a, int size)
{
	int max = 1;
	int p = 10;
	for (int i = 0; i < size; i++)
	{
		while (a[i] >= p)
		{
			p *= 10;
			++max;
		}
	}
	int *tmp = new int[size];
	int count[10], k;
	int radix = 1;
	for (int i = 1; i <= max; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			count[j] = 0;
		}
		for (int j = 0; j < size; j++)
		{
			k = (a[j] / radix) % 10; 
			count[k]++;
		}
		for (int j = 1; j < 10; j++)
			count[j] = count[j - 1] + count[j]; 
		for (int j = size- 1; j >= 0; j--) 
		{
			k = (a[j] / radix) % 10;
			tmp[count[k] - 1] = a[j];
			count[k]--;
		}
		for (int j = 0; j < size; j++) a[j] = tmp[j];
		radix = radix * 10;
	}
}

void ColorSort(int * a, int size)
{
	int zero = 0, two = size - 1, p = 0;
	while (p < two)
	{
		p++;
		while (a[zero] == 0) zero++;
		while (a[two] == 2) two--;
		if (a[p] == 0)
		{
			a[p] = a[zero];
			a[zero] = 0;
		}
		if (a[p] == 2)
		{
			a[p] = a[two];
			a[two--] = 2;
			while (a[two] == 2) two--;
			if (a[two] == 0)
			{
				a[two] = a[zero];
				a[zero++] = 0;
			}
		}
	}
}

int findK(int * a, int size, int k)
{
	QuickSort_Recursion(a, 0, size-1);
	return a[k];
}

void ifSuccess(int * a, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (a[i] > a[i + 1])
		{
			std::cout << "fail" << std::endl;
			return;
		}
	}
	std::cout << "true" << std::endl;
}
