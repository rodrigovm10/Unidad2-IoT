from machine import Pin, ADC, PWM
import utime
import dht
s = dht.DHT11(Pin(15))
while True:
  s.measure()
  print("T="+str(s.temperature())+ "H=+str(s.humidity()))
  utime.sleep(1)