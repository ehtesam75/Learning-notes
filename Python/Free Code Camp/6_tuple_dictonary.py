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

#tuple unpacking
tuple = (2, 3)
a, b = tuple
print(f"tuple unpaking a : {a}, b : {b}")  #tuple unpaking a : 2, b : 3



#dictonary 
#key and value 

# d = dict()
# d.update({"name" : "aleen"})
# print(list(d.values()))

color = "red"
d = {"name" : "ehtesam", "age" : 23, "choices" : color} #key and value pair
#value can be a variable, then it won't need to have ""
#print(d) #will print the whole dictonary

print(f"Name : {d['name']}") #f is formated string literal (f string), lets me use variables inside (inside {})
print("Name : " + d['name'])  #another way : without using f string

d["age"] = 53 #value can be changed
print(d.get("age")) #53
print(d.get("height", "default value")) #default value if key not found


#removing item
print(d.pop("name"))
print(d) #{'age': 53, 'choices': 'red'}
print(d.popitem()) #remove last item

#checking if key present
print("age" in d) #true

#update dictonary
d.update({"address" : "dhaka"})
d["home"] = "bhairab"
print(d.keys()) 

print(list(d.keys())) #keys will be in a list
print(list(d.values())) 
print(list(d.items())) #key and value in a list of tuples

#length
print(len(d)) #3

#delete
del d['home'] 
print(d) #{'age': 53, 'address': 'dhaka'}

#copy a dictonary
d_copy = d.copy();
print(d_copy)

#indexing in a dictonary
#indexing is not possible in dict
#so we have to convert dict to tuple so we can use indexing
d = dict()
d[1] = "name"
d[4] = "roll"
x = list(d.items())  #d.items() converted it to a tuple

for i in range(2):
    print(str(x[i][0]) + " : " + str(x[i][1]))      

