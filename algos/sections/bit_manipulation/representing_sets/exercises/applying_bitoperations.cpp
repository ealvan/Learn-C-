#include <bitset>
#include <cstdint>
#include <iostream>
using namespace std;
void print(uint8_t flag){
    for(int i =7; i >= 0; i--){
        if(flag & (1 << i)) std::cout << "1 ";
        else std::cout << "0 ";
    }
    cout << endl;
}

int main()
{
    constexpr std::uint8_t option_viewed{ 0x01 };
    constexpr std::uint8_t option_edited{ 0x02 };
    constexpr std::uint8_t option_favorited{ 0x04 };
    constexpr std::uint8_t option_shared{ 0x08 };
    constexpr std::uint8_t option_deleted{ 0x10 };

    std::uint8_t myArticleFlags{ option_favorited };
    print(myArticleFlags);
    //a) Write a line of code to set the article as viewed.
    myArticleFlags |= option_viewed;
    print(myArticleFlags);
    //b) Write a line of code to check if the article was deleted.
    cout <<((myArticleFlags & option_deleted) ? "Article deleted":"Article was not deleted\n");
    //c) Write a line of code to clear the article as a favorite.
    myArticleFlags = myArticleFlags & ~(option_favorited);
    print(myArticleFlags);
    //1d) Extra credit: why are the following two lines identical?
    // myflags &= ~(option4 | option5); // turn options 4 and 5 off
    // myflags &= ~option4 & ~option5; // turn options 4 and 5 off 
    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    return 0;
}