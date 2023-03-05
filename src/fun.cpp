// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) {
    int res = 0; // для подсчета слов
    bool flag_1 = false, flag_2 = false; // flag_1 - если встретили цифру в слове, будет true 
                                         
    for (int i = 0; str[i] != '\0'; i++) { // \0 - конец строки (пустой символ)
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

    return res;
}

unsigned int faStr3(const char *str) {
    int res = 0;
    
    return res;
}
