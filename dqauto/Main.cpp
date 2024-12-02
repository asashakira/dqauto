#include <vector>
#include <windows.h>

void enter()
{
    INPUT in;
    in.type = INPUT_KEYBOARD;
    in.ki.time = 0;
    in.ki.wScan = 0;
    in.ki.dwExtraInfo = 0;
    in.ki.wVk = VK_RETURN;
    in.ki.dwFlags = 0;

    SendInput(1, &in, sizeof(INPUT));

    Sleep(50);

    in.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &in, sizeof(INPUT));

    Sleep(50);
}

void left() {
    INPUT in;
    in.type = INPUT_KEYBOARD;
    in.ki.time = 0;
    in.ki.wScan = 0;
    in.ki.dwExtraInfo = 0;
    in.ki.wVk = VK_LEFT;
    in.ki.dwFlags = 0;

    SendInput(1, &in, sizeof(INPUT));

    Sleep(50);

    in.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &in, sizeof(INPUT));

    Sleep(50);
}

void right() {
    INPUT in;
    in.type = INPUT_KEYBOARD;
    in.ki.time = 0;
    in.ki.wScan = 0;
    in.ki.dwExtraInfo = 0;
    in.ki.wVk = VK_RIGHT;
    in.ki.dwFlags = 0;

    SendInput(1, &in, sizeof(INPUT));

    Sleep(50);

    in.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &in, sizeof(INPUT));

    Sleep(50);
}

void up() {
    INPUT in;
    in.type = INPUT_KEYBOARD;
    in.ki.time = 0;
    in.ki.wScan = 0;
    in.ki.dwExtraInfo = 0;
    in.ki.wVk = VK_UP;
    in.ki.dwFlags = 0;

    SendInput(1, &in, sizeof(INPUT));

    Sleep(50);

    in.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &in, sizeof(INPUT));

    Sleep(50);
}

void down() {
    INPUT in;
    in.type = INPUT_KEYBOARD;
    in.ki.time = 0;
    in.ki.wScan = 0;
    in.ki.dwExtraInfo = 0;
    in.ki.wVk = VK_DOWN;
    in.ki.dwFlags = 0;

    SendInput(1, &in, sizeof(INPUT));

    Sleep(50);

    in.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &in, sizeof(INPUT));

    Sleep(50);
}

void spin() {
    INPUT in;
    in.type = INPUT_KEYBOARD;
    in.ki.time = 0;
    in.ki.wScan = 0;
    in.ki.dwExtraInfo = 0;
    in.ki.wVk = 0x5A;
    in.ki.dwFlags = 0;

    SendInput(1, &in, sizeof(INPUT));

    Sleep(50);

    in.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &in, sizeof(INPUT));

    Sleep(50);
}

void roulette() {
    for (int i = 0; i < 12; i++) {
        left();
    }
    enter(); // treasure

    right();
    up();
    up();
    enter(); // 3

    for (int i = 0; i < 11; i++) {
        right();
        right();
        enter();
    }
    down(); down();
    enter();
    for (int i = 0; i < 11; i++) {
        left(); left();
        enter();
    }
    down(); down();
    enter();
    for (int i = 0; i < 11; i++) {
        right(); right();
        enter();
    }
    spin();
}

int main()
{
    Sleep(3000);

    while (true) {
        roulette();
        Sleep(25000);
        enter();
        Sleep(3000);
        enter();
        Sleep(3000);
        enter();
        Sleep(3000);
        enter();
        Sleep(3000);
        enter();
        Sleep(3000);
        enter();
    }

    return 0;
}