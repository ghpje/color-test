// Font testing

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

    int r = 37;
    int g = 58;
    int b = 130;

    // "\033[{FORMAT_ATTRIBUTE};{FOREGROUND_COLOR};{BACKGROUND_COLOR}m{TEXT}\033[{RESET_FORMAT_ATTRIBUTE}m"
    system("clear");
    cout << endl;
    cout << "Foreground Standard Test" << endl;
    cout << "------------------------" << endl;
    cout << "\033[0;31mFOREGROUND - Red\033[0m" << endl;
    cout << "\033[0;36mFOREGROUND - Cyan\033[0m" << endl;
    cout << "\033[0;32mFOREGROUND - Green\033[0m" << endl;
    cout << "\033[0;33mFOREGROUND - Yellow\033[0m" << endl;
    cout << "\033[1;31mFOREGROUND - Bold Red\033[0m" << endl;
    cout << "\033[1;36mFOREGROUND - Bold Cyan\033[0m" << endl;
    cout << "\033[1;32mFOREGROUND - Bold Green\033[0m" << endl;
    cout << "\033[1;33mFOREGROUND - Bold Yellow\033[0m" << endl;
    cout << endl;
    cout << "Background Test" << endl;
    cout << "---------------" << endl;
    cout << "\033[0;39;41mBACKGROUND - Red\033[0m" << endl;
    cout << "\033[0;39;46mBACKGROUND - Cyan\033[0m" << endl;
    cout << "\033[0;39;42mBACKGROUND - Green\033[0m" << endl;
    cout << "\033[0;39;43mBACKGROUND - Yellow\033[0m" << endl;
    cout << endl;
    cout << "Multi-Font Test" << endl;
    cout << "---------------" << endl;
    cout << "\033[0;31;42mTexting\033[0m" << endl;
    cout << "\033[2;31;47mTexting\033[0m" << endl;
    cout << "\033[1;31;47mTexting\033[0m" << endl;
    cout << endl;
    cout << "Foreground RGB Test" << endl;
    cout << "-------------------" << endl;
    cout << "\033[38;5;214mFOREGROUND - Orange\033[0m" << endl;
    cout << endl;
    cout << "Lotto Specific Tests" << endl;
    cout << "--------------------" << endl;
    cout << "\033[1;30;107mPOWER\033[1;97;41mBALL\033[0m" << endl;
    cout << "\033[1;31;107mMega\033[1;38;5;45;48;5;255mMillions\033[0m" << endl;
    cout << "\033[1;38;5;45;48;5;214mSuperLottoPLUS\033[0m" << endl;
    cout << endl;
    cout << "RGB -> 256color" << endl;
    cout << "---------------" << endl;
    cout << (((r * 6) / 256) * 36) + (((g * 6) / 256) * 6) + (((b * 6) / 256) + 16) << endl;
    cout << endl;

    return 0;
}