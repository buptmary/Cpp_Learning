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
        {"����", 23, "��"},
        {"����", 22, "��"},
        {"�ŷ�", 20, "��"},
        {"����", 21, "��"},
        {"����", 19, "Ů"},
    };

    int len = sizeof(hero_list) / sizeof(Hero);

    bubble_sort_stru(hero_list, len);

    for (int i = 0; i < len; i++)
    {
        cout << hero_list[i].name << " " << hero_list[i].age << " " << hero_list[i].sex << endl;
    }
}