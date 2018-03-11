﻿#include <stdio.h>
#include <cctype>
#include <iostream>
#include <time.h>
#include <windows.h>
#include "MyFunc.h"

using namespace std;
unsigned short int nz;

void main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));

	int i, j;
	while (true)
	{
		cout << "Введите номер задания, 0 - для выхода "; cin >> nz; cin.get();

		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*1.	Даны две фамилии.Определить, какая из них длиннее.*/
			head("1. Даны две фамилии. Определить, какая из них длиннее.");
			Flen("Петров", "Алибеков");
		}
		else if (nz == 2)
		{
			/*2.	Даны названия трех городов. Вывести на экран самое длинное и самое короткое 
			название.*/
			char g1[] = "Абакан";
			char g2[] = "Ашхабад";
			char g3[] = "Астрахань";
			Glen(g1, g2, g3);
		}
		else if (nz == 3)
		{
			/*3.	Дано слово.Вывести на экран его третий символ*/
			char g1[] = "Абакан";
			printf("%c\n", g1[2]);
		}
		else if (nz == 4)
		{
			/*4.	Введите массив символов из 12 элементов. Замените каждый символ- цифру на символ '!'*/
			head("4. Введите массив символов из 12 элементов. Замените каждый символ- цифру на символ '!'");
			char g1[] = "А2МР56ДО9В0A";
			printf("%s\n", g1);		
			for (int i = 0; i < strlen(g1); i++)
			{
				if (g1[i] >= '0' &&g1[i]<='9')
				{
					g1[i] = '!';					
				}
			}
			printf("%s\n", g1);
		}
		else if (nz == 5)
		{
			/*5.	Дана матрица символов размером 2×6.Сколько раз среди данных символов встречаются символы + , -, *.*/
			head("5. Дана матрица символов размером 2x6. Сколько раз среди данных символов встречаются символы +, -, *.");
			char matr[2][6];			
			int c=0;
			for (int i = 0; i < 2; i++)
			{
				for (j = 0; j < 6; j++)
				{
					matr[i][j] = 38 + rand() % 10;
					if (matr[i][j] == '-' || matr[i][j] == '+' || matr[i][j] == '*')c++;
					cout << matr[i][j] << "\t";
				}
				cout << endl;
			}
			//c = countC(matr, 2, 6); выдает ошибку
			cout << c << endl;	
		}
		else if (nz == 6)
		{
			/*6.	Введите массив символов из 15 элементов.Подсчитать количество гласных русских букв.*/
			head("6. Введите массив символов из 15 элементов.Подсчитать количество гласных русских букв.");
			char str[] = "гласных русских";
			cout << str << endl;
			int c;
			c = countG(str, 15);
			red();
			cout << c << endl;
			white();
		}
		else if (nz == 7)
		{
			/*7.	Дан массив символов, среди которых есть символ двоеточие ‘ : ’.Определить, сколько символов 
			ему предшествует.*/
			head("7. Дан массив символов, среди которых есть символ двоеточие ‘:’. Определить, сколько символов ему предшествует.");
			char str[] = "Сроки выполнения ремонта ноутбуков: Замена экрана(матрицы), клавиатуры, DVD - привода производится в течении 1 часа! Предварительная диагностика в течении 10 - 15 минут БЕСПЛАТНО!";
			int c = 0;
			cout << str << endl;
			for (int i = 0; i < strlen(str); i++)
			{
				if (str[i] != ':')c++;
				else break;
			}
			red();
			cout << c << endl;
			white(); 
		}
		else if (nz == 8)
		{
			/*8.	Дан массив символов.Определить, сколько раз входит в него группа букв abc.*/
			head("8. Дан массив символов. Определить, сколько раз входит в него группа букв abc.");
			char str[] = "abckfhdkndamdhandhcn scjabcabc";
			int c=0;
			cout << str << endl;
			for (int i = 0; i < strlen(str)-2; i++)
			{
				if (str[i] == 'a'&&str[i + 1] == 'b'&&str[i + 2] == 'c')c++;				
			}
			red();
			cout << c << endl;
			white();
		}
		else if (nz == 9)
		{
			/*9.	Заданы две строки.Построить новую строку, состоящую из символов, которые входят в первую 
			строку, но не входят во вторую.*/
			head("9. Заданы две строки. Построить новую строку, состоящую из символов, которые входят в первую строку, но не входят во вторую.");
			char str1[]="Заданы две строки.", str2[]="Построить новую", str[40];
			cout << str1 << endl << str2 << endl;
			int c = 0,b=0;
			for (int i = 0; i < strlen(str1); i++)
			{
				b = 0;
				for (int j = 0; j < strlen(str2); j++)
				{
					if (str1[i] == str2[j]) b = 1;					
				}
				if (b != 1)
				{
					str[c] = str1[i];
					c++;
				}
			}
			str[c] = '\0';
			red();
			cout << str << endl;
			white();
		}
		else
		{
			red();
			cout << "Такого задания не существует \n";
			white();
		}
	}
}