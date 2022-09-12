#include <string>
#include <iostream>
#include <fstream>


int fix_line(std::string& line, const std::string& s1, const std::string& s2)
{
    size_t position = line.find(s1);
    if (position == std::string::npos)
        return 0;
    line.erase(position, s1.size());
    line.insert(position, s2);
    return 1;
}

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cout << "bad arguments,expecting filename, string to find, string to change" << std::endl;
        return 1;
    }
    //strings init
    std::string filename(argv[1]);
    std::string outfilename =  filename + std::string(".replace");
    std::string s1(argv[2]);
    std::string s2(argv[3]); 
    
    //read line by line into a string, find s1 in there, replace it somehow with s2
    //files init
    std :: ifstream infile(filename.c_str());
    std :: ofstream outfile(outfilename.c_str(),std::ios::app);
   
    if(infile.is_open() && outfile.is_open())
    {
        std::string line;
        while(getline(infile, line))
        {
            while (fix_line(line,s1,s2));
            
            outfile << line;
            if(!infile.eof())
                outfile<< std::endl;
        }
    }
    else
        std::cout << "files error" << std::endl;
    
    
     
    //files close
    infile.close();
    outfile.close();
}