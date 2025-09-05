*** list of learning of esp 32***
---
To connect your joystick to your system and have it work properly with mobile apps like Mantis Gamepad Pro or Octopus (controller keymapper apps), the ESP32 should emulate a standard Bluetooth gamepad recognized by Android as a native controller.

Recommended Module and Library:
The best module/library for this task is the ESP32 BLE Gamepad library ([lemmingDev/ESP32-BLE-Gamepad]) or Bluepad32 ([Bluepad32 Guide]).

These libraries allow the ESP32 to behave like a Bluetooth HID gamepad, making it compatible with Android's native gamepad APIs. Apps like Mantis Gamepad Pro and Octopus rely on the controller being recognized as a standard gamepad (not just a generic Bluetooth serial device).

**Why Not BluetoothSerial?**
BluetoothSerial.h sends data as text and is not recognized by Android as a gamepad.

Most mapping/hooking apps require an HID device (a real gamepad profile) for full compatibility—including joystick axes and buttons.
