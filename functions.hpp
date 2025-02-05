#include <cstdlib>

void run_powershell(std::string path) {
    int result = system(path.c_str());

}

void run_thing(int what) {
    int result;
    if (what == 1) {
        result = system("\"C:\\Users\\zjz3060\\AppData\\Local\\Programs\\Microsoft VS Code\\Code.exe\"");
    } else if (what == 2) {
        result = system("\"C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe\"");
    } else if (what != 1 || what != 2) {
        std::cout << "That isn't an option \n";
        result = 3;
    }

    if (result == 0) {
        std::cout << "ran!!!";
    } else if (result != 0 && result != 3) {
        std::cout << "fail";
    }
}
