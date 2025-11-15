#include <stdio.h>

int main() {
    char s[200];
    int i, v = 0, c = 0, d = 0, sp = 0;

    printf("Enter a string: ");
    gets(s);

    for (i = 0; s[i] != '\0'; i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            char ch = s[i];
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                v++;
            else
                c++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
            d++;
        else if (s[i] == ' ')
            sp++;
    }

    printf("Vowels = %d\nConsonants = %d\nDigits = %d\nSpaces = %d\n",
           v, c, d, sp);

    return 0;
}
