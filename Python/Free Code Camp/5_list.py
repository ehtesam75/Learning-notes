random = ["roger", 7, "kouer", True, "you"]  #list can have different data types
random[2] = "aleen"
print("roger" in random) #true
print(random[-2]) #true
print(random[1:3]) #7, aleen #from 1 to 2 index
print(random[:3]) #['roger', 7, 'aleen'] #from 0 to 2 index

#append and extend
random.append("zunnuryn") #append at the end of list
random.extend(["one", "two"]) #extend list with another list
random += ["three", "four"] #same as extend

#remove and pop
random.remove("aleen") #remove first occurrence of "aleen"
random.pop() #remove last element of list
print(random)

random.clear() #clear the 
random += ["one", "two", "three", "four", "Z"] 


#insert (append and extend is mentioned above)
random.insert(2, "new word") #insert "new word" at index 2
#['one', 'two', 'new word', 'three', 'four', 'Z']
random[1:1] = ["test1", "test2"] #insert at index 1
#['one', 'test1', 'test2', 'two', 'new word', 'three', 'four', 'Z']
random[3:5] = ["test3", "test4"] #replace at index 3 and 4
#['one', 'test1', 'test2', 'test3', 'test4', 'three', 'four', 'Z']


#coping a list
list_copy = random.copy() #copy the list
# list_copy = random[:] #nothing before or after :. so it copy from beginning to end of the list
#copy the list; ":" is a slice operator, 


#sort and reverse
random.sort(reverse = 1) #sort the list in descending order
random.reverse() #reverse the list
random.sort() #sort the list in ascending order
#['Z', 'four', 'one', 'test1', 'test2', 'test3', 'test4', 'three']
#z is first. Becase sort() is case sensitive. It will sort capital letters first.
random.sort(key = str.lower) #sort the list in ascending order, ignoring case
#['four', 'one', 'test1', 'test2', 'test3', 'test4', 'three', 'Z']

#the above sort function will modify the original list

print(sorted(list_copy, key = str.lower)) #sorted() will return a new list, without modifying the original list
#['four', 'one', 'test1', 'test2', 'test3', 'test4', 'three', 'Z']

print(list_copy) 
#['one', 'test1', 'test2', 'test3', 'test4', 'three', 'four', 'Z']



#list compression

num = [1, 2, 3, 4]

multiply = [x*2 for x in num]
print(multiply) #[2, 4, 6, 8]

even = [x for x in num if x % 2 == 0]
print(even)  #[2, 4]

square = [x**2 for x in num]
print(square) #[1, 4, 9, 16]

list_of_tuple = [(x, x**2) for x in num]
print(list_of_tuple) #[(1, 1), (2, 4), (3, 9), (4, 16)] 


