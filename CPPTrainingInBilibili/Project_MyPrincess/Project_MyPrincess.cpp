// Project_MyPrincess.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <array>
#include <Windows.h>
#include <iomanip>
#include <ctime>   //�����

using namespace std;

int main()
{
	///����
	string value_father_name;
	/*Ů����*/
	string value_daughter_name;
	/*Ů������ ��&��*/
	int value_birth_month;
	int value_birth_date;
	///������Ϣ����: ���������������������¡�����
	array<int, 5> value_array_baseinfo;
	/*����*/
	string value_daughter_constell;
	///������λ����
	string constell_names[12][2]=
	{
	{ "ɽ����","ˮƿ��" },{ "ˮƿ��","˫����" },{ "˫����","������" },{ "������","��ţ��" },		//1 2 3 4
	{ "��ţ��","˫����" },{ "˫����","��з��" },{ "��з��","ʨ����" },{ "ʨ����","��Ů��" },		//5 6 7 8
	{ "��Ů��","�����" },{ "�����","��Ы��" },{ "��Ы��","������" },{ "������","ɽ����" }		//9 10 11 12
	};
	///���·ݿ���������
	int constell_dates[]{ 20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22 };
	int choice, temp1, temp2, temp3;
	//1.����Ůȡ��
	cout << "���׵�������";
		cin >> value_father_name;
	cout << "Ů����������";
		cin >> value_daughter_name;

	//2.ΪŮ��¼���ʼ��Ϣ
	cout << "Ů�������գ�MM DD����";
	cin >> value_birth_month >> value_birth_date ;

	if (constell_dates[value_birth_month - 1] > value_birth_date)
	{
		value_daughter_constell = constell_names[value_birth_month - 1][0];
	}
	else
	{
		value_daughter_constell = constell_names[value_birth_month - 1][1];
	}
	
	cout << "Ů������Ϣ��";
	cout << "������" << value_daughter_name << endl;
	cout << "���գ�1997-" << value_birth_month << "-" << value_birth_date << endl;
	cout << "������" << value_daughter_constell << endl;

	//		����Ů��������������Ϸ�������������������������������¡����ʣ�
	if (value_daughter_constell == "������")
	{
		value_array_baseinfo[0] = 80;
		value_array_baseinfo[1] = 18;
		value_array_baseinfo[2] = 18;
		value_array_baseinfo[3] = 28;
		value_array_baseinfo[4] = 14;
	}
	else if (value_daughter_constell == "��ţ��")
	{
		value_array_baseinfo[0] = 65;
		value_array_baseinfo[1] = 30;
		value_array_baseinfo[2] = 28;
		value_array_baseinfo[3] = 35;
		value_array_baseinfo[4] = 20;
	}
	else if (value_daughter_constell == "˫����")
	{
		value_array_baseinfo[0] = 50;
		value_array_baseinfo[1] = 35;
		value_array_baseinfo[2] = 23;
		value_array_baseinfo[3] = 26;
		value_array_baseinfo[4] = 27;
	}
	else if (value_daughter_constell == "��з��")
	{
		value_array_baseinfo[0] = 40;
		value_array_baseinfo[1] = 31;
		value_array_baseinfo[2] = 31;
		value_array_baseinfo[3] = 23;
		value_array_baseinfo[4] = 37;
	}
	else if (value_daughter_constell == "ʨ����")
	{
		value_array_baseinfo[0] = 85;
		value_array_baseinfo[1] = 35;
		value_array_baseinfo[2] = 11;
		value_array_baseinfo[3] = 28;
		value_array_baseinfo[4] = 20;
	}
	else if (value_daughter_constell == "��Ů��")
	{
		value_array_baseinfo[0] = 35;
		value_array_baseinfo[1] = 28;
		value_array_baseinfo[2] = 36;
		value_array_baseinfo[3] = 29;
		value_array_baseinfo[4] = 18;
	}
	else if (value_daughter_constell == "�����")
	{
		value_array_baseinfo[0] = 42;
		value_array_baseinfo[1] = 33;
		value_array_baseinfo[2] = 25;
		value_array_baseinfo[3] = 24;
		value_array_baseinfo[4] = 32;
	}
	else if (value_daughter_constell == "��Ы��")
	{
		value_array_baseinfo[0] = 50;
		value_array_baseinfo[1] = 25;
		value_array_baseinfo[2] = 40;
		value_array_baseinfo[3] = 20;
		value_array_baseinfo[4] = 26;
	}
	else if (value_daughter_constell == "������")
	{
		value_array_baseinfo[0] = 57;
		value_array_baseinfo[1] = 31;
		value_array_baseinfo[2] = 25;
		value_array_baseinfo[3] = 26;
		value_array_baseinfo[4] = 29;
	}
	else if (value_daughter_constell == "ɽ����")
	{
		value_array_baseinfo[0] = 56;
		value_array_baseinfo[1] = 30;
		value_array_baseinfo[2] = 26;
		value_array_baseinfo[3] = 22;
		value_array_baseinfo[4] = 25;
	}
	else if (value_daughter_constell == "ˮƿ��")
	{
		value_array_baseinfo[0] = 41;
		value_array_baseinfo[1] = 43;
		value_array_baseinfo[2] = 20;
		value_array_baseinfo[3] = 27;
		value_array_baseinfo[4] = 23;
	}
	else if (value_daughter_constell == "˫����")
	{
		value_array_baseinfo[0] = 41;
		value_array_baseinfo[1] = 40;
		value_array_baseinfo[2] = 29;
		value_array_baseinfo[3] = 25;
		value_array_baseinfo[4] = 23;
	}

	//3.��ʼ��Ϸ��ѭ��
	//��Ϸ��1997��6�¿�ʼ
	for (int year = 1997; year <= 1997 + 7; year++)
	{
		for (int month = (year == 1997) ? 6 : 1; month <= 12; month++) // �����1997�꣬�ʹ�6��ʼ�������1��ʼ
		{
			//�жϱ����Ƿ�ΪŮ������
			if (month == value_birth_month)
			{
				cout << "������" << value_daughter_name << "�����գ�Ҫ��Ҫ�������أ�" << endl;
				// �����û���������ж�

			}
			//��ʾ��Ϸ���˵�
			cout << "\n1.�鿴״̬\n2.�����г�\n3.����̸��\n4.�浵\n5.����" << endl;
			cin >> choice;
			switch(choice)
			{
			case 1:		// �鿴״̬
				cout << "Ů������Ϣ��";
				cout << "������" << value_daughter_name << endl;
				cout << "���գ�1997-" << value_birth_month << "-" << value_birth_date << endl;
				cout << "������" << value_daughter_constell << endl;
				break;

			}
		}
	}

	//4.���ݸ�������ж���Ϸ���






    return 0;
}

