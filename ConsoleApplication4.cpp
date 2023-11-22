#include <iostream>
#include <cstring> 
using namespace std;
#define NumStudents 5
#define Size 15


void Sort(char arr[NumStudents][Size])
{
    for (int i = 0; i < NumStudents - 1; i++)
    {
        for (int j = 0; j < NumStudents - i - 1; j++)
        {
            if (strcmp(arr[j], arr[j + 1]) > 0)
            {
                for (int l = 0; l < Size; l++) 
                {
                    char temp = arr[j][l];
                    arr[j][l] = arr[j + 1][l];
                    arr[j + 1][l] = temp;
                }
            }
        }
    }
}

int main() {
    setlocale(0, "RU");
    char SecondName[NumStudents][Size];

    for (int i = 0; i < NumStudents; i++)
    {
        cout << "Enter second name student #" << i + 1 << ":\n";
        cin >> SecondName[i];
    }
    cout << "\n\n";

    for (int i = 0; i < NumStudents; i++)
    {
        cout << SecondName[i] << " ";
    }
    cout << "\n";
    Sort(SecondName);
    cout << "\n";
    for (int i = 0; i < NumStudents; i++)
    {
        cout << SecondName[i] << " ";
    }
}
