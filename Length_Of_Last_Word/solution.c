#include <string.h>

int lengthOfLastWord(char* s) {
    int index = strlen(s) - 1;
    int ret = 0;

    while (s[index] == ' ')
        index--;
    while (index >= 0 && s[index] != ' ')
    {
        ret++;
        index--;
    }
    return (ret);
}
