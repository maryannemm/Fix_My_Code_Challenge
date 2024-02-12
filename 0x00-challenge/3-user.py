#!/usr/bin/python3
""" User class module """


class User:
    """ User class """
    def __init__(self):
        """ Initialization method """
        self.__password = None

    @property
    def password(self):
        """ Getter for __password """
        return self.__password

    @password.setter
    def password(self, pwd: str):
        """ Setter for __password """
        self.__password = pwd

    def is_valid_password(self, pwd: str) -> bool:
        """ Check if a password is valid """
        return pwd == self.password


if __name__ == "__main__":
    usr = User()
    usr.password = "Test"
    if usr.is_valid_password("Test"):
        print("Test passed")
    else:
        print("Test failed")

