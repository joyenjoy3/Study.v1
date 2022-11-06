# 숫자, 알파벳, 한글

numbers = [1000, 50000, 160, 100, 20, 2450]

numbers.sort(reverse = True) # 내림차순으로 정렬

# numbers.sort() # 오름차순으로 정렬

print(numbers)

# numbers.reverse() # 정렬 순서가 뒤집어짐. 리스트 안의 요소를 역순으로

# print(numbers)

print(ord("A"))
print(ord("a"))
print(ord("ㄱ"))
print(ord("ㅎ"))

print(chr(66))
print(chr(97))
print(chr(12593))
print(chr(12622))

# in 연산자와 not in  연산자

print(50 in numbers)
print(50 not in numbers)


#이차원 인덱스

td_number = [[10, 20, 30], [1, 2, 3]] # 행 열. 첫번째 행, 두번째 행.

print(td_number)
print(td_number[0])
print(td_number[1])

# 첫번째 요서의 첫번째 숫자를 보고 싶다면?

print(td_number[0][0]) # 행. 열. 
print(td_number[1][2]) # 두번째 행의 3을 나타내기.

#슬라이싱 해보기

print(td_number[0][0:2]) #첫 인덱스의 10 과 20
print(td_number[1][1:3])  #  두번째 인덱스 2,3 빼오기