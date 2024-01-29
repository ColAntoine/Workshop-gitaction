/*
** EPITECH PROJECT, 2024
** test
** File description:
** test
*/

Test(Sum1, test_sum, NULL)
{
    int value = sum(1, 1);
    int expected = 2;
    cr_assert(value == expected);
}