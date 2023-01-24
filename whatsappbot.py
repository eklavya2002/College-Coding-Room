import pyautogui as auto
import time
msg = input("Enter message to be given: ")
while True:
    auto.write(msg)
    auto.press("enter")
    time.sleep(1)


