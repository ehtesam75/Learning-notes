#tuple

#tuple is like list but immutable, meaning it cannot be changed after it is created.
#tuple is created using parentheses () instead of square brackets []

name = ("olin", "ehtesam", "kamal");

name[0] #olin
name.index("kamal") #2
print(name[-1]) #kamal

len(name) #3
print("ehtesam" in name) #true
print(name[0:2]) #('olin', 'ehtesam')

print(sorted(name)) #['ehtesam', 'kamal', 'olin'] #created a new tuple and sorted it

new_tuple = name + ("jamal", "rahim")
print(new_tuple) #('olin', 'ehtesam', 'kamal', 'jamal', 'rahim')



#dictonary 
#key and value 

color = "red"
dict = {"name" : "ehtesam", "age" : 23, "choices" : color} #key and value pair
#value can be a variable, then it won't need to have ""
#print(dict) #will print the whole dictonary

print(f"Name : {dict['name']}") #f is formated string literal (f string), lets me use variables inside (inside {})
print("Name : " + dict['name'])  #another way : without using f string

dict["age"] = 53 #value can be changed
print(dict.get("age")) #53
print(dict.get("height", "default value")) #default value if key not found


#removing item
print(dict.pop("name"))
print(dict) #{'age': 53, 'choices': 'red'}
print(dict.popitem()) #remove last item

#checking if key present
print("age" in dict) #true

#update dictionary
dict.update({"address" : "dhaka"})
dict["home"] = "bhairab"
print(dict.keys()) 

print(list(dict.keys())) #keys will be in a list
print(list(dict.values())) 
print(list(dict.items())) #key and value in a list of tuples

#length
print(len(dict)) #3

#delete
del dict['home'] 
print(dict) #{'age': 53, 'address': 'dhaka'}

#copy a dictoanry
dict_copy = dict.copy();
print(dict_copy)