

#include <iostream>

#include <string.h>
using namespace std;


//N1
int mystrcmp(const char* str1, const char* str2) {
    int r = strcmp(str1, str2);
    if (r == 0) {
        return 0;
    }
    else if (r > 0) {
        return 1;
    }
    else if (r < 0) {
        return -1;
    }
}
//N2
// здесь я взял рандомную функцию из инета, так как вы вроде не показывали пример данной функции для этой задачи
int StringToNumber(const char* str) {
    int result = atoi(str);
    cout << str << "\n";
    return *str;
}
//N3 Аналогично
char* NumberToString(int number, char* ab) {


    int res = sprintf_s(ab, 15, "%d", number);
    cout << "Result: " << ab << "\n";
    return ab;

}
//N4 
char* LowrCase(char* str) {
    for (int i = 0; i < str[i]; i++) {
        (str[i] = tolower(str[i]));
    }
    return str;
    

    //strlwr была ошибка из-за того что функция старая
}
//N5 тоже самое
char* UpCase(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }
    return str;
    
}
//N6
char* mystrrev(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = strlen(str - 1 - i);
    }
    return str;
}
int main() {

    char arr[] = "arr";
    char ar[] = "ar";
    cout << "Overall result: " << mystrcmp(arr, ar) << "\n";
    cout << "\n";
    char a[] = "3245452";
    cout << StringToNumber(a) << "\n";


    int number = 10;
    char ab[20];

    NumberToString(number, ab);
    cout << "\n";
    char at[] = "ARRRRR";
    cout << LowrCase(at) << "\n";
    char ax[] = "arrr";
    cout << UpCase(ax) << "\n";
    char ae[] = "ararararar";
    cout << mystrrev(ae);




}

