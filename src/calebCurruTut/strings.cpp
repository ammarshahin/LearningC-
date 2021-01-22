#include <iostream>
#include <string>

int main()
{
    std::string greeting = "Shahin";
    std::string complete_greeting;
    getline(std::cin, complete_greeting);
    std::cout << complete_greeting << std::endl;

    //complete_greeting += " " + greeting;      // Append another string in the end of the other   >> Same
    complete_greeting.append(" " + greeting);   // Append another string in the end of the other   >> Same

    std::cout << complete_greeting << std::endl;
    std::cout << complete_greeting.length() << std::endl;
    //std::cout << complete_greeting.size() << std::endl;   >> Same

    /* Insertion */
    complete_greeting.insert(5, " " + greeting);
    std::cout << complete_greeting << std::endl;

    /* Erasing */
    complete_greeting.erase(5, 7);
    std::cout << complete_greeting << std::endl;

    /* Pop */
    complete_greeting.pop_back();
    std::cout << complete_greeting << std::endl;

    /* Replace */
    complete_greeting.replace(12, 6, "Mohamed");
    std::cout << complete_greeting << std::endl;

    /* Find */
    std::cout << "Found at " << complete_greeting.find("Mohamed") << std::endl;
    complete_greeting.replace(complete_greeting.find("Mohamed"), 7, "Shahin");
    std::cout << complete_greeting << std::endl;

    /* sub string */
    std::cout << "Found at " << complete_greeting.find("Sha") << std::endl;
    std::cout << complete_greeting.substr(complete_greeting.find("Sha"), 6) << std::endl;

    /* find first of */
    uint32_t npos = -1;   // Not Found
    if (complete_greeting.find_first_of("w") != npos)
    {
        std::cout << "Found at " << complete_greeting.find_first_of("sS") << std::endl;
    }
    else   // == npos
    {
        std::cout << "Not found" << std::endl;
    }

    // Stoped at 02:50:00 in the video

    return 0;
}