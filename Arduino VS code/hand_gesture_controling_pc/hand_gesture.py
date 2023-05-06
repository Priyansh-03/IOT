import serial
import pyautogui
import time

arduinoSerial=serial.Serial('com8',9600)
time.sleep(2)

while True:
    incoming=str(arduinoSerial.readline())
    incoming.lower()
    print (incoming)
    if 'play/pause' in incoming:
        pyautogui.typewrite(['space'],0.2)
    
    if 'rewind' in incoming:
        pyautogui.hotkey('left')

    if 'forward' in incoming:
        pyautogui.hotkey('right')
    if 'vup' in incoming:
        pyautogui.hotkey('up')
    if 'vdown' in incoming:
        pyautogui.hotkey('down')
    incoming=""


