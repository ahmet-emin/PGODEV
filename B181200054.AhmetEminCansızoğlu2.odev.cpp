#include<iostream>                                     
#include<math.h>                                                          
#include<time.h>
#include<locale.h>
#include<iomanip>
using namespace std;									
														/*BİLİŞİM SİSTEMLERİ MÜHENDİSLİĞİ
														   PROGRAMLAMAYA GİRİŞ ÖDEVİ
														     AHMET EMİN CANSIZOĞLU
															      B181200054*/


int main()
{
	setlocale(LC_ALL, "Turkish");

	srand(time(NULL));

	//----------------------------SORU1-----------------------------------------

	cout << "-------------------Cevap 1-------------------------" << endl;

	int boyut;
	char tuş;
	do
	{
		cout << "Dizinin boyutunu giriniz: ";
		cin >> boyut;
	} while (boyut>100);
	
	int* dizi;
	dizi = (int*)malloc(sizeof(int) * boyut);     //Dizinin boyutunu belirlemek için pointer kullnadım.

	for (int i = 0; i < boyut; i++)
	{
		dizi[i] = rand() % 10;
	}

	int sıra=0;
A10:
	for (int i = 0; i < boyut; i++)
	{
		if (i==sıra)
		{
			cout << "---->" << dizi[i]<<endl;
		}
		else
		{
			cout << setw(6) << dizi[i] << endl;
		}

		if (i==boyut-1)
		{
			do
			{
			cout << "Aşağı ilerlemek için 'A' veya 'a' tuşuna basınız." << endl;
			cout << "Yukarı ilerlemek için 'D' veya 'd' tuşuna basınız." << endl;
			cout << "Aşağı ilerlemek için 'C' veya 'c' tuşuna basınız." << endl;
			cin >> tuş;
			} while (!(tuş == 'A' || tuş == 'a' || tuş == 'D' || tuş == 'd'|| tuş == 'C' || tuş == 'c'));
			if (tuş=='A'|| tuş=='a')
			{
				if (sıra==boyut-1)
				{
					sıra = 0;
					goto A10;
				}
				else
				{
					sıra++;
					goto A10;
				}
			}
			else if (tuş == 'D' || tuş == 'd')
			{
				if (sıra==0)
				{
					sıra = boyut - 1;
					goto A10;
				}
				else
				{
					sıra--;
					goto A10;
				}
			}
			else if (tuş == 'C' || tuş == 'c')
			{
				break;
			}

		}
	}

	//----------------------------SORU2-----------------------------------------

	cout << "-------------------Cevap 2-------------------------" << endl;

	int altd, üstd;
	int n;
	cout << "Matris'in boyutunu giriniz: ";
	cin >> n;
	int* matris;
	matris = (int*)malloc(sizeof(int) * (n * n));			 //Dizinin boyutunu belirlemek için pointer kullnadım.
	for (int i = 1; i <= n * n; i++)
	{
		matris[i] = rand() % 10;
	}
	cout << "Oluşturulan Matris: " << endl;
	for (int i = 1; i <= n * n; i++)
	{
		cout << setw(5) << matris[i];
		if (i % n == 0)
		{
			cout << endl;
		}
	}
	cout << "Alt değer giriniz: ";
	cin >> altd;
	cout << "Üst değer giriniz: ";
	cin >> üstd;

	char sembol[100];

	for (int i = 1; i <= n * n; i++)
	{
		if (matris[i] < altd)
		{
			sembol[i] = matris[i];
			sembol[i] = '*';
		}
		else if (matris[i] >= altd && matris[i] <= üstd)
		{
			sembol[i] = matris[i];
			sembol[i] = '-';
		}
		else if (matris[i] > üstd)
		{
			sembol[i] = matris[i];
			sembol[i] = '~';
		}

	}
	for (int i = 1; i <= n * n; i++)
	{
		cout << setw(5) << sembol[i];
		if (i % n == 0)
		{
			cout << endl;
		}
	}
	
}