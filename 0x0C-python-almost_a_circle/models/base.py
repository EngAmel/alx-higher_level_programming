#!/usr/bin/python3
''' Base clase '''


class Base:
    ''' deeling with id '''

    __nb_objects = 0

    def __init__(self, id=None):
        '''constructor'''

        if id:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects
