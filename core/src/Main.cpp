/*
** EPITECH PROJECT, 2023
** B-OOP-400-STG-4-1-arcade-remi.mergen
** File description:
** Main
*/

#include "ICore.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return 84;
    ICore *core = ICore::getInstance();
    if (core->init(av[1]) == false)
        return 84;
    core->run();
    return 0;
}
