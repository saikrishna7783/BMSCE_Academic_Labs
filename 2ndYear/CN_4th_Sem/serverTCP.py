import socket

server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_socket.bind(('localhost', 12345))
# since tcp has to listen
server_socket.listen(1)

while True:
    client_socket = server_socket.accept()
    file_name = client_socket.recv(1024).decode()
    print(f"Received file name: {file_name}")

    try:
        with open(file_name, 'r') as f:
            file_contents = f.read()
            client_socket.sendall(file_contents.encode())
            print(f"Sent file contents")
    except FileNotFoundError:
        client_socket.sendall(b"File not found")
        print(f"Sent 'File not found' message")

    client_socket.close()
