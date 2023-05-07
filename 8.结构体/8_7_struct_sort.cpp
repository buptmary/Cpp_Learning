#include <iostream>
using namespace std;

struct Hero
{
    string name;
    int age;
    string sex;
};

void bubble_sort_stru(Hero hero_list[], int len)
{
    Hero temp;

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (hero_list[j].age > hero_list[j + 1].age)
            {
                temp = hero_list[j];
                hero_list[j] = hero_list[j + 1];
                hero_list[j + 1] = temp;
            }
        }
    }
}

int main()
{
    Hero hero_list[5] = {
        {"Áõ±¸", 23, "ÄĞ"},
        {"¹ØÓğ", 22, "ÄĞ"},
        {"ÕÅ·É", 20, "ÄĞ"},
        {"ÕÔÔÆ", 21, "ÄĞ"},
        {"õõ²õ", 19, "Å®"},
    };

    int len = sizeof(hero_list) / sizeof(Hero);

    bubble_sort_stru(hero_list, len);

    for (int i = 0; i < len; i++)
    {
        cout << hero_list[i].name << " " << hero_list[i].age << " " << hero_list[i].sex << endl;
    }
}