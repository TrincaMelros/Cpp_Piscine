#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void    terror(int error)
{
    if (error == 1)
        std::cout << "Three arguments and that's it hombre" << std::endl;
    if (error == 2)
        std::cout << "Something's wrong with that text file parceiro" << std::endl;
    if (error == 3)
        std::cout << "Problems writing the outfile amigo" << std::endl;
    exit(1);
}

void    replacer(char **argv, std::string og_file)
{
    std::fstream    file;
    int             pos;

    pos = 0;

    while (1)
    {
        pos = og_file.find(std::string(argv[2]), pos);
        if (pos == -1)
            break;
        og_file.erase(pos, std::string(argv[2]).length());
        og_file.insert(pos, std::string(argv[3]));
    }
    file.open((std::string(argv[1]) + ".replace"), std::ios::out);
    if (file.fail())
        terror(3);
    file << og_file;
    file.close();
}

int main(int argc, char** argv)
{
    std::fstream        file;
    std::stringstream   buffer;
    std::string         line;
    int                 i;

    if (argc != 4)
        terror(1);

    file.open(argv[1], std::ios::in);
    if (file.fail())
        terror(2);
    buffer << file.rdbuf();
    file.close();
    replacer(argv, buffer.str());
    return (0);
}