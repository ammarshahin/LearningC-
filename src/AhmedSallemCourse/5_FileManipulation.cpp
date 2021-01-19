/****************************************************************
 *                       Files Includes
 * *************************************************************/
#include <iostream>
#include <string>
#include <cstdio>

/****************************************************************
 *                       Private Macros
 * *************************************************************/
#define MY_COMPANY_SIZE 3

/****************************************************************
 *                       Database Struct
 * *************************************************************/
typedef struct
{
    std::string id;
    std::string name;
    std::string contact;
    uint8_t age;
} Person;

/****************************************************************
 *                           APIs
 * *************************************************************/
int main()
{
    FILE *fp = fopen("D:\\_Current training\\Cpp\\LearningCpp\\src\\AhmedSallemCourse\\CompanyInfo.txt", "w");

    Person companyMembers[MY_COMPANY_SIZE];
    std::cout << "Enter the Company info one By one: " << std::endl;
    for (int index = 0; index < MY_COMPANY_SIZE; index++)
    {
        std::cout << "\nNew Member.." << std::endl;
        std::cout << "Name: " << std::endl;
        std::cin >> companyMembers[index].name;
        std::cout << "ID: " << std::endl;
        std::cin >> companyMembers[index].id;
        std::cout << "Age: " << std::endl;
        std::cin >> companyMembers[index].age;
        std::cout << "Phone number: " << std::endl;
        std::cin >> companyMembers[index].contact;
    }

    std::cout << "\n\nThe Company members:" << std::endl;

    for (int index = 0; index < MY_COMPANY_SIZE; index++)
    {
        std::cout << "\n\n\nEmployer No" << index + 1 << std::endl;
        std::cout << "Name: " << companyMembers[index].name << std::endl;
        std::cout << "ID: : " << companyMembers[index].id << std::endl;
        std::cout << "Age: " << companyMembers[index].age << std::endl;
        std::cout << "Phone number: " << companyMembers[index].contact << std::endl;
        fwrite(&companyMembers[index], sizeof(Person), 1, fp);
    }

    fclose(fp);

    return 0u;
}