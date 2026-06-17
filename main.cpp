#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

struct Movie {
    int id;
    string title;
    int year;
    double rating;
};

vector<Movie> movies;

void loadFromFile() {
    ifstream moviesFile("movies.txt");
    if (moviesFile.fail()) {
        cout << "Nepavyko atidaryti failo!" << endl;
        return;
    }

    string line;

    while (getline(moviesFile, line)) {
        stringstream stringStreamLine(line);
        Movie movie;
        string temporaryString;

        getline(stringStreamLine, temporaryString, ';');
        movie.id = stoi(temporaryString);

        getline(stringStreamLine, temporaryString, ';');
        movie.title = temporaryString;

        getline(stringStreamLine, temporaryString, ';');
        movie.year = stoi(temporaryString);

        getline(stringStreamLine, temporaryString, ';');
        movie.rating = stod(temporaryString);

        movies.push_back(movie);
    }

    moviesFile.close();
}

void showMovies() {
    for (Movie movie: movies) {
        cout << movie.id << " | " << movie.title << " | " << movie.year << " | " << movie.rating << endl;
    }
}


void saveToFile() {
    ofstream file("movies.txt");

    for (Movie movie: movies) {
        file << movie.id << ";" << movie.title << ";"
                << movie.year << ";" << movie.rating << "\n";
    }

    file.close();
}


void addMovie() {
    Movie movie;

    cout << "ID: ";
    cin >> movie.id;
    cin.ignore();

    cout << "Pavadinimas: ";
    getline(cin, movie.title);

    cout << "Metai: ";
    cin >> movie.year;

    cout << "Ivertinimas: ";
    cin >> movie.rating;

    movies.push_back(movie);
    saveToFile();
}

void showMenu() {
    int choice;

    do {
        cout << "\n1. Rodyti\n2. Pridėti\n3. Redaguoti\n"
                << "4. Trinti\n5. Paieška\n6. Rikiuoti\n0. Išeiti\n";
        cin >> choice;

        switch (choice) {
            case 1: showMovies();
                break;
                case 2: addMovie(); break;
                // case 3: updateMovie(); break;
                // case 4: deleteMovie(); break;
                // case 5: searchMovie(); break;
                // case 6: sortMovies(); break;
        }
    } while (choice != 0);
}

int main() {
    loadFromFile();
    showMenu();
    return 0;
}
