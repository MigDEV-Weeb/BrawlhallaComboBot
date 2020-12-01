#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

void down();
void up();
void left();
void right();

int main() {
    
}

void down() {
    keybd_event(VK_DOWN, 0x28, 0, 0);
    Sleep(10);
    keybd_event(VK_DOWN, 0x28, KEYEVENTF_KEYUP, 0);
}

void up() {
    keybd_event(VK_UP, 0x26, 0, 0);
    Sleep(10);
    keybd_event(VK_UP, 0x26, KEYEVENTF_KEYUP, 0);
}

void left() {
    keybd_event(VK_LEFT, 0x25, 0, 0);
    Sleep(10);
    keybd_event(VK_LEFT, 0x25, KEYEVENTF_KEYUP, 0);
}

void right() {
    keybd_event(VK_RIGHT, 0x27, 0, 0);
    Sleep(10);
    keybd_event(VK_RIGHT, 0x27, KEYEVENTF_KEYUP, 0);
}