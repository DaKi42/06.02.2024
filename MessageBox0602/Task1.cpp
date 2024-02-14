#include <windows.h>
#include <tchar.h>

INT WINAPI _tWinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPTSTR lpszCmdLine, int nCmdShow) {
    int sum = 0;
    const TCHAR* text1 = TEXT("Bondar");
    const TCHAR* text2 = TEXT("Ilya");
    const TCHAR* text3 = TEXT("Oleksandrovich");
    const TCHAR* resumeParts[] = { text1, text2, text3 };

    for (int i = 0; i < sizeof(resumeParts) / sizeof(resumeParts[0]); i++) {
        MessageBox(0, resumeParts[i], TEXT("[ Your CV ]"), MB_OK | MB_ICONINFORMATION);
        sum += lstrlen(resumeParts[i]);
    }

    int averageChars = sum / 3;
    TCHAR averageCharsStr[10];
    _itot_s(averageChars, averageCharsStr, 10, 10);
    MessageBox(0, averageCharsStr, TEXT("Avg symbols in text - "), MB_OK | MB_ICONINFORMATION);
}