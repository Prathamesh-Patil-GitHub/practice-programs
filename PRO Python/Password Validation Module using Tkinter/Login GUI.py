from tkinter import *
from tkinter.ttk import *
import tkinter.messagebox as messagebox
import re

def checkUsername(email):
    regex = r'\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,7}\b'
    return re.fullmatch(regex, email)

def checkPassword(password):
    regex = "^(?=.*?[A-Z])(?=.*?[a-z])(?=.*?[0-9])(?=.*?[#?!@$%^&*-]).{8,}$"
    return re.fullmatch(regex, password)

def validate(event):
    username = userEntry.get()
    password  = passEntry.get()

    userValid = checkUsername(username)
    passValid = checkPassword(password)
    
    if userValid and passValid:
        messagebox.showinfo("SUCCESS", "Login Successful !")
    elif not userValid:
        messagebox.showinfo("ERROR", "Enter a valid Email - ID !")
    elif not passValid:
        messagebox.showinfo("ERROR", "Password should contain at least 1 lowercase, 1 uppercase, 1 special symbol and 1 digit") 

master = Tk()

master.geometry("400x400")
master.title("LOGIN")

userLabel = Label(master, text = "Enter the username:")
userLabel.pack(pady = 10)

userEntry = Entry(master)
userEntry.pack(pady = 10)

passLabel = Label(master, text = "Enter the password:")
passLabel.pack(pady = 10)

passEntry = Entry(master,  show = "*")
passEntry.pack(pady = 10)

loginBtn = Button(master, text = "Login")
loginBtn.pack(pady = 10)
loginBtn.bind('<Button-1>', validate)
loginBtn.bind('<Return>', validate)


master.mainloop()
