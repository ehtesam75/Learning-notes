#loop
#in python, for and while loop are present

#while loop
count = 0

while count < 5:
    print(count, end = " ") 
    count +=1 

print("\noutside of loop")


#for loop
list = [1, 2, 3, 4, 5]

for val in list: 
    print(val, end = "")

print("\n") #12345

for item in range(5): #range function returns a list of number (from 0 to n-1)
    print(item, end = "")

print("\n") #01234


#getting index : using enumerate function
for index, item in enumerate(list): #enumerate returns each index + item
    print(f"idx {index} : {item}")
    if(index == len(list) - 1):
        print("\n")

# idx 0 : 1
# idx 1 : 2
# idx 2 : 3
# idx 3 : 4
# idx 4 : 5

#break and continue are also discussed