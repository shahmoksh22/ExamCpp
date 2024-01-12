#include <iostream>

using namespace std;

class FileManager {
private:
    string fileName;

public:
    FileManager(const string& file) : fileName(file) {}

    void readFromFile() {
        FILE* inputFile = fopen(fileName.c_str(), "r");

        if (!inputFile) {
            throw(fileName);
        }

        char buffer[256];
        while (fgets(buffer, sizeof(buffer), inputFile)) {
            cout << "Content from the file: " << buffer;
        }

        fclose(inputFile);
    }
};

int main() {
    try {
        FileManager myFileManager("example.txt");
        myFileManager.readFromFile();
    } catch (string fileName) {
        cout << "Oops! An issue occurred: " << "Error: Couldn't open the file: " << fileName << endl;
    }

    return 0;
}
