#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
template<typename T> int serchIndex(T array[],int lenght,T key,int begin=0) {
	for (int i = begin; i < lenght; i++)
		if (array[i] == key)
			return i;
	        return -1;
}

template<typename T> int lastSerchIndex(T array[], int lenght, T key, int begin = -1) {
	if (begin == -1)
		begin = lenght - 1;
	for (int i = begin; i >=0; i--)
		if(array[i] == key)
		return i;
		return -1;
}
void subWord(char array[], int lenght,char sym) {
	int symIndex = serchIndex(array, lenght, sym);
	if (symIndex == -1)
		cout << "������ �����";
	else
		for (int i = symIndex; i < lenght; i++)
			cout << array[i];
}



int main() {
	setlocale(LC_ALL, "ru");
	//int n;
	srand(time(NULL));
	/*int arr[10];
	cout << "����������� ������:\n[";
	for (int i = 0; i < 10; i++) {
		arr[i] = rand()%10 + 1;
		cout << arr[i] << ", ";
	}
	cout << "\b\b]\n";

	cout << "������� ������� ��������: ";
	cin >> n;
	cout << lastSerchIndex(arr, 10, n,6);//����� � ����� �������
	//cout << serchIndex(arr, 10, n,5); //����� � ����� �������*/

	//������� 1 "��������"
	char word[8] = {'f','u','n','c','t','i','o','n'};
	cout << "����������� ������\n";
	for (int i = 0; i < 8; i++) 
		cout << word[i];
		cout << endl;
		char Mysym;
		cout << "������� ������: ";
		cin >> Mysym;
		cout << "��������: ";
		subWord(word, 8, Mysym);
		cout << endl;





	return 0;
}