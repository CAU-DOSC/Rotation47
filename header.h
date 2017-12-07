#pragma once
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

void Swap(char arr[], int a, int b, int d);
void Block_Swap(char arr[], int n, int d);
char trivial_rotation(int num, int d, char *ary, int length);
void juggle(char line[], int n, int d);
void reverse(char *arr, int strlen_start, int strlen_end);
void Rotate_reverse_pos(char *arr, int n, int d);
void Rotate_reverse_neg(char *arr, int n, int d);