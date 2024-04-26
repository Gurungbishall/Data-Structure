#include <iostream>

int selection(int list[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int least = list[i];
        for (int j = i+1; j < n; j++)
        {
            if (list[i] > list[j])
            {
                least = list[j];
                list[j] = list[i];
                list[i] = least;
            }
        }
    }
    return 0;
}
int main()
{
    int list[100], n;
    std::cout << "Enter the number of elements of list:";
    std::cin >> n;
    std::cout << "Enter elements of list:\n";
    for (int i = 0; i < n; i++)
    {
        std::cin >> list[i];
    }
    selection(list, n);
    std::cout << "\n---Selection sorting---\n";
    for (int i = 0; i < n; i++)
    {
        std::cout << list[i] << "\n";
    }
    return 0;
}
