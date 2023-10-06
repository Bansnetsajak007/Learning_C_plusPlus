#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;

class SnakeGame {
private:
    int height, width;
    int x, y, fruit_x, fruit_y, score;
    bool gameover;
    int flag;

public:
    SnakeGame(int h, int w) {
        height = h;
        width = w;
        gameover = false;
        x = height / 2;
        y = width / 2;
        score = 0;
    }

    void setup() {
        srand(time(0));
        x = height / 2;
        y = width / 2;

        do {
            fruit_x = rand() % (height - 2) + 1;
            fruit_y = rand() % (width - 2) + 1;
        } while (fruit_x == x && fruit_y == y);

        score = 0;
    }

    void draw() {
        system("cls");
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                    cout << "#";
                }
                else {
                    if (i == x && j == y)
                        cout << "0";
                    else if (i == fruit_x && j == fruit_y)
                        cout << "*";
                    else
                        cout << " ";
                }
            }
            cout << endl;
        }
        cout << "Score = " << score << endl;
        cout << "Press X to quit the game" << endl;
    }

    void input() {
        if (_kbhit()) {
            switch (_getch()) {
            case 'a':
                flag = 1;
                break;
            case 's':
                flag = 2;
                break;
            case 'd':
                flag = 3;
                break;
            case 'w':
                flag = 4;
                break;
            case 'x':
                gameover = true;
                break;
            }
        }
    }

    void logic() {
        _sleep(10);

        switch (flag) {
        case 1:
            y--;
            break;
        case 2:
            x++;
            break;
        case 3:
            y++;
            break;
        case 4:
            x--;
            break;
        default:
            break;
        }

        if (x < 0 || x >= height || y < 0 || y >= width)
            gameover = true;

        if (x == fruit_x && y == fruit_y) {
            do {
                fruit_x = rand() % (height - 2) + 1;
                fruit_y = rand() % (width - 2) + 1;
            } while (fruit_x == x && fruit_y == y);

            score += 10;
        }
    }

    void run() {
        setup();
        while (!gameover) {
            draw();
            input();
            logic();
        }
    }
};

int main() {
    int height = 20;
    int width = 20;

    SnakeGame game(height, width);
    game.run();

    return 0;
}
