from serial import Serial
from pyautogui import hotkey

PORT = 'COM3'
RATE = 9600
TIMEOUT = 0.01

arduino = Serial(port=PORT, baudrate=RATE, timeout=TIMEOUT)
print(arduino.name)

# tabs data
tab_closed = False
input
while True:
    state = arduino.readline().decode()
    if not tab_closed:
        if state == "true":
            hotkey('ctrl', 'w')
            tab_closed = True
    
    if state == "false":
        tab_closed = False
