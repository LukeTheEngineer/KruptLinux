/////////////////////////////////////////////////////////////////////////////
// Name:        Daemon.hpp
// Purpose:     Main daemon header file -> Krupt.cpp
// Author:      Lukas Jackson
// Modified by:
// Created:     6/6/2023
// Copyright:   (c) [2023] Lukas Jackson
// Licence:     GNU Public License (GPL)
/////////////////////////////////////////////////////////////////////////////

#ifndef DAEMON_H_
#define DAEMON_H_

// Daemon includes
#include "DaemonComponents/daemonThread.hpp"
#include "DaemonComponents/daemonLinkedList.hpp"
#include "DaemonComponents/Banner.hpp"

// Main includes
#include <boost/asio.hpp>

// System includes
#include <iostream>
#include <chrono>

class Daemon : public DaemonThread
{
public:
    Daemon(boost::asio::io_context &io_Context) : ioContext(io_Context)
    {
        run(io_Context);
    }
    ~Daemon() {}

    static void exitCallback()
    {
        std::cout << "Daemon shutting down...\n\n";
        DaemonThread DT;
        DT.waitThread(5000);
        std::cout << "[DAEMON OFFLINE]\n\n";
    }
private:
    bool initializeDaemon(boost::asio::io_context &io_Context)
    {
        std::cout << banner << std::endl;
        std::cout << "Initializing Daemon...\n\n";

        while (messagePrinted == false)
        {
            io_Context.run();
            io_Context.restart();

            if (!messagePrinted)
            {
                std::cout << "[DAEMON ONLINE]\n\n";
                messagePrinted = true;
            }
            if (messagePrinted == true)
            {

                break;
            }
        }
        return true;
    }

    void run(boost::asio::io_context &io_Context)
    {
        initializeDaemon(io_Context);
    }

private:
    boost::asio::io_context &ioContext;
    bool messagePrinted = false;
};
#endif // DAEMON_H_ END--
