import tkinter as tk
import serial
import threading

def read_serial():
    while True:
        line = ser.readline().decode().strip()
        if line.startswith("Top-Left"):
            update_flame_status("Top-Left", int(line.split(":")[-1].strip()))
        elif line.startswith("Top-Right"):
            update_flame_status("Top-Right", int(line.split(":")[-1].strip()))
        elif line.startswith("Bottom-Left"):
            update_flame_status("Bottom-Left", int(line.split(":")[-1].strip()))
        elif line.startswith("Bottom-Right"):
            update_flame_status("Bottom-Right", int(line.split(":")[-1].strip()))

def update_flame_status(label, value):
    status_var[label].set(f"{label}: {value}")
    if value > 500:
        status_label[label].config(fg='red')
    else:
        status_label[label].config(fg='green')

ser = serial.Serial('COM3', 9600)  # Replace 'COM3' with your Arduino's serial port
ser.flushInput()

root = tk.Tk()
root.title("Flame Status")

status_var = {}
status_label = {}

labels = ["Top-Left", "Top-Right", "Bottom-Left", "Bottom-Right"]

for label in labels:
    status_var[label] = tk.StringVar()
    status_label[label] = tk.Label(root, textvariable=status_var[label], font=('Helvetica', 12))
    status_label[label].pack()

# Create a separate thread to read serial data continuously
serial_thread = threading.Thread(target=read_serial)
serial_thread.start()

root.mainloop()