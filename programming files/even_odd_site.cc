#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Open numbers.html file 
    ofstream file;
    file.open("numbers.html");
    
    // Insert heading and tables of even/odd numbers for website 
    file << "<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n";
    file << "<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n";
    
    // Determine if number from file is even or odd and write them to their respective table 
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            file << "<tr><td>" << i << "</td><td></td></tr>\n";
        }
        else {
            file << "<tr><td></td><td>" << i << "</td></tr>\n";
        }
    }
    // Close table, body, and html
    file << "</table>\n</body>\n</html>";
    
    // Close file
    file.close();
    
    ifstream input("numbers.html");
    cout << input.rdbuf();
    input.close();
    return 0;
}
