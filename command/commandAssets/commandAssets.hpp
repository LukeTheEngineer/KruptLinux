/////////////////////////////////////////////////////////////////////////////
// Name:        commandAssets.hpp
// Purpose:     Assets for the command.hpp file
// Author:      Lukas Jackson
// Modified by:
// Created:     6/8/2023
// Copyright:   (c) [2023] Lukas Jackson
// Licence:     GNU Public License (GPL)
/////////////////////////////////////////////////////////////////////////////
#ifndef COMMANDASSETS_H_
#define COMMANDASSETS_H_

// System includes
#include <stdio.h>
#include <fstream>
#include <iostream>

// Project includes

// Dependency includes
#include <boost/algorithm/algorithm.hpp>

class Commands
{
public:
    Commands() {}

    void getHistory(){

    }
public:
    const std::string commands = "Available Commands:\n"
                           "exit -->Exit the program\n\n\n"
                           "--Help ->Show this help message\n"
                           "--CreateNote -->Creates note inside console\n"
                           "--OpenUrl -->Open a link in your browser\n"
                           "--ShowNote -->Open your notes if they are created\n"
                           "--AddrInfo -->Returns the ip address of a url\n"
                           "--getHistory -->Returns session command history\n\n\n";
};
#endif //COMMANDASSETS_H_