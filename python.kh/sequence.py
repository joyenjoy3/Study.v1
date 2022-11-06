# list [] 아네 ,
list_a = [1, 2, 3, 4]
list_d = [1, "a", True]

print(list_a)
print(list_d)

numbers = [0, 1, 2, 3, 4, 5, 6, 7]

print(numbers[0])
print(numbers[3:5])

list_lan = ["JAVA", "C", "Python", "Go"]

print(list_lan[0][2])
print(list_lan[2][2:4])

list_lan[1] = "C++"

print(list_lan)

# append() 리스트 맨 뒤에 제일 마지막 인덱스 (-1)

#list_lan.append("Ruby")
# print(list_lan)

# extend()  요소를 추가하는 방법

list_lan.extend(4,5,6)

print(list_lan)

#insert(index, data)
list_lan.insert(0, "R")

print(list_lan)