#include <iostream>
using namespace std;

string name = "?????";

string user(){
    string answer;
    cout << name << ": ";
    getline(cin, answer);
    return answer;
}

void fahsai(string input){
    cout << "Fahsai: " << input << "\n";
}

int main() {
    string movie, day, id;
    
    fahsai("Sawadee ka...Can you tell me your name?");
    name = user();
    fahsai("Wow!!! " + name + " is a really cool name.");
    fahsai("I think you are an Engineering student. What is your student ID?");
    id = user();
    fahsai("I think you may be GEAR " + to_string(stoi(id.erase(2)) - 12) + ". I have a free movie ticket for you.");
    fahsai("Let's go to the cinema together!!!");
    fahsai("What movie do you want to watch?");
    movie = user();
    fahsai("So....which day are you free to go with me?");
    day = user();
    fahsai(day + "....that is OK!!! I'm looking forward to watching " + movie + " with you.");
    user();
    fahsai("555+ see you " + day + ". Bye Bye \\(^ ^)/");
    return 0;
}
