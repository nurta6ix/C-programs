// just copied it from ai
#include <stdio.h>

int stringLength(char str[])
{
    int i = 0;

    while (str[i] != '\0')
        i++;

    return i;
}

int findString(char source[], char search[])
{
    int i, j;

    for (i = 0; source[i] != '\0'; i++) {

        for (j = 0;
             search[j] != '\0' &&
             source[i + j] == search[j];
             j++)
            ;

        if (search[j] == '\0')
            return i;
    }

    return -1;
}

void removeString(char str[], int start, int nChars)
{
    int i;

    for (i = start; str[i + nChars] != '\0'; i++)
        str[i] = str[i + nChars];

    str[i] = '\0';
}

void insertString(char source[], char insert[], int position)
{
    int sourceLen = stringLength(source);
    int insertLen = stringLength(insert);

    for (int i = sourceLen; i >= position; i--)
        source[i + insertLen] = source[i];

    for (int i = 0; i < insertLen; i++)
        source[position + i] = insert[i];
}

void replaceString(char source[], char s1[], char s2[])
{
    int position = findString(source, s1);

    if (position != -1) {
        removeString(source, position, stringLength(s1));
        insertString(source, s2, position);
    }
}

int main(void)
{
    char text[100] = "the wrong son";

    replaceString(text, "son", "person");

    printf("%s\n", text);

    replaceString(text, "wrong", "right");

    printf("%s\n", text);

    replaceString(text, " ", "");

    printf("%s\n", text);

    return 0;
}
