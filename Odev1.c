#include <stdio.h>
#include <stdlib.h>

int LinearSearch(int dizi[],int n, int arananSayi)//Linear Search icin fonksiyon tanimlanir
{
	int j;
	
	for(j = 0; j < n; j++)//dizinin elemanlarini teker teker gezerek kontrol eder.
	{
		if(arananSayi == dizi[j])
		return 1;
	}
	return -1;
}

int main(int argc, char *argv[]) 
{
	int n;
	printf("Dizinin eleman sayisini giriniz: ");//Kullanicidan dizinin boyutunu girmesini ister
	scanf("%d",&n);
	
	int dizi[n];
	int i;
	
	printf("Dizinin elemanlarini giriniz: ");//Kullanicidan dizinin elemanlarini girmesini ister
	for(i = 0; i < n; i++)
	{
		scanf("%d",&dizi[i]);
	}
	
	int arananSayi;
	printf("Aramak istediginiz sayiyi giriniz: ");//Kullanicidan aramak istedigi sayiyi ister.
	scanf("%d",&arananSayi);
	
	int sonuc = LinearSearch(dizi, n, arananSayi);//Kullanicinin istedigi sayinin olup olmadigini kontrol etmek icin LinearSearch fonksiyonuna degerleri gonderir.
	
	if(sonuc == 1)
	printf("%d sayisi dizide mevcuttur.",arananSayi);
	
	if(sonuc == -1)
	printf("%d sayisi dizide bulunmamaktadir.",arananSayi);
	
	
	return 0;
}
