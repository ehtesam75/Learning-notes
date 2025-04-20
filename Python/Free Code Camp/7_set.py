#set
#can be changed (mutable), unordered, iterable, and unindexed
#set do not store an item more than once

set1 = {"nazmul", "jannat", "habib"}
set2 = {'habib', 'rahman'}

intersection = set1 & set2 #common element; & intersection symbol
print(intersection)

union = set1 | set2 #all elements
print(union)

difference = set1 - set2 #excluding element from set1 which are present in set2
print(difference) #{'jannat', 'nazmul'}


#sub and super set
set1 = {1, 2, 3}
set2 = {1, 2}

print(set1 > set2) # true, set1 is superset of set2
print(set2 < set1) # true, set2 is subset of s1

set2.add(3) #set2 = {1, 2, 3}
set2.add(3) #won't get added, cuz 3 is already in set2

print(set2)
print(set1 > set2)
print(set2 < set1)
#both of the above line will print false, cuz the sets are equal

print(set1 >= set2) #
print(set2 <= set1) #equal is allowed now
#so both will print true now

#note
# & behaves differently depending on the data type (same with '|)
# when both operands are sets, Python uses & as set intersection.
#If the operands are integers or booleans, it does a bitwise AND instead.

#print as list
print(list(set1))
print(4 in set1) #false
