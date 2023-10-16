/*
You are given a list of movies' information, including their titles, genres, release years, and ratings.
 Sort the movies in descending order of their ratings. If two movies have the same rating, sort them based on their release years in ascending order.
 If two movies have the same rating and release year, sort them alphabetically based on their titles.
*/
#include <iostream>
#include <string>
using namespace std;

struct Movie {
    string title;
    string genre;
    int releaseYear;
    double rating;
};

void insertionSort(Movie arr[], int n) {
    for (int i = 1; i < n; i++) {
        Movie key = arr[i];
        int j = i - 1;

        while (j >= 0) {
            if (arr[j].rating < key.rating) {
                arr[j + 1] = arr[j];
            } else if (arr[j].rating == key.rating) {
                if (arr[j].releaseYear > key.releaseYear) {
                    arr[j + 1] = arr[j];
                } else if (arr[j].releaseYear == key.releaseYear) {
                    if (arr[j].title > key.title) {
                        arr[j + 1] = arr[j];
                    } else {
                        break;
                    }
                } else {
                    break;
                }
            } else {
                break;
            }

            j--;
        }

        arr[j + 1] = key;
    }
}

void printMovies(Movie arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Title: " << arr[i].title << endl;
        cout << "Genre: " << arr[i].genre << endl;
        cout << "Release Year: " << arr[i].releaseYear << endl;
        cout << "Rating: " << arr[i].rating << endl;
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of movies: ";
    cin >> n;

    Movie arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the title of movie " << i + 1 << ": ";
        cin >> arr[i].title;
        cout << "Enter the genre of movie " << i + 1 << ": ";
        cin >> arr[i].genre;
        cout << "Enter the release year of movie " << i + 1 << ": ";
        cin >> arr[i].releaseYear;
        cout << "Enter the rating of movie " << i + 1 << ": ";
        cin >> arr[i].rating;
        cout << endl;
    }

    insertionSort(arr, n);

    cout << "Sorted movies:" << endl;
    printMovies(arr, n);

    return 0;
}