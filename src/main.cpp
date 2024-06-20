#include <iostream>

int main(int argc, char** argv) {
  std::string arachne = "    _                   _                  \n"
                        "   / \\   _ __ __ _  ___| |__  _ __   ___   \n"
                        "  / _ \\ | '__/ _` |/ __| '_ \\| '_ \\ / _ \\  \n"
                        " / ___ \\| | | (_| | (__| | | | | | |  __/  \n"
                        "/_/   \\_\\_|  \\__,_|\\___|_| |_|_| |_|\\___|  \n";
  std::cout << arachne << std::endl
            << "Free and open-source, Cpp-based web framework that runs on a "
               "web server"
            << std::endl;
  return 0;
}