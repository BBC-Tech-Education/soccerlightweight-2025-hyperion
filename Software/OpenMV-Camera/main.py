# OpenMV camera code
# Copy this file to the camera as main.py using the OpenMV IDE.
# Not using an OpenMV camera? Delete this folder and remove it from robot.code-workspace.

import time

import sensor

sensor.reset()
sensor.set_pixformat(sensor.RGB565)
sensor.set_framesize(sensor.QVGA)
sensor.skip_frames(time=2000)

clock = time.clock()

while True:
    clock.tick()
    img = sensor.snapshot()
    print(clock.fps())
