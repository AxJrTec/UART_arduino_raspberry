import serial
import time

puerto_Serial = serial.Serial('/dev/ttyACM0', 9600)
print(puerto_Serial.name)

while True:
    mensaje = puerto_Serial.readline().decode('utf-8').rstrip()
    print(mensaje)
    time.sleep(1)
