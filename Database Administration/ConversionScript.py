__author__ = 'Robert Eviston'
'''
Date: 04/02/2017

Python program for converting a csv file containing pokemon into
a more refined version. In this version we will group pokemon by generation.
This will help refine the seach for searches on generation.
'''

from pymongo import MongoClient

def mongo_function(option):

     # establish connection with local server
    client = MongoClient("mongodb://localhost:27017")

    # Choose the database we want to use
    db = client.C13516663

    # Set the cursor to start of the Pokemon collection
    cursor = db.Pokemon.find()
    # Reference for inserting or updating new collection
    newDBupdate = db.NewPokemon

    # Class that handles data for each pokemon
    if option == 1:
        print("Beginning conversion...")
        class Pokemon:
            def __init__(self, num, name, type1, type2, total, hp, attack, defense, spatk, spdef, speed, gen, leg):
                self.num = num
                self.name = name
                self.type1 = type1
                self.type2 = type2
                self.total = total
                self.hp = hp
                self.attack = attack
                self.defense = defense
                self.spatk = spatk
                self.spdef = spdef
                self.speed = speed
                self.gen = gen
                self.leg = leg

            def print_details(self):
               print(self.num, self.name, self.type1, self.type2, self.total, self.hp,
                     self.attack, self.defense, self.spatk, self.spdef, self.speed, self.gen, self.leg)

        # Read data from each record and assign each to an object
        for i in cursor:
            if(i['Name'].encode('ascii') and i['Type 1'].encode('ascii') and i['Type 2'] == None):
                newPoke = Pokemon(i['#'], i['Name'].encode('ascii'), i['Type 1'].encode('ascii'), i['Type 2'], i['Total'],
                                  i['HP'], i['Attack'], i['Defense'], i['Sp'][' Atk'], i['Sp'][' Def'], i['Speed'], i['Generation'], i['Legendary'])
            elif(i['Name'].encode('ascii') and i['Type 1'].encode('ascii') and i['Type 2'] != None):
                newPoke = Pokemon(i['#'], i['Name'].encode('ascii'), i['Type 1'].encode('ascii'), i['Type 2'].encode('ascii'), i['Total'],
                                  i['HP'], i['Attack'], i['Defense'], i['Sp'][' Atk'], i['Sp'][' Def'], i['Speed'], i['Generation'], i['Legendary'])

            # reset duplicate checker
            match = False
            # reset cursor for iterating over new collection
            newDB = db.NewPokemon.find()

            for j in newDB:
                if newPoke.gen == j['Generation'] and newPoke.leg == j['Legendary']:
                    match = True

            if(match == True):
                newDBupdate.update ({ 'Generation': newPoke.gen, 'Legendary': newPoke.leg },  { "$push": { "Pokemon": [ { '#': newPoke.num,
                                                                    "Name": newPoke.name,
                                                                    "Type 1": newPoke.type1,
                                                                    "Type 2": newPoke.type2,
                                                                    "HP": newPoke.hp, "Attack": newPoke.attack,
                                                                    "Defense": newPoke.defense, "Speed": newPoke.speed,
                                                                    "SpAtk": newPoke.spatk, "SpDef": newPoke.spdef } ] } })
            else:
                newDBupdate.insert({"Generation": newPoke.gen, "Legendary": newPoke.leg,
                                    "Pokemon": [ { "#": newPoke.num, "Name": newPoke.name, "Type 1": newPoke.type1, "Type 2": newPoke.type2,
                                                    "HP": newPoke.hp, "Attack": newPoke.attack, "Defense": newPoke.defense,
                                                    "Speed": newPoke.speed, "SpAtk": newPoke.spatk, "SpDef": newPoke.spdef} ] })
        print("Conversion complete!")

    elif option == 2:
        print("Cleaning up collection..")
        db.NewPokemon.remove({})
        print("Clean up complete!")

    # When the database operations are completed close the connection
    MongoClient.close(client)

def main():
    print("Please choose an option.\n1. Convert Data.\n2. Delete all collections in new DB.\nOption:")
    mongo_function(input())

if __name__ == "main":
    main()

main()
