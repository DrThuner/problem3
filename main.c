#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>

int dane() {

    char name[20];
    char surname[20];

    printf("Wybrales program wypisujacy swoje dane!\n");

    printf("Podaj swoje imie:");
    scanf("%s", name);

    printf("Podaj swoje nazwisko:");
    scanf("%s", surname);

    printf("Twoje dane: %s %s", name, surname);
    return 0;

}

int kalkulator() {

    float firstNumber;
    float secondNumber;
    float result;
    char operacja;

    printf("Wybrales prosty kalkulator!\n");

    printf("Podaj pierwsza liczbe\n");
    scanf("%f", &firstNumber);

    printf("Podaj druga liczbe\n");
    scanf("%f", &secondNumber);

    printf("Wybierz funkcje kalkulatora: + - dodawanie, - - odejmowanie, * - mnozenie, / - dzielenie\n");
    scanf(" %c", &operacja);

    switch (operacja) {

        case '+':       // Dodawanie

            result = firstNumber + secondNumber;
            printf("%f + %f = %f", firstNumber, secondNumber, result);
            break;

        case '-':       // Odejmowanie

            result = firstNumber - secondNumber;
            printf("%f - %f = %f", firstNumber, secondNumber, result);
            break;

        case '*':       //Mnozenie


            result = firstNumber * secondNumber;
            printf("%f * %f = %f", firstNumber, secondNumber, result);
            break;

        case '/':       //Dzielenie


            if (secondNumber != 0) {
                result = firstNumber / secondNumber;
                printf("%f / %f = %f", firstNumber, secondNumber, result);
            } else {
                printf("Nie dzielimy przez zero!");
            }
            break;
        default:
            printf("Blad");
            return 0;
    }

}

int liczenie() {
    char input[256];
    fgets(input, sizeof(input), stdin);

    int count = 0;
    int str;
    while (str) {
        if (!isspace(str++))
            count++;
    }
    return count;
}

int main() {
    char Zadanie;
    scanf("%s", &Zadanie);

    switch (Zadanie) {
        case '1':
            dane();
            break;
        case '2':
            kalkulator();
            break;
        case '3':
            liczenie();
            break;
    }


    return 0;
}