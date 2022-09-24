#include <iostream>
#include <fstream>
#include <string>
#include <conio.h


void read_file()
{
  std::string line, identifier;
  std::ifstream in("path");

  if (in.is_open())
  {
    int line_num = 0;
    while (getline(in, line))
    {
      ++line_num;
      int pos_for = line.find("for ");
      if (pos_for >= 0)
      {
        std::cout << line.substr(pos_for + 4, 3) << std::endl;
      }
    }
  } 
  else 
  {
    std::cout << "Файл не существует!" << std::endl;
  }

}

int main()
{
  setlocale(LC_ALL, "");
  std::cout << "Пробел или Enter - чтение файла, Esc - завершение программы" << std::endl;
  
}