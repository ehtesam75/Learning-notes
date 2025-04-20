a = "the"
name = 'ehtesam'

b = a + ' name ' + " is " + name #concatenation
b += " and that right"
print(b)

#f string
print(f"my name is {name}") #my name is ehtesam
print("my name is " + name) #my name is ehtesam

#multiline string
print("""

this is multiline string
      second line

last line
""")    #inside """ will be considered as multiline string"

print("aleen".upper()) #ALEEN
print("alEEn".islower()) #False #check if all letters are lowercase
print("ALEEN rahman".title()) #Aleen Rahman #capitalize first letter of each word
print("aleen rahman".capitalize()) #Aleen rahman #capitalize first letter of first word
#isalpha() - check if all letters are alphabets
#isnumeric() - check if all letters are numbers
#isdecimal() - check if all letters are decimal numbers
#isalnum() - check if all letters are alphanumeric (letters and numbers)
#startswith() - check if string starts with a specific string
check = "alen rahman".startswith("al") #true
#endswith()
#replace
check = "aleen".replace("ee", "zz") #alzzn
#split - split string into list of strings
check = "dhaka".split("ak") #['dh', 'a']
#join - join list of strings into a single string
check = "-".join(["ehtesam", "zunnuryn"]) #ehtesam-zunnuryn
#strip - remove leading and trailing whitespace
check = "   the name is aleen    ".strip() #the name is aleen
#find - find the first occurrence of a substring in a string
check = "the c name name is aleen".find("the") #0


#notice
check = "kDEEkklll"
print(check.upper())
print(check) #will not change the original string, because strings are immutable in python

print(len(check)) #length of string

#in operator
print("kll" in check) #true "kll" is present in check

#backslash/escape character 
#\" allows to include a double quote " inside a double-quoted string.
print("hello\"n") #hello"n
print('hello"n') #alternative
print('it\'s ok')


#indexing
name = "ehtesam"
print(name[0]) #e
print(name[-1]) #m
print(name[1:3]) #ht    #slicing: printing part of string
print(name[2:]) #tesam
print(name[:3]) #eht

#only empty string is considered false, rest all are true
print(bool("")) #false
print(bool(" ")) #true


