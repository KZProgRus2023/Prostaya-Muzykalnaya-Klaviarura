/* ������� ����������� ���������� */
#include <iostream>
#include <cctype>

#define C 262
#define D 294
#define E 330
#define F 349
#define G 392
#define A 440
#define B 494
#define C2 524

void tone(int freq, int time)
{
    // implementation of tone function
}

int main()
{
    int key, freq, tempo, time;
    std::cout << "�������, ����������, �������� ����: 10 = 1 �." << std::endl;
    std::cin >> tempo;
    std::cout << tempo << std::endl;
    std::cout << "�������. ����������� ������� � - k ��� ��������������� ���." << std::endl;
    std::cout << "������� ������������ �������� ��������� ����������������� ��������." << std::endl;
    std::cout << "������ ! ���������� ������." << std::endl;
    while ((key = std::getchar()) != '!')
    {
        time = std::isupper(key) ? 2 * tempo : tempo;
        key = std::tolower(key);
        switch (key)
        {
        case 'a': tone(C, time);
            break;
        case 's': tone(D, time);
            break;
        case 'd': tone(E, time);
            break;
        case 'f': tone(E, time);
            break;
        case 'g': tone(G, time);
            break;
        case 'h': tone(A, time);
            break;
        case 'j': tone(B, time);
            break;
        case 'k': tone(C2, time);
            break;
        default: break;
        }
    }
    std::cout << "�� ��������!" << std::endl;
    return 0;
}
