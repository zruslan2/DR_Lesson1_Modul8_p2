#include <vector>
#include <time.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

int i, j;

void head(char mas[])
{
	int len, third, s1_len, s2_len, s3_len, maks;
	len = strlen(mas);
	third = len / 3;
	s1_len = third;
	for (int i = s1_len; i < len; i++)
	{
		if (mas[s1_len] != ' ') s1_len++;
		else break;
	}
	s2_len = third;
	for (int i = s1_len + s2_len; i < len; i++)
	{
		if (mas[s1_len + s2_len] != ' ') s2_len++;
		else break;
	}
	s3_len = len - (s1_len + s2_len);
	vector<char>str1(s1_len);
	vector<char>str2(s2_len);
	vector<char>str3(s3_len);
	for (int i = 0; i < s1_len; i++)
	{
		str1[i] = mas[i];
	}
	for (int i = s1_len + 1; i < s1_len + s2_len; i++)
	{
		str2[i - (s1_len + 1)] = mas[i];
	}
	for (int i = s1_len + s2_len + 1; i < len; i++)
	{
		str3[i - (s1_len + s2_len + 1)] = mas[i];
	}
	maks = s1_len;
	if (s2_len > maks)maks = s2_len;
	if (s3_len > maks)maks = s3_len;
	system("cls");
	SetConsoleTextAttribute(hConsole, 11);
	setlocale(LC_ALL, ".866");
	cout << " �";
	for (int i = 0; i <= maks + 1; i++)cout << "�";
	cout << "�\n";
	cout << " � "; setlocale(LC_ALL, ".1251");
	for (int i = 0; i<s1_len; i++) cout << str1[i];
	if (s1_len < maks)
	{
		for (int i = 0; i < maks - s1_len; i++)cout << " ";
	}
	setlocale(LC_ALL, ".866"); cout << " �\n";
	cout << " � "; setlocale(LC_ALL, ".1251");
	for (int i = 0; i<s2_len; i++) cout << str2[i];
	if (s2_len < maks)
	{
		for (int i = 0; i < maks - s2_len; i++)cout << " ";
	}
	setlocale(LC_ALL, ".866"); cout << " �\n";
	cout << " � "; setlocale(LC_ALL, ".1251");
	for (int i = 0; i<s3_len; i++) cout << str3[i];
	if (s3_len < maks)
	{
		for (int i = 0; i < maks - s3_len; i++)cout << " ";
	}
	setlocale(LC_ALL, ".866"); cout << " �\n";
	cout << " �";
	for (int i = 0; i <= maks + 1; i++)cout << "�";
	cout << "�\n";
	SetConsoleTextAttribute(hConsole, 15);
	setlocale(LC_ALL, ".1251");
}

void yellow()
{
	SetConsoleTextAttribute(hConsole, 14);
}

void white()
{
	SetConsoleTextAttribute(hConsole, 15);
}

void red()
{
	SetConsoleTextAttribute(hConsole, 12);
}

void green()
{
	SetConsoleTextAttribute(hConsole, 11);
}

void Flen(char f1[], char f2[])
{
	cout << f1 << endl;
	cout << f2 << endl;
	if (strlen(f1) > strlen(f2))	
		cout << "������ ������� ������ ������\n";	
	else if (strlen(f1) < strlen(f2))	
		cout << "������ ������� ������ ������\n";	
	else
		cout << "������� ���������� �� �����\n";
}

void Glen(char *g1, char *g2, char *g3)
{
	if ((strlen(g1) > strlen(g2) && strlen(g1) > strlen(g3)) && (strlen(g2) < strlen(g1) && strlen(g2) < strlen(g3)))
		cout << g1 << endl << g2 << endl;
	else if ((strlen(g1) > strlen(g2) && strlen(g1) > strlen(g3)) && (strlen(g3) < strlen(g1) && strlen(g3) < strlen(g2)))
		cout << g1 << endl << g3 << endl;
	else if ((strlen(g2) > strlen(g1) && strlen(g2) > strlen(g3)) && (strlen(g3) < strlen(g1) && strlen(g3) < strlen(g2)))
		cout << g2 << endl << g3 << endl;
	else if ((strlen(g2) > strlen(g1) && strlen(g2) > strlen(g3)) && (strlen(g1) < strlen(g2) && strlen(g1) < strlen(g3)))
		cout << g2 << endl << g1 << endl;
	else if ((strlen(g3) > strlen(g1) && strlen(g3) > strlen(g2)) && (strlen(g1) < strlen(g2) && strlen(g1) < strlen(g3)))
		cout << g3 << endl << g1 << endl;
	else if ((strlen(g3) > strlen(g1) && strlen(g3) > strlen(g2)) && (strlen(g2) < strlen(g1) && strlen(g2) < strlen(g3)))
		cout << g3 << endl << g2 << endl;
	else
		cout << "���� ������ �� ����� ������\n";	
}

int countC(char *m, int row, int coll)
{
	int c = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < coll; j++)
		{
			if (*(m + i*coll + j) == '-' || *(m + i*coll + j) == '+' || *(m + i*coll + j) == '*') c++;			
		}		
	}
	return c;
}

int countG(char *m, int r)
{
	int c = 0;
	for (int i = 0; i < r; i++)
	{
		if (m[i] == '�' || m[i] == '�' || m[i] == '�' || m[i] == '�' || m[i] == '�' || m[i] == '�' || m[i] == '�' || m[i] == '�' || m[i] == '�' || m[i] == '�' || m[i] == '�' || m[i] == '�' || m[i] == '�' || m[i] == '�' || m[i] == '�' || m[i] == '�' || m[i] == '�' || m[i] == '�' || m[i] == '�' || m[i] == '�')c++;
	}
	return c;
}