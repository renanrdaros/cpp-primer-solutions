#include <cctype>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> words;
    std::string word;

    // read words
    while (std::cin >> word) {
        words.push_back(word);
    }

    // change each word to uppercase
    for (auto& w : words) {
        for (auto& c : w) {
            c = std::toupper(c);
        }
    }

    // print the transformed words, eight words to a line
    const unsigned char words_per_line = 8;
    unsigned char cnt = 0;
    for (const auto& w : words) {
        std::cout << w << ' ';
        if (++cnt == words_per_line) {
            std::cout << std::endl;
            cnt = 0;
        }
    }

    return 0;
}
