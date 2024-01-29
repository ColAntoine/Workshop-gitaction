/*
** EPITECH PROJECT, 2024
** test
** File description:
** test
*/

int sum(int a, int b);

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/syscall.h>
#include <stdlib.h>
#include <sys/wait.h>

Test(Sum1, test_sum, NULL)
{
    int value = sum(1, 1);
    int expected = 2;
    cr_assert(value == expected);
}