school = 1
college = 0

ready = any(school, college) #any() - returns true if any of the values are true
# print(ready) #true

ready = all(school, college) #all() - returns true if all of the values are true
# print(ready) #false