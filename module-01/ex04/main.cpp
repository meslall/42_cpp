#include<iostream>

int main(int ac,char **av)
{
    std::string filename;
    std::string s1;
    std::string s2;
    int fd_filename;

    if(ac != 4)
        std::cout<<"Error this program take three parameters"<<std::endl;
    filename = av[1];
    s1 = av[2];
    s2 = av[3];
       
}