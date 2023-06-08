/////////////////////////////////////////////////////////////////////////////
// Name:        Krupt.cpp
// Purpose:     Source file for krupt.cpp
// Author:      Lukas Jackson
// Modified by:
// Created:     6/6/2023
// Copyright:   (c) [2023] Lukas Jackson
// Licence:     GNU Public License (GPL)
/////////////////////////////////////////////////////////////////////////////

// Project includes
#include "Daemon/Daemon.hpp"
#include "command/commands.hpp"

// System includes
#include <iostream>
#include <map>

// Project dependencies
#include <boost/asio.hpp>

int main(int argc, char* argv[]) {
    std::atexit(Daemon::exitCallback);
    boost::asio::io_context io_context;
    Daemon KruptDaemon(io_context);
    Commands c_Obj;
    List<std::string> consoleHistory;

    bool flag = true;
    std::cout << "Copyright: (c)Lukas Jackson\n\n\n";
    std::cout << c_Obj.commands;
    
    while (flag) {
        std::cout << "> ";
        std::string line;
        std::getline(std::cin, line);

        std::stringstream ss(line);
        std::string command;
        std::map<std::string, char> consoleCommand;
        while (ss >> command) {
            // Process each command here
            consoleCommand[command] = 'x';
        }

        if (consoleCommand.empty()) {
            std::cout << "Empty command.\n";
            continue;  // Skip processing if the command is empty
        }

        // Handle the entered console commands
        if (consoleCommand.count("exit") > 0) {
            flag = false;  // Exit the loop and terminate the program
        }else if(consoleCommand.count("--Help")>0){
            //Run addTohistory function for each command ran.
            consoleHistory.add(line);
        }else if(consoleCommand.count("--getHistory")>0){
            consoleHistory.add(line);
            consoleHistory.printHistory(consoleHistory);
        }
    }
    return 0;
}