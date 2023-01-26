#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    // 译者周自恒在译者序中留下的小彩蛋
    char* s = "ZE PFL NREK KF CVRIE DFIV RSFLK TIPGKFXIRGYP Z IVTFDDVEU RE FECZEV TFLIJV ZEJKILTKVU SP GIFWVJJFIURE SFEVYWIFD JKREWFIU LEZMVIJZKP ALJK JVRITY TIPGKFXURGYP RK TFLIJVIR.FIX";
    int len = strlen(s);
    char* ns;
    ns = (char*) malloc(len + 1);
    ns[len] = '\0';
    for (int i = 1; i < 27; ++i) {
        for (int j = 0; j < len; ++j) {
            if (s[j] >= 'A' && s[j] <= 'Z')
            ns[j] = (s[j] - 'A' + i)%26 + 'a';
            else ns[j] = s[j];
        }
        printf("%d, %s\n",i, ns);
    }
    free(ns);
    return 0;
}