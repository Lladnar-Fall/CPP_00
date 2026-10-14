#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    i = 1;
    while (av[i])
    {
        j = 0;
        while (av[i][j])
        {
            if (av[i][j] >= 97 && av[i][j] <= 122)
                std::cout << static_cast<char>(av[i][j] - 32);
            else
                std::cout << av[i][j];
            j++;
        }
        i++;
    }
    std::cout << '\n';
    return (0);
}