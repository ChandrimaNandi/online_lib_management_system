# C Client-Server Application

## Overview

This project is a simple client-server application written in C. It consists of a server program (`server.c`) and a client program (`client.c`) that communicate over a network.

## Files

- **client.c**: This file contains the implementation of the client-side application.
- **server.c**: This file contains the implementation of the server-side application.
- **header.h**: This file contains the shared header definitions for both the client and server.

## Compilation

To compile the project, you will need a C compiler like `gcc`. Use the following commands to compile the client and server programs:

gcc -o server server.c
gcc -o client client.c

## Usage
**Running the Server**
Start the server by running the following command:

./server

**Running the Client**
After starting the server, you can run the client with the following command:

./client

## Functionality
- The server waits for incoming connections from clients.
- The client connects to the server and sends/receives data.

## Dependencies
This project has no external dependencies and uses standard C libraries.
