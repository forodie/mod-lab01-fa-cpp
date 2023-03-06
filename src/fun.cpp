// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) {
    int res = 0; // res - для подсчета слов
    bool flag_1 = false, flag_2 = false; // flag_1 - если встретили цифру в слове, будет true 
                                         
    for (int i = 0; str[i] != '\0'; i++) { // пробегаем по строке,  \0 - конец строки (пустой символ)
        if ('0' <= str[i] && str[i] <= '9') { 
            flag_1 = true;
        }

        if (str[i] != ' ') {
            flag_2 = true;
        }

        if (str[i] == ' ' && flag_2 == true) { // проверяем, конец слова или нет. (слово - символы до пробела)
            if (flag_1 == false) {             // если в слове не было цифры (false), то засчитываем +1 в result.
                res++;
            }
            flag_1 = false;                    // обнуляем флаги.
            flag_2 = false;
        }
    }

    return res;
}

unsigned int faStr2(const char *str) {
    int res = 0; 
    bool flagCorrect = false, flagSpace = true;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z' && flagSpace != false) { flagCorrect = true; } // проверяем корректность слова 
                                                                                          // заглавные буквы не должны встречаться после первой.
        if (str[i] >= 'A' && str[i] <= 'z') {
            flagSpace = false;
        } 
        else if (str[i] != ' ') { flagCorrect = false; } 
        else {
            if (flagCorrect == true) { res++; }
            flagCorrect = false; // ставим флаги по дефолту
            flagSpace = true; 
        }
    }

    return res;
}

unsigned int faStr3(const char *str) {
    int res = 0;
    
    return res;
}
