/////////////////////////////////////////////////////////////////////////////
// Name:        daemonThread.hpp
// Purpose:     daemon threading components for main Daemon.hpp
// Author:      Lukas Jackson
// Modified by:
// Created:     6/7/2023
// Copyright:   (c) [2023] Lukas Jackson
// Licence:     GNU Public License (GPL)
/////////////////////////////////////////////////////////////////////////////
#ifndef DAEMONTHREAD_H_
#define DAEMONTHREAD_H_

//Project dependencies
#include<boost/thread.hpp>
#include<boost/chrono.hpp>

class DaemonThread{
public:
    DaemonThread(){}
    
    ~DaemonThread(){}

    void initializeThread(){
        
    }
    void waitThread(int seconds){
        boost::this_thread::sleep_for(boost::chrono::milliseconds(seconds));
    }
private:   
};
#endif //DAEMONTHREAD_H_