#include<iostream>                                     
#include<math.h>                                                          
#include<time.h>
#include<locale.h>
using namespace std;									/*BİLİŞİM SİSTEMLERİ MÜHENDİSLİĞİ
														   PROGRAMLAMAYA GİRİŞ ÖDEVİ
														     AHMET EMİN CANSIZOĞLU
															      B181200054*/

float integral(int x) {	//integral için tanımladığım fonksiyon
	float fonk = (pow(x, 3)) / 3 + (pow(x, 2)) + 5 * x;
	return fonk;
}


int main()
{
	setlocale(LC_ALL, "Turkish");
	//----------------------------SORU1-----------------------------------------

	cout << "-------------------Cevap 1-------------------------" << endl;
	int aharf;
	aharf = 1;
	cout << "A harfi" << endl;
	for (int i = 5; i > 0; i--)				//A harfi
	{
		for (int j = 1; j < 11; j++)
		{
			if (i == j || i + aharf == j)
			{
				cout << "*";
			}
			if (i == 3)
			{
				cout << "  *******";
				break;
			}
			cout << " ";
		}
		aharf += 2;
		cout << endl;
	}
	cout << "E harfi" << endl;
	for (int i = 1; i < 10; i++)				//E harfi
	{
		if (i == 1 || i == 5 || i == 9)
		{
			for (int j = 0; j < 7; j++)
			{
				cout << "*";
			}
		}
		cout << "*" << endl;
	}
	cout << "C harfi" << endl; 
	for (int i = 1; i < 8; i++)					//C harfi
	{
		if (i == 1 || i == 7)
		{
			for (int j = 0; j < 9; j++)
			{
				cout << "*";
			}
		}
		cout << "*" << endl;
	}

	//----------------------------SORU2-----------------------------------------

	cout << "-------------------Cevap 2-------------------------" << endl;
	cout << "Hesap makinesi"<<endl;
	int sayi1, sayi2;
	char islem, eh;

	do
	{
		cout << "Bir sayi giriniz: ";
		cin >> sayi1;
		cout << "ikinci sayi giriniz: ";
		cin >> sayi2;
		cout << "Ne yapmak istersiniz" << endl;
		cout << "Toplama        (+)" << endl;
		cout << "Cikarma        (-) " << endl;
		cout << "Bolme          (/)" << endl;
		cout << "Carpma         (*)" << endl;
		cout << "Mod alma       (%)" << endl;
		cout << "Ust alma       (u)" << endl;
		cout << "Karekok alma   (k)" << endl;

		cin >> islem;

		switch (islem)
		{
		case '+':cout << "Toplam " << sayi1 + sayi2;
			break;
		case '-':cout << "Cikarma " << sayi1 - sayi2;
			break;
		case '/':cout << "Bolme  " << (float)sayi1 / sayi2;
			break;
		case '*':cout << "Carpma " << sayi1 * sayi2;
			break;
		case '%':cout << "Mod " << sayi1 % sayi2;
			break;
		case 'u':cout << "Ust " << pow(sayi1, sayi2);
			break;
		case 'k':cout << "Karekok 1. sayi " << sqrt(sayi1);
			cout << "\nKarekok 2. sayi " << sqrt(sayi2);
			break;
		default:
			cout << "Yanlıs secim yaptiniz. ";
			break;
		};
		do
		{
			cout << "\n Devam etmek istiyor musunuz (e/h) ";
			cin >> eh;
		} while (!(eh == 'e' || eh == 'h'));

	} while (eh != 'h');

	//----------------------------SORU3-----------------------------------------

	cout << "-------------------Cevap 3-------------------------" << endl;
	int aralık1, aralık2;
	cout << "Fonksiyon y=x^2+2*x+5 ";
	cout << "\nHangi aralıklarda hesaplamak istiyorsunuz?";
	cout << "\nBirinci değer = ";
	cin >> aralık1;
	cout << "İkinci değer = ";
	cin >> aralık2;
	if (aralık1 > aralık2)
	{
		cout << integral(aralık1 - aralık2);
	}
	else
	{
		cout << integral(aralık2 - aralık1);
	}

	//----------------------------SORU4-----------------------------------------

	cout << "-------------------Cevap 4-------------------------" << endl;
	cout << "Rastgele sayı üretme ve en büyüğünü bulma"<<endl;
	int rastgelesayilar[10];
	int sayilar;
	srand(time(0));

	for (int i = 0; i < 10; i++)
	{
		sayilar = rand() / 20;
		rastgelesayilar[i] = sayilar;
	}
	cout << "Üretilen sayılar = ";
	for (int j = 0; j < 10; j++)
	{
		cout << rastgelesayilar[j] << " ";
	}
	for (int k = 0; k < 10; k++)
	{
		if (rastgelesayilar[0] < rastgelesayilar[k])
		{
			rastgelesayilar[0] = rastgelesayilar[k];
		}
	}
	cout << "\nSayılar'dan en büyüğü = " << rastgelesayilar[0]<<endl;

	//----------------------------SORU5-----------------------------------------

	cout << "-------------------Cevap 5-------------------------" << endl;
	cout << "Girilen metnin tersini yazma" << endl;
	string metin;
	cout << "Bir metin giriniz: ";
	cin >> metin;

	metin = string(metin.rbegin(), metin.rend());
	cout << metin<<endl;

	//----------------------------SORU6-----------------------------------------

	cout << "-------------------Cevap 6-------------------------" << endl;
	cout << "Girilen metni büyük küçük yapma"<<endl;
	int islem6, kelime = 0;
	int karakterb, karakterk, karakterby, karakterilk;
	char karakter[20];
	cout << "Bir kelime giriniz: "<<endl;
	cin >> karakter;
	for (int i = 0; karakter[i] != '\0'; i++)
	{
		kelime++;
	}
	cout << "Kelime'yi büyütmek için 1'e basınız." << endl;
	cout << "Kelime'yi küçültmek için 2'e basınız." << endl;
	cout << "Kelime'yi büyük ise küçük , küçük ise büyük yapmak için 3'e basınız." << endl;
	cout << "Kelime'nin ilk harfini büyültnek için 4'e basınız." << endl;

	cin >> islem6;

	switch (islem6)
	{
	case 1:
		for (int i = 0; i < kelime; i++)
		{
			karakterb = karakter[i];
			if (karakterb > 96)
			{
				karakterb = karakterb - 32;
				karakter[i] = karakterb;
			}
		}
		cout << karakter<<endl;
		break;
	case 2:
		for (int i = 0; i < kelime; i++)
		{
			karakterk = karakter[i];
			if (karakterk < 96)
			{
				karakterk = karakterk + 32;
				karakter[i] = karakterk;
			}
		}
		cout << karakter<<endl;
		break;
	case 3:
		for (int i = 0; i < kelime; i++)
		{
			karakterby = karakter[i];
			if (karakterby > 96)
			{
				karakterby = karakterby - 32;
				karakter[i] = karakterby;
			}
			else
			{
				karakterby = karakterby + 32;
				karakter[i] = karakterby;
			}
		}
		cout << karakter<<endl;
		break;
	case 4:
		karakterilk = karakter[0];
		if (karakterilk > 96)
		{
			karakterilk = karakterilk - 32;
		}
		karakter[0] = karakterilk;
		cout << karakter<<endl;
		break;

	default:
		break;
	}

	//----------------------------SORU7-----------------------------------------

	cout << "-------------------Cevap 7-------------------------" << endl;
	cout << "Asal sayı bulma"<<endl;
	int asalsayi, bolen = 0;
	char isaret;
	srand(time(NULL));
	for (;;)
	{
		asalsayi = rand();
		cout << asalsayi << endl;
		for (int j = 2; j < asalsayi; j++)
		{
			if (asalsayi % j == 0)
			{
				bolen = +1;
			}
		}
		if (bolen == 0)
		{
			cout << "Asal sayıdır";
		}
		else
		{
			cout << "Asal değil";
		}
		cout << "\nDevam etmek için herhangi bir harfe çıkmak istiyorsanız bir noktalama işaretine tıklayınız: " << endl;
		cin >> isaret;
		if (isaret == '.' || isaret == ',' || isaret == ';' || isaret == '!' || isaret == '?')
		{
			break;
		}
	}

	//----------------------------SORU8-----------------------------------------

	cout << "-------------------Cevap 8-------------------------" << endl;
	cout << "Girilen kelimenin uzunluğunu bulma" << endl;
	int kelimeuzunluk = 0;
	char girilenkelime[20];
	cout << "Bir kelime giriniz: ";
	cin >> girilenkelime;

	for (int i = 0; girilenkelime[i] != '\0'; i++)
	{
		kelimeuzunluk++;
	}

	cout << "Kelimenin Uzunlugu: " << kelimeuzunluk;

	//----------------------------SORU9-----------------------------------------

	cout << "-------------------Cevap 9-------------------------" << endl;
	cout << "A ile başlayan rastgele kelime oluşturma (20 adet 10 harfli);" << endl;

	string karakterListesi = "abcdefghijklmnoprstuvyzABCDEFGHIJKLMNOPRSTUVYZ";
	srand(time(NULL));
	for (int i = 0; i < 20; i++)
	{
		string rastgeleHarfler = "A";
		for (int j = 0; j < 9; j++)
		{
			rastgeleHarfler += karakterListesi[rand() % karakterListesi.size()];
		}
		cout << "Rastgele Kelime: " << rastgeleHarfler << endl;
	}

	//----------------------------SORU10-----------------------------------------

	cout << "-------------------Cevap 10-------------------------" << endl;

	cout << "ASCII tablosundan asal olan harfleri bulan ve 3 harfli kelime yapma "<<endl;

	int ascısayi, ascıasal = 0;
	string ascı = "";
	for (int i = 65; i <= 90; i++)
	{
		ascıasal = 0;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				ascıasal += 1;
			}
		}
		if (ascıasal == 0)
		{
			ascı += i;
		}
	}
	cout << ascı << endl;;
	srand(time(NULL));
	string ascırastgele = "";
	for (int i = 0; i < 3; i++)
	{
		ascırastgele += ascı[rand() % ascı.size()];
	}
	cout << ascırastgele;

}