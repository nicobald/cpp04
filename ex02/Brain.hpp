#include <string>
#include <iostream>

class Brain
{
private:
    std::string _ideas[100];
    int _nbIdeas;
public:
    Brain();
    Brain(const Brain& other);
	Brain& operator=(const Brain& other);
    ~Brain();
    std::string getIdeas(int index) const;
    void setIdeas(int index, std::string idea);
};

