#include <iostream>
#include <conio.h>
using namespace std;

void Tampil(int data[], int n)
{
	for(int i=0; i < n; i++)
	{
		cout << data[i] << "  ";
	}
}
void BubleSort(int data[], int n, int pilihan)
{
	cout << "Metode Buble Sort" << endl;
	cout << "-----------------------------------------" << endl;
	for(int i=1; i < n; i++)
	{
		for(int j=0; j < n-i; j++)
		{
			if(pilihan == 1)
			{
				if(data[j] > data[j+1])
				{
					int temp;
					temp = data[j];
					data[j] = data[j+1];
					data[j+1] = temp;
				}
			}
			else
			{
				if(data[j] < data[j+1])
				{
					int temp;
					temp = data[j];
					data[j] = data[j+1];
					data[j+1] = temp;
				}
			}
		}
		cout << "Step ke-" << i << " : ";
		Tampil(data, n);
		cout << endl;
	}
	cout << "\nHasil Urut menggunakan Buble Sort : ";
	Tampil(data, n);
}
void SelectionSort(int data1[], int n, int pilihan)
{
	cout << "\n\nMetode Selection Sort" << endl;
	cout << "-----------------------------------------" << endl;
	int compare, j;
	for(int i=0; i < n-1; i++)
	{
		compare = i;
		for(j = i+1; j < n; j++)
		{
			if(pilihan == 1)
			{
				if(data1[j] < data1[compare])
				{
					compare = j;
				}
			} 
			else if(pilihan == 2)
			{
				if(data1[j] > data1[compare])
				{
					compare = j;
				}
			}
		}
		if(compare != i)
		{
			int temp;
			temp = data1[i];
			data1[i] = data1[compare];
			data1[compare] = temp;
		}
		cout << "Step ke-" << i+1 << " : ";
		Tampil(data1, n);
		cout << endl;
	}
	cout << "\nHasil Urut menggunakan Selection Sort : ";
	Tampil(data1, n);
}
void InsertionSort(int data2[], int n, int pilihan)
{
	cout << "\n\nMetode Insertion Sort" << endl;
	cout << "-----------------------------------------" << endl;
	int temp, k, j;
	for(k=1; k < n; k++)
	{
		temp = data2[k];
		j = k-1;
		if(pilihan == 1)
		{
			while(data2[j] > temp && j >= 0)
			{
				data2[j+1] = data2[j];
				j = j-1;
			}
			data2[j+1] = temp;
		}
		else
		{
			while(data2[j] < temp && j >= 0)
			{
				data2[j+1] = data2[j];
				j = j-1;
			}
			data2[j+1] = temp;
		}

		for(int i=0; i < n; i++)
		{

		}
		cout << "Step ke-" << k << " : ";
		Tampil(data2, n);
		cout << endl;
	}
	
	cout << "\nHasil Urut menggunakan Insertion Sort : ";
	Tampil(data2, n);
}

int main()
{
	int n, pilihan;
	cout << "Input banyak data : "; cin >> n;
	int data[n];
	int data1[n];
	int data2[n];

	for(int i=0; i < n; i++)
	{
		cout << "Input data ke-" << i+1 << " : ";
		cin >> data[i];
	}
	for(int i=0; i < n; i++)
	{
		data1[i] = data[i];
		data2[i] = data[i];
	}
	cout << "\nData sebelum urut yaitu : ";
	Tampil(data, n);

	cout << "\n\nPilihan metode pengurutan" << endl;
	cout << "1. Ascending [A-Z]" << endl;
	cout << "2. Descending [Z-A]" << endl;
	cout << "\nPilihan anda [1/2] ? : "; cin >> pilihan;

	if(pilihan == 1 || pilihan == 2)
	{
		BubleSort(data, n, pilihan);
		SelectionSort(data1, n, pilihan);
		InsertionSort(data2, n, pilihan);
	} 
	else 
	{ 
		cout << "Maaf, nomor yang anda masukkan tidak valid!" << endl;
	}

	getch();
	return 0;
}