#include <iostream>
#include "../include/Board.h"

#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

void Board::drawBoard() const {
#ifdef _WIN32
    // Ustawienie kodowania na UTF-8 w systemie Windows
    SetConsoleOutputCP(CP_UTF8);  // Ustawiamy stronę kodową wyjścia na UTF-8
    SetConsoleCP(CP_UTF8);        // Ustawiamy stronę kodową wejścia na UTF-8
#endif
    cout << "╭───┬───┬───┬───┬───┬───┬───┬───┬───╮" << endl;
    cout << "│   │ A │ B │ C │ D │ E │ F │ G │ H │";
    for (int i = 1; i <= 8; ++i) {
        cout << endl;
        cout << "├───┼───┼───┼───┼───┼───┼───┼───┼───┤" << endl;
        cout << "│ " << i << " │";
        for (int j = 1; j <= 8; ++j) {
            cout << "   │";
        }
    }
    cout << endl;
    std::cout << "╰───┴───┴───┴───┴───┴───┴───┴───┴───╯" << endl;
}