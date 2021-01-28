#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"bge16.h"
void ayirici (void);
void tr_ara (void);
void ing_ara (void);
int main()
{
	system("TITLE AKILLI S�ZL�K T�RK�E VER 1.1 (DEMO)");
	system("color 0a");
	ayirici();
	char secim;

	while(1)
	{
		tr_puts("sozluk.txt den turkce.txt ve ingilizce.txt ye veri aktarmak\n(listeleri guncellemek) icin 1 e\n\n");
		tr_puts("T�rk�e kelime aramak i�in 2 ye \n\n");
		tr_puts("�ngilizce kelime aramak i�in 3 e \n\n");
		tr_puts("��k�� i�in 0 a bas�n.\n\n");
		tr_puts("Se�iminiz :");

		scanf("%c",&secim);

		switch(secim)
		{
			case '1' : ayirici();
			break;

			case '2' : tr_ara();
			break;

			case '3' : ing_ara();
			break;

			case '0' :

				remove("turkce.txt");
				remove("ingilizce.txt");


			return 0;
			break;

			default : system("cls");
		}

	}

}

//sozluk.txt dosyas�n� turkce.txt ve ingilizce.txt dosyalar�na par�alayan fonksiyon
void ayirici (void)
{
	char tr[100][100],ing[100][100];
	int i=0;
	FILE *oku;
	oku=fopen("sozluk.txt","r");

	while(fscanf(oku,"%s %s",tr[i],ing[i])!=EOF)
	{
		i++;
	}

	fclose(oku);

	//SIRALAMA

	int k,j;
	char h[100];

	for(k=0;k<i-1;k++)
	{
		for(j=0;j<i-1;j++)
		{
			if(tr_strcmp(tr[j],tr[j+1])>0)
			{
				strcpy(h,tr[j]);
				strcpy(tr[j],tr[j+1]);
				strcpy(tr[j+1],h);

				strcpy(h,ing[j]);
				strcpy(ing[j],ing[j+1]);
				strcpy(ing[j+1],h);

			}
		}

	}

	FILE *tryaz,*ingyaz;

	tryaz=fopen("turkce.txt","w");
	ingyaz=fopen("ingilizce.txt","w");

	int m;
	for(m=0;m<=i;m++)
	{
		fprintf(tryaz,"%s\n",tr[m]);

		fprintf(ingyaz,"%s\n",ing[m]);

	}

	fclose(tryaz);
	fclose(ingyaz);

	fclose(oku);
	system("cls");
}

//T�RK�E ARAMA FONKS�YONU
void tr_ara (void)
{
	FILE *oku1;
	oku1=fopen("turkce.txt","r");

	char tr_oku[100],ara[100];
	tr_puts("Aramak istedi�iniz T�rk�e kelimeyi girin :");

	fflush(stdin);
	scanf("%s",ara);

	int n=1;
	while(fscanf(oku1,"%s",tr_oku)!=EOF)
	{
		if(tr_strcmp(tr_oku,ara)==0)
		{
			char ing_oku[100];
			int a;

			FILE *oku2;
			oku2=fopen("ingilizce.txt","r");

			for(a=0;a<n;a++)
			fscanf(oku2,"%s",ing_oku);

			tr_puts("turkce.txt dosyas�nda arad���n�z ");
			tr_puts(ara);
			printf(" kelimesi %d. kelimesi kelimedir.",n);

			printf("\n\n");
			tr_puts(ara);
			tr_puts(" kelimesinin �ngilizce kar��l��� ");
			tr_puts(ing_oku);
			printf(" kelimesidir.\n\n");

			system("PAUSE");
			system("cls");

			fclose(oku2);
			break;

		}

		else
		n++;

	}



	if(tr_strcmp(tr_oku,ara)!=0)
	{
		tr_puts("\n! arad���n�z kelime s�zlukte bulunmamaktad�r.\n");
		system("PAUSE");
	}
	fclose(oku1);

}

//�NG�L�ZCE ARAMA FONKS�YONU
void ing_ara (void)
{
	FILE *oku3;
	oku3=fopen("ingilizce.txt","r");

	char ing_oku[100],ara2[100];
	tr_puts("Aramak istedi�iniz �ngilizce kelimeyi girin :");

	fflush(stdin);
	scanf("%s",ara2);

	int n=1;
	while(fscanf(oku3,"%s",ing_oku)!=EOF)
	{
		if(tr_strcmp(ing_oku,ara2)==0)
		{
			char tr_oku[100];
			int a;

			FILE *oku4;
			oku4=fopen("turkce.txt","r");

			for(a=0;a<n;a++)
			fscanf(oku4,"%s",tr_oku);

			tr_puts("ingilizce.txt dosyas�nda arad���n�z ");
			tr_puts(ara2);
			printf(" kelimesi %d. kelimedir.",n);

			printf("\n\n");
			tr_puts(ara2);
			tr_puts(" kelimesinin T�rk�e kar��l��� ");
			tr_puts(tr_oku);
			printf(" kelimesidir.\n\n");

			system("PAUSE");
			system("cls");

			fclose(oku4);
			break;

		}

		else
		n++;


	}

	if(tr_strcmp(ing_oku,ara2)!=0)
	{
		tr_puts("\n! arad���n�z kelime s�zlukte bulunmamaktad�r.\n");
		system("PAUSE");
	}
	fclose(oku3);

}
