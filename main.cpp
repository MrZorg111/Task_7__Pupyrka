#include <iostream>

bool pup_true(int c, int d) {
    bool pup[12][12] {{true,true,true,true,true,true,true,true,true,true,true,true},
                      {true,true,true,true,true,true,true,true,true,true,true,true},
                      {true,true,true,true,true,true,true,true,true,true,true,true},
                      {true,true,true,true,true,true,true,true,true,true,true,true},
                      {true,true,true,true,true,true,true,true,true,true,true,true},
                      {true,true,true,true,true,true,true,true,true,true,true,true},
                      {true,true,true,true,true,true,true,true,true,true,true,true},
                      {true,true,true,true,true,true,true,true,true,true,true,true},
                      {true,true,true,true,true,true,true,true,true,true,true,true},
                      {true,true,true,true,true,true,true,true,true,true,true,true},
                      {true,true,true,true,true,true,true,true,true,true,true,true},
                      {true,true,true,true,true,true,true,true,true,true,true,true}};

return pup[c][d];
}
char wrap(int b, int f) {
    char w[12][12] {{'o','o','o','o','o','o','o','o','o','o','o','o'},
                    {'o','o','o','o','o','o','o','o','o','o','o','o'},
                    {'o','o','o','o','o','o','o','o','o','o','o','o'},
                    {'o','o','o','o','o','o','o','o','o','o','o','o'},
                    {'o','o','o','o','o','o','o','o','o','o','o','o'},
                    {'o','o','o','o','o','o','o','o','o','o','o','o'},
                    {'o','o','o','o','o','o','o','o','o','o','o','o'},
                    {'o','o','o','o','o','o','o','o','o','o','o','o'},
                    {'o','o','o','o','o','o','o','o','o','o','o','o'},
                    {'o','o','o','o','o','o','o','o','o','o','o','o'},
                    {'o','o','o','o','o','o','o','o','o','o','o','o'},
                    {'o','o','o','o','o','o','o','o','o','o','o','o'}};


    return w[b][f];
}
bool check (bool a[][12]) {
    bool good = true;
    for (int i = 0; i < 12; i++) {
        for (int l = 0; l < 12; l++) {
            if (a[i][l]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    char tempo [12][12];
    bool tempo_true [12][12];
    for (int i = 0; i < 12; i++) {
        for (int l = 0; l < 12; l++) {
            tempo[i][l] = wrap(i, l);
            tempo_true[i][l] = pup_true(i, l);
        }
    }
   int x, y;
   for (int e = 0; check(tempo_true); e++){
        for (int t = 0; t < 12; t++) {
            for (int j = 0; j < 12; j++) {
                std::cout << tempo[t][j] << " ";
            }
            std::cout << "\n";
        }
        std::cout << "Enter the coordinates of the bubble: ";
        std::cout << "x: ";
        std::cin >> x;
        std::cout << "y: ";
        std::cin >> y;
        std::cout << std::endl;
        if ((x < 0 || y < 0) || (x > 11 || y > 11)) {
            std::cout << "Error!!! \n";
        }
        else {
            if (tempo[x][y] == 'x') {
                std::cout << "Error!!! \n";
            }
            else {
                tempo[x][y] = 'x';
                tempo_true[x][y] = false;
            }
        }

   }
        for (int q = 0; q < 12; q++) {
            for (int w = 0; w < 12; w++) {
                std::cout << tempo[q][w] << " ";
            }
            std::cout << "\n";
        }
}