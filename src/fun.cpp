// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) {
    // res - для подсчета слов
    // flag_1 - если встретили
    // цифру в слове, будет true
    int res = 0;
    bool flag_1 = false, flag_2 = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if ('0' <= str[i] && str[i] <= '9') {
            flag_1 = true;
        }

        if (str[i] != ' ') {
            flag_2 = true;
        }

    // проверяем, конец слова или нет
        if (str[i] == ' ' && flag_2 == true) {
            if (flag_1 == false) { // если в слове не было цифры (false),
                res++; // то засчитываем +1 в result.
            }
            flag_1 = false; // обнуляем флаги.
            flag_2 = false;
        }
    }

    return res;
}

unsigned int faStr2(const char *str) {
    int res = 0;
    bool flagCorrect = false, flagSpace = true;

    for (int i = 0; str[i] != '\0'; i++) {
        // проверяем корректность слова
        // заглавные буквы не должны встречаться после первой.
        if (str[i] >= 'A' && str[i] <= 'Z' && flagSpace != false) {
            flagCorrect = true;
        }

        if (str[i] >= 'A' && str[i] <= 'z') {
            flagSpace = false;
        }
        else if (str[i] != ' ') {
            flagCorrect = false;
            } else {
            if (flagCorrect == true) {
                res++;
            }
            flagCorrect = false; // ставим флаги по дефолту
            flagSpace = true;
        }
    }

    return res;
}

unsigned int faStr3(const char *str) {
    // count - для подсчета кол-ва слов,
    // sum - для подсчета кол-ва букв в строке
    // flag - проверка на конец слова
    int count = 0, sum = 0;
    bool flag = false;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            sum++;
            flag = true;
        }
        if (str[i] == ' ') {
            if (flag != false) {
                count++;
            }
            flag = false;
        }
    }

    if (flag != false) {
        count++;
    } // проверяем последнее слово

    float rounded = sum/count; // среднее арифметическое
    return static_cast<int>(rounded + 0.5); // приведение к int отбрасывает дробную часть
}
