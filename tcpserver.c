
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
int main() {
char server_message[256] = "You have reached the server!";
// create the server socket
int server_socket;
server_socket = socket (AF_INET, SOCK_STREAM, );
// define the server address
struct sockaddr_in server_address;
server_address.sin_family = AF_INET;
server_address.sin port = htons ( 9002);
server address.sin_addr.s_addr = INADDR_ANY;
// bind the socket to our specified IP and port
bind( server_socket, (struct sockaddr*) &server_address, sizeof(server_address));
listen(server_socket, 5);
int client socket;
client_socket = accept (server_socket, NULL, NULL);
// send the message
send(client_socket, server_message, sizeof(server_message), 0);
// close the socket
close( server_socket);

return;
}
