# Software

Each microcontroller or camera on the robot gets its **own folder**, and each folder is a separate project.

| Folder | Runs on | Type |
| --- | --- | --- |
| [`Teensy-Main/`](Teensy-Main) | Teensy 4.1 | PlatformIO (C++) |
| [`OpenMV-Camera/`](OpenMV-Camera) | OpenMV camera | MicroPython |

## Adding another microcontroller

1. Copy `Teensy-Main/` and rename the copy after its job, e.g. `STM32-Motors/` or `Teensy-Kicker/`.
2. Change the `[env]` section in its `platformio.ini` to the right board.
3. Add the folder to `robot.code-workspace` in the repository root, and to the table above.

Every PlatformIO project in this folder is built automatically on GitHub when you push. A ✅ or ❌ next to your commit shows whether the code compiled.

## Talking between boards

If two boards talk to each other (e.g. UART between the Teensy and a camera), write down the message format in a `PROTOCOL.md` here. That way both sides agree, and next year's team can understand it.
