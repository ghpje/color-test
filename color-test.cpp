// Font testing

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

    int r = 37;
    int g = 58;
    int b = 130;

    // "\e[{FORMAT_ATTRIBUTE};{FOREGROUND_COLOR};{BACKGROUND_COLOR}m{TEXT}\e[{RESET_FORMAT_ATTRIBUTE}m"
    system("clear");
    cout << endl;
    cout << "Foreground Standard Test" << endl;
    cout << "------------------------" << endl;
    cout << "\e[0;31mFOREGROUND - Red\e[0m" << endl;
    cout << "\e[0;36mFOREGROUND - Cyan\e[0m" << endl;
    cout << "\e[0;32mFOREGROUND - Green\e[0m" << endl;
    cout << "\e[0;33mFOREGROUND - Yellow\e[0m" << endl;
    cout << "\e[1;31mFOREGROUND - Bold Red\e[0m" << endl;
    cout << "\e[1;36mFOREGROUND - Bold Cyan\e[0m" << endl;
    cout << "\e[1;32mFOREGROUND - Bold Green\e[0m" << endl;
    cout << "\e[1;33mFOREGROUND - Bold Yellow\e[0m" << endl;
    cout << endl;
    cout << "Background Test" << endl;
    cout << "---------------" << endl;
    cout << "\e[0;39;41mBACKGROUND - Red\e[0m" << endl;
    cout << "\e[0;39;46mBACKGROUND - Cyan\e[0m" << endl;
    cout << "\e[0;39;42mBACKGROUND - Green\e[0m" << endl;
    cout << "\e[0;39;43mBACKGROUND - Yellow\e[0m" << endl;
    cout << endl;
    cout << "Multi-Font Test" << endl;
    cout << "---------------" << endl;
    cout << "\e[0;31;42mTexting\e[0m" << endl;
    cout << "\e[2;31;47mTexting\e[0m" << endl;
    cout << "\e[1;31;47mTexting\e[0m" << endl;
    cout << endl;
    cout << "Foreground RGB Test" << endl;
    cout << "-------------------" << endl;
    cout << "\e[38;5;214mFOREGROUND - Orange\e[0m" << endl;
    cout << endl;
    cout << "Lotto Specific Tests" << endl;
    cout << "--------------------" << endl;
    cout << "\e[1;30;107mPOWER\e[1;97;41mBALL\e[0m" << endl;
    cout << "\e[1;31;107mMega\e[1;38;5;45;48;5;255mMillions\e[0m" << endl;
    cout << "\e[1;38;5;45;48;5;214mSuperLottoPLUS\e[0m" << endl;
    cout << endl;
    cout << "RGB -> 256color" << endl;
    cout << "---------------" << endl;
    cout << (((r * 6) / 256) * 36) + (((g * 6) / 256) * 6) + (((b * 6) / 256) + 16) << endl;
    cout << endl;

    return 0;
}