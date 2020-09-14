#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>
#include <experimental/random>


int main () {
    int level;
    const char* notes[17] = {"C ", "C#", "Db", "D ", "D#", "Eb", "E ", "F ", "F# ","Gb", "G ", "G#", "Ab", "A ", "A#", "Bb", "B "};

    std::cout << "Escoge un nivel de dificultad entre 1 y 3 \n";
    std:: cin >> level;

    if(!level == 1 || !level == 2 || !level == 3  ) {
        std::cout << "Solo 1, 2 o 3. \n";
        return 0;
    }  else {

        std::cout <<"Va! \n";
        sleep(2);

        for (int i = 0; i < 50; i++) {
        
        int random = std::experimental::randint(0, 16);
        std::cout << "\r" << notes[random];
        std::cout.flush();
        sleep(level);   
        }
        std::cout << "\rYa \n";
    }
    return 0;
}

