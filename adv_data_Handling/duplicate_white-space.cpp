#include <string>
#include <iostream>

int main()
{
    std::string sentence;
    std::getline(std::cin, sentence);

    // manipulate the sentence here
    size_t found = sentence.find("  ");
    while (found != std::string::npos){
        size_t count = 1;
        while (sentence[found+count+1] == ' ') {
            count++;
        }
        sentence.erase(found, count);
        found = sentence.find("  ", found+1);
    }

    std::cout << sentence << "\n";
    return 0;
}