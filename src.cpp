#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;

#define scrnx   4
#define scrny   4

#define COL_FFFFFF 255 //カラーコード

void draw(int*, int, int, int);
void display(int*);

int main() {
    int vram[scrnx][scrny] = {0};
    int *pV = &vram[0][0];

    draw(pV, COL_FFFFFF, 3, 2);
    display(pV);
    return 0;
}

void draw(int* vram, int color, int x, int y) {
    x--;
    y--;
    y = scrny - (y+1);
    vram += 4*y+x;
    *vram = color;
}

void display(int*vram) {
    for(int i=0;i<scrny;i++)  {
        for(int j=0;j<scrnx;j++) {
            cout << *vram << ' ';
            vram++;
        }
        cout << endl;
    }
}
