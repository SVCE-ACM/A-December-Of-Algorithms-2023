#include <iostream>
#include <string>
#include <vector>


int main() {
    // Sample data representing empname column values
    std::string name;
    std::vector<std::string> empnames;
    std::cout << "Enter the string names :"<< std::endl; 
    for(size_t i=0;i<3;i++){
    
    std::cin>>name;
    empnames.push_back(name);

}
          int start,end;
          std::cout << "Start :";
            std::cin>>start;

             std::cout << "end:";
            std::cin>>end;
    // Retrieve substring from empname column for each row
    for (const std::string& empname : empnames) {
        if (empname.length() >= 3) { // Check if the string length is at least 3 to avoid out-of-range issues

            std::string substring = empname.substr(start,end); // Extract two characters starting from the second character
            std::cout << "Substring for " << empname << ": " << substring << std::endl;
        } else {
            std::cout << "Substring for " << empname << ": String too short" << std::endl;
        }
    }

    return 0;
}
