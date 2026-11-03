#define NOMINMAX
#include <iostream>
#include <Windows.h>
#include <string>
#include <limits>
#include <fcntl.h>  // _setmod, _fileno
#include <io.h>  
#include "test.hpp"

 
int main()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	srand(time(NULL));





	/*std::wstring name = L"Hello world";
	std::wcout << name << L"\n" << std::endl;

	std::wstring one, two;

	std::wcout << L"Введите первый текст: ";
	std::getline(std::wcin, one, L'\n');

	std::wcout << L"Введите второй текст: ";
	std::getline(std::wcin, two, L'\n');

	std::wcout << L"\nВы ввели:\n";
	std::wcout << L"1: " << one << std::endl;
	std::wcout << L"2: " << two << std::endl;*/

	



	PrintHello();


	one = 10;


	/*std::string login;
	std::string password;
	std::string irina;
	std::string svetka;

	std::cout << "\t\tРегистрация\n";
	std::cout << "Количество символов должно быть от 5 до 15\n";
	while (true)
	{
		std::cout << "Введите Логин: ";
		std::getline(std::cin, login, '\n');
		if (login.size() >= 4 && login.size() <= 14)
		{
			while (true)
			{
				std::cout << "Введите Пароль: ";
				std::getline(std::cin, password, '\n');
				if (password.size() >= 4 && password.size() <= 14)
				{
					std::cout << "Регистрация завершена!";
					Sleep(1500);
					break;
				}
				else
				{
					std::cout << "Количество символов должно быть от 5 до 15";
					Sleep(1500);
					system("cls");
				}
			}
			break;
		}
		else 
		{
			std::cout << "Количество символов должно быть от 5 до 15";
			Sleep(1500);
			system("cls");
		}
		
	}
	system("cls");
	std::cout << "\t\tВход в аккаунт\n";
	while (true)
	{
		std::cout << "Введите Логин: ";
		std::getline(std::cin, irina, '\n');
		if (login == irina)
		{
			std::cout << "Логин верный!\n";
			while (true)
			{
				std::cout << "Введите Пороль: ";
				std::getline(std::cin, svetka, '\n');
				if (password == svetka)
				{
					std::cout << "Вы успешно вошли в аккаунт!";
					Sleep(1500);
					break;
				}
				else
				{
					std::cout << "Не верный Логин";
				}
			}
			break;
		}
		else
		{
			std::cout << "Не верный Логин";
			Sleep(1500);
			system("cls");
		}

	}*/

/*	std::string name = "text";
	std::string name1 = "loh" + name;
	std::cout << name;
	std::cout << name1;*/

	/*std::string sosok = "karasi";
	for (int i = 0; i < sosok.size(); i++)
	{
		std::cout << sosok[i];
	}*/

	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	


	return 0;

}


	/*int row = 3, col = 4;
	int** arr = new int* [row];
	for (int i = 0; i < row; i++)
	{
		std::cin >> col;
		arr[i] = new int[col];
	}
	arr[1][2] = 10;


	for (int i = 0; i < row; i++)
	{
		delete[]  arr[i];
	}
	delete[]  arr;*/



/*  
	int size = 0;
	std::cin >> size;

	int* name + nullptr;
	int* name = new int[size];

	name[1] = 10;

	delete[] name;
*/


/*int size = 5;
int* arr = new int[size] {1, 3, 2, 4, 5}
for (int i = 0; i < size; i++)
{
	std::cout >> arr[i] << " ";
}*/



/*void Arrina(int* &arr, int size)
{
	arr = new int[size];
}

void panterka(int*& arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}


void armynin(int*& arr)
{

}*/


	//int ptr = new int;
	//*ptr = 10;









	//const int size = 10;
	//int arr[size];
	//int one = 5, two = 10;
	////std::swap(one, two);
	//std::cout << one << " " << two << "\n";
	//myswap(&one, &two);
	//std::cout << one << " " << two;


	//FillArray(arr,size);
	//for (int i = 0; i < 10; i++)
	//{
	//	std::cout << *(arr + i) << "\n";
	//}



/* 
	int a = 5;
	int* ptr = &a;


	std::cout << a << "\n";
	std::cout << ptr << "\n";
	std::cout << &ptr << "\n";
*/
	/*
	int sum = 0;
	const int loh = 6;

	int intmass[loh]{};
	double doubmass[loh]{};
	char charmass[loh]{};


	SetArray(intmass, loh);
	SetArray(doubmass, loh);
	SetArray(charmass, loh);
	PrintArray(intmass, loh);
	PrintArray(doubmass, loh);
	PrintArray(charmass, loh);

	*/

	/*
		const int mass = 5;
		int num[mass]{};
		int loh = 0;
		int coch[mass]{};

		for (int i = 0; i < mass; i++)
		{
			num[i] = rand() % 6;
			std::cout << num[i] << " ";
		}
		std::cout << "\n";

		for (int i = 0; i < mass; i++)
		{
			if (num[i] > 0)
			{
				coch[loh] = num[i];
				loh++;
			}
		}


		for (int i = 0; i < mass; i++)
		{
			if (coch[i] == 0)
			{
				coch[i] = -1;
			}
			std::cout << coch[i] << " ";
		}
		*/
		/*
		const int row = 4;
		const int col = 5;
		int num = 0;
		int stolb = 0;
		int ctrock = 0;
		int arr[row][col];
		int gor1 = 0, gor2 = 0, gor3 = 0, gor4 = 0;



		for (int i = 0; i < 3;i++)
		{
			for (int j = 0; j < 4; j++)
			{
				arr[i][j] = std::rand() % 10;
				std::cout << arr[i][j] << " ";
				num += arr[i][j];
				if (j == 3)
				{
					std::cout << "|";
					std::cout << num;
					stolb += num;
					num = 0;
				}
			}
			std::cout << "\n";



		}

		std::cout << "-----------\n";

		for (int i = 0; i < 3;i++)
		{
			gor1 += arr[i][0];
		}
		for (int i = 0; i < 3;i++)
		{
			gor2 += arr[i][1];
		}
		for (int i = 0; i < 3;i++)
		{
			gor3 += arr[i][2];
		}
		for (int i = 0; i < 3;i++)
		{
			gor4 += arr[i][3];
		}
		std::cout << "\n" << stolb +  gor1 + gor2 + gor3 + gor4;
		*/


		/*const int mass = 10;
		int arr[mass];
		int num = 0;
		int sum = 0;
		int notsum = 0;
		for (int a = 0; a < mass; a++)
		{
			arr[a] = rand() % 21 - 10;
	std::cout << arr[a] << " ";
			if (arr[a] > 0)
			{
				sum += arr[a];
			}
			else if (arr[a] < 0)
			{
				notsum += arr[a];
			}
		}
		std::cout << "\n";
		std::cout << sum << "\n";
		std::cout << notsum << "\n";*/
//void SetArray(int num[], int chery)
//{
//	for (int i = 0; i < chery; i++)
//	{
//		num[i] = rand() % 20 + 1;
//	}
//}
//void SetArray(double num[], int chery)
//{
//	for (int i = 0; i < chery; i++)
//	{
//		num[i] = rand() % 20 + (double)(rand() % 200) / 100.0;
//	}
//}
//void SetArray(char num[], int chery)
//{
//	for (int i = 0; i < chery; i++)
//	{
//		num[i] = 'a' + (rand() % 27);
//	}
//}
//
//void PrintArray(int num[], int chery)
//{
//	for (int i = 0; i < chery; i++)
//	{
//		std::cout << num[i] << " ";
//	}
//	std::cout << "\n";
//}
//
//void PrintArray(double num[], int chery)
//{
//	for (int i = 0; i < chery; i++)
//	{
//		std::cout << num[i] << " ";
//	}
//	std::cout << "\n";
//}
//
//void PrintArray(char num[], int chery)
//{
//	for (int i = 0; i < chery; i++)
//	{
//		std::cout << num[i] << " ";
//	}
//	std::cout << "\n";
//}
//
//
//template<typename T1>
//T1 Substruct(T1 one, T1 two)
//{
//	retutn one - two;
//}
//int prozz(int num,int num2)
//{
//	if (num2 == 0)
//	{
//		return 0;
//	}
//	return num + prozz(num, num2 - 1);
//}
//void myswap(int* num, int* num2)
//{
//	int n = *num;
//	*num = *num2;
//	*num2 = n;
//}
//void FillArray(int* arr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		*(arr + i) = rand() % 10 + 1;
//	}
//}
/*void ArrPlus(int*& arr, int size)
{
	int *temp = new int[size];
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	delete[] arr;

	arr = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		arr[i] = temp[i];
	}
	arr[size - 1] = 100;
	delete[] temp;
}*/


		 //double a = 0;
		//double b = 0;
		//if (a == b)
		//{
		//	std::cout << 1;
		//}
		//std::cin >> a;
		//std::cin >> b;
		//std::cout << a << "\n" << b << "\n";
	/*

	#include <iostream>
	#include <Windows.h>


	int main()
	{
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);


		std::cout << "Решение полного квадратного уравнения\n\n";
		std::cout << "ax^2 + bx + c = 0\n\n";
		double a = 0, b = 0, c = 0, d = 0, x1 = 0, x2 = 0;
		std::cout << "Введение А:";
		std::cin >> a;
		std::cout << "Введите B:";
		std::cin >> b;
		std::cout << "Введение C:";
		std::cin >> c;

		std::cout << a << "x^2 + " << b << "x + " << c << " = 0\n\n";

		d = std::pow(b, 2) - 4 * a * c;
		std::cout << "Дискриминант:" << d << "\n\n";
		if (d < 0)
		{
			std::cout << "Корней нет!\n";
		}
		else if (d == 0)
		{
			x1 = -b / (2 * a);
			std::cout << " один корень: " << x1 << "\n";
		}
		else
		{
			x1 = (-b + std::sqrt(d)) / (2 * a);
			x2 = (-b - std::sqrt(d)) / (2 * a);
			std::cout << "Первый корень: " << x1 << "\n";
			std::cout << "Второй корень: " << x2 << "\n";
		}




	/*
		double dollar = 86.47;
		double euro = 100.50;
		double farit = 67.69;
		double yuan = 12.88;
		double volyt = 0;
		double chislo = 0;

		std::cout << "Выберите валюту\n";
		std::cout << "1 - dollar\n2 - euro\n3 - farit\n4 - yuan\n";
		std::cin >> volyt;
		std::cout << "Введите сумму\n";
		std::cin >> chislo;
		if (volyt == 1)
		{
			std::cout << ((chislo / dollar) / 100) * 95;
		}
		else if (volyt == 2)
		{
			std::cout << ((chislo / euro) / 100) * 95;
		}
		else if (volyt == 3)
		{
			std::cout << ((chislo / farit) / 100) * 95;
		}
		else (volyt == 4);
		{
			std::cout << ((chislo / yuan) / 100) * 95;
		}
		*/

		/*
			int choose = 0, hp = 0, number = 0, randomNumber = 0;
			int maxHp = 25, maxHpHard = 25, chance = 30;


			while (true)
			{
				//гланое меню
				system("cls");
				std::cout << "\n\n\n\tИгра \"Угадай число\"\n\n\n";
				std::cout << "1 - Начать игру\n";
				std::cout << "2 - Настройки\n";
				std::cout << "0 - Выход\n";
				std::cout << "Ввод: ";
				std::cin >> choose;



				if (choose == 1)
				{
					//выбор игры
					system("cls");
					std::cout << "\n\n\n\tВыберите уровень сложности\"\n\n\n";
					std::cout << "1 - Легкий (1 - 500)\n";
					std::cout << "2 - Сложный (1 - 5000)\n";
					std::cout << "0 - Выход в главное меню\n";
					std::cout << "Ввод: ";
					std::cin >> choose;

					if (choose == 1)
					{
						//создание рандомного числа
						system("cls");
						randomNumber = rand() % 500 + 1;
						hp = maxHp;

						while (true)
						{
							//начало игры и ввод числа
							system("cls");
							std::cout << "Кол - во Hp: " << hp << "\n";
							std::cout << "Введите число от 1 до 500: ";
							std::cin >> number;


							if (number == randomNumber)
							{
								//вывод при победе
								std::cout << "Вы угадали! Поздравляю\n";
								std::cout << "Осталось Hp: " << hp << "\n";
								system("pause");
								break;

							}
							else if (number < 1 || number > 500)
							{
								//вывод при выходе за лимиты
								std::cout << "Вы вышли за лимиты\n";
								Sleep(1200);

							}
							else
							{
								//вывод при неверном числе
								hp--;
								if (hp <= 0)
								{

									std::cout << "Вы проиграли!\n";
									std::cout << "Число компьютера было: " << randomNumber << "\n";
									system("pause");
									break;

								}

								std::cout << "Не верно\n";
								Sleep(1500);

								std::cout << "Кол - во Hp: " << hp << "\n";
								std::cout << "Взять подсказку за 1 жизнь?\n";
								std::cout << "1 - да\nЛюбое число - Нет\nВвод: ";
								std::cin >> choose;

								if (choose == 1)
								{
									hp--;
									if (hp <= 0)
									{
										std::cout << "Вы проиграли!\n";
										std::cout << "Число компьютера было: " << randomNumber << "\n";
										system("pause");
										break;
									}
									if (number < randomNumber)
									{
										std::cout << "Ваше число меньше числа компьютера\n";
									}
									else
									{
										std::cout << "Ваше число больше числа компьютера\n";
									}
									Sleep(2000);
								}
								else
								{
									std::cout << "Отказ от подсказки\n";
									Sleep(500);
								}

							}

						}
					}
					else if (choose == 2)
					{
						system("cls");
						randomNumber = rand() % 5000 + 1;
						hp = maxHp;

						while (true)
						{
							system("cls");
							std::cout << "Кол - во Hp: " << hp << "\n";
							std::cout << "Введите число от 1 до 5000: ";
							std::cin >> number;


							if (number == randomNumber)
							{
								std::cout << "Вы угадали! Поздравляю\n";
								std::cout << "Осталось Hp: " << hp << "\n";
								system("pause");
								break;

							}
							else if (number < 1 || number > 5000)
							{
								std::cout << "Вы вышли за лимиты\n";
								Sleep(1200);

							}
							else
							{
								hp--;
								if (hp <= 0)
								{
									std::cout << "Вы проиграли!\n";
									std::cout << "Число компьютера было: " << randomNumber << "\n";
									system("pause");
									break;

								}

								std::cout << "Не верно\n";
								Sleep(1500);

								std::cout << "Кол - во Hp: " << hp << "\n";
								std::cout << "Взять подсказку за 1 жизнь?\n";
								std::cout << "1 - да\nЛюбое число - Нет\nВвод: ";
								std::cin >> choose;

								if (choose == 1)
								{
									if (rand() % 101 <= chance)
									{
										std::cout << "Бесплатная подсказка\n";
										Sleep(1000);
									}
									hp--;
									if (hp <= 0)
									{
										std::cout << "Вы проиграли!\n";
										std::cout << "Число компьютера было: " << randomNumber << "\n";
										system("pause");
										break;
									}
									if (number < randomNumber)
									{
										std::cout << "Ваше число меньше числа компьютера\n";
									}
									else
									{
										std::cout << "Ваше число больше числа компьютера\n";
									}
									Sleep(2000);
								}
								else
								{
									std::cout << "Отказ от подсказки\n";
									Sleep(500);
								}

							}

						}
					}
					else if (choose == 0)
					{
						break;
					}
					else
					{
						std::cout << "\nНекорректный ввод\n\n";
						Sleep(1500);
					}
				}
				else if (choose == 2)
				{
					while (true)
					{
						std::cout << "\n\n\n\t\tНастройка игры\n\n\n\t\t";
						std::cout << "1 - Изменить кол - во жизней для легкой игры\n";
						std::cout << "2 - Изменить кол - во жизней для сложной игры\n";
						std::cout << "3 - Изменить шанс бесплатной подсказки для сложной игры\n";
						std::cout << "0 - Выход\n\n";
						std::cout << "Ввод: ";
						std::cin >> choose;

						if (choose == 1)
						{
							while (true)
							{
								system("cls");
								std::cout << "Введите кол - во жизней для легкой игры: ";
								std::cin >> choose;
								if (choose < 1 || choose > 100)
								{
									std::cout << "Допустимый лимит от 1 до 100\n";
									Sleep(1500);

								}
								else
								{
									std::cout << "Успешно\n";
									maxHp = choose;
									Sleep(1000);
									break;
								}
							}
						}
						else if (choose == 2)
						{
							while (true)
							{
								system("cls");
								std::cout << "Введите кол - во жизней для сложной игры: ";
								std::cin >> choose;
								if (choose < 1 || choose > 100)
								{
									std::cout << "Допустимый лимит от 1 до 100\n";
									Sleep(1500);

								}
								else
								{
									std::cout << "Успешно\n";
									maxHp = choose;
									Sleep(1000);
									break;
								}
							}
						}
						else if (choose == 3)
						{
							while (true)
							{
								system("cls");
								std::cout << "Введите шанс бесплатной подсказки для сложной игры: ";
								std::cin >> choose;
								if (choose < 0 || choose > 100)
								{
									std::cout << "Допустимый лимит от 0 до 100\n";
									Sleep(1500);

								}
								else
								{
									std::cout << "Успешно\n";
									chance = choose;
									Sleep(1000);
									break;
								}
							}
						}
						else if (choose == 0)
						{
							break;
						}
						else
						{
							std::cout << "Некоректный ввод\n";
							Sleep(1500);
						}

					}
				}
				else if (choose == 0)
				{
					system("cls");
					std::cout << "\n\n\n\tСпасибо за игру\n\n\n";
					break;
				}
				else
				{
					std::cout << "\nНекорректный ввод\n\n";
					Sleep(1500);
				}



			}
			*/





