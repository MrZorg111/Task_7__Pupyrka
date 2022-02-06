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

return 0;
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
    w[b][f] = 'x';

    return w[b][f];
}

int main() {
   int x, y;
   for (int e = 0; e < 144; e++){
        for (int i = 0; i < 12; i++) {
            for (int l = 0; l < 12; l++) {
                std::cout << wrap(i, l) << " ";
            }
            std::cout << "\n";
        }
        std::cout << "Enter the coordinates of the bubble: ";
        std::cout << "x: ";
        std::cin >> x;
        std::cout << "y: ";
        std::cin >> y;
        if ((x < 0 || y < 0) && (x > 11 || y > 11)) {
            std::cout << "Error!!!";
        }
        else {
            pup_true(x, y);
        }

    }
}


/*
  for (int i = 0; i < 12; i++) {
        for (int l = 0; l < 12; l++) {
        std::cout << wrap(check, i, l) << " ";
        }
        std::cout << "\n";
    }
 */