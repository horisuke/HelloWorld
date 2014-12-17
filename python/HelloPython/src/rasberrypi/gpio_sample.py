#described by python2.7!
import RPi.GPIO as GPIO
from time import sleep

GPIO.setmode(25, GPIO.BCM)
GPIO.setup(25, GPIO.OUT)

while True:
    GPIO.output(25, GPIO.HIGH)
    sleep(0.5)
    GPIO.output(25, GPIO.LOW)
    sleep(0.5)
