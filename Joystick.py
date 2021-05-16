    #!/usr/bin/env python3

import time
import socket

UDP_IP = "192.168.8.1"
UDP_PORT = 6666 
bufferSize = 1024

sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
sock.bind((UDP_IP, UDP_PORT))
try:

    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    while True:
        try:   
            sock.bind((UDP_IP, UDP_PORT))
	    print("Connected !")
            break
        except:
            pass
    sock.settimeout(.25)
    
    while True:
        try:     
            data, addr = sock.recvfrom(1024) 
        except socket.timeout:
            data = 0
            continue
        f = open("data.txt","w+")
        L = data.split()
        f.write(str(L[0])+"\n")
        f.write(str(L[1])+"\n")
        f.write(str(L[2])+"\n")
        f.write(str(L[3])+"\n")
        f.close   
	print(L)
        pass

except KeyboardInterrupt:
    pass
        
finally:
    print("\n Deconnected !")
