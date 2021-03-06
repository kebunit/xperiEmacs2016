// kbhit
#include <stdio.h>
#include <sys/ioctl.h> // For FIONREAD
#include <termios.h>
#include <stdbool.h>
#include <unistd.h>
#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;
int kbhit(void) {
    static bool initflag = false;
    static const int STDIN = 0;

    if (!initflag) {
        // Use termios to turn off line buffering
        struct termios term;
        tcgetattr(STDIN, &term);
        term.c_lflag &= ~ICANON;
        tcsetattr(STDIN, TCSANOW, &term);
        setbuf(stdin, NULL);
        initflag = true;
    }

    int nbbytes;
    ioctl(STDIN, FIONREAD, &nbbytes);  // 0 is STDIN
    return nbbytes;
}

// main


int main() {
    char c;
    //setbuf(stdout, NULL); // Optional: No buffering.
    //setbuf(stdin, NULL);  // Optional: No buffering.
    while (c!='l') {
        if (kbhit()) { c = getchar(); }

        if (c=='l') {
            exit(0);
        } else {

        }
        if (c=='s') {
            // do something
        }
    }

    return 0;
}