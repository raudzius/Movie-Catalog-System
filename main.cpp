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
        cout << "Failed to open file!" << endl;
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

int main() {
    loadFromFile();
    return 0;
}
