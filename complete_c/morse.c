#include <stdio.h>
#include <ctype.h>

void englishToMorse(char ch)
{
    // Приведем введенную букву или цифру к верхнему регистру
    ch = toupper(ch);

    // Выводим шифр Морзе для введенного символа
    switch (ch)
    {
    case 'A':
        printf(".-|");
        break;
    case 'B':
        printf("-...|");
        break;
    case 'C':
        printf("-.-.|");
        break;
    case 'D':
        printf("-..|");
        break;
    case 'E':
        printf(".|");
        break;
    case 'F':
        printf("..-.|");
        break;
    case 'G':
        printf("--.|");
        break;
    case 'H':
        printf("....|");
        break;
    case 'I':
        printf("..|");
        break;
    case 'J':
        printf(".---|");
        break;
    case 'K':
        printf("-.-|");
        break;
    case 'L':
        printf(".-..|");
        break;
    case 'M':
        printf("--|");
        break;
    case 'N':
        printf("-.|");
        break;
    case 'O':
        printf("---|");
        break;
    case 'P':
        printf(".--.|");
        break;
    case 'Q':
        printf("--.-|");
        break;
    case 'R':
        printf(".-.|");
        break;
    case 'S':
        printf("...|");
        break;
    case 'T':
        printf("-|");
        break;
    case 'U':
        printf("..-|");
        break;
    case 'V':
        printf("...-|");
        break;
    case 'W':
        printf(".--|");
        break;
    case 'X':
        printf("-..-|");
        break;
    case 'Y':
        printf("-.--|");
        break;
    case 'Z':
        printf("--..|");
        break;
    case '0':
        printf("-----|");
        break;
    case '1':
        printf(".----|");
        break;
    case '2':
        printf("..---|");
        break;
    case '3':
        printf("...--|");
        break;
    case '4':
        printf("....-|");
        break;
    case '5':
        printf(".....|");
        break;
    case '6':
        printf("-....|");
        break;
    case '7':
        printf("--...|");
        break;
    case '8':
        printf("---..|");
        break;
    case '9':
        printf("----.|");
        break;
    case ' ':
        printf("|:_..._:|");
        break;
    default:
        break;
    }
}

int main()
{
    char input[51];
    int i = 0;

    while (input[i - 1] != '\n')
    {
        scanf("%c", &input[i]);
        englishToMorse(input[i]);
        i++;
    }

    return 0;
}
