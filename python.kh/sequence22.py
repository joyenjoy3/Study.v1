week = {"월요일", "화요일", "수요일", "목요일", "금요일", "토요일", "일요일"}
week.add("화요일")
week.update(["와요일"])
# 집합

print(week) #집합은 순서 정해지지 않고, 중복 허락하지 않는다.


# 집합
a = {1, 2, 3, 4, 5}
b = {3, 4, 5, 6, 7}

print(a | b)
print(a & b)
print(a - b)

a.remove(4)
print(a)