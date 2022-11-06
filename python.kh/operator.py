print(10 + 2)
print(10 - 2)
print(10 * 2)
print(10 / 2)

print(type(10 / 10))

print(10 // 2)
print(10 % 3)

# int() 정수형
#실수형, 논리형, 문자열

print(int(123.92))
print(int(123.932423525))
print(int(123.0))

print(int(True))
print(int(False))

print(type(int("23456644")))
# print(int("12345.324234")) 이건 안됨.

# float() 실수형
# 정수형, 논리형, 문자열

print(float(200))
print(float(3))

print(float(True))
print(float(False))

print(float("23.232424"))
print(float("2323"))

# str()
# 모든 자료형

print(str(1232123))
print(str(23323.2323))
print(str(True))

print(type(str(123123)))

# bool()
# 모든 자료형

#False
print(bool(0))
print(bool(0.0))
print(bool(""))

#True
print(bool(1))
print(bool(1.0))
print(bool("str"))
print(bool("1231"))

a = 10
b = 20

# =(Equal sign) a == b
print(a < b)
print(a <= b)
print(a > b)
print(a >= b)
print(a == b)
print(a != b)


# 논리형 자료도 비교

is_true = True
is_false = False

print(is_true > is_false)
print(is_true < is_false)

# 문자형 자료 비교

print("Python" > "python") #False
print("12345" > "12344") # Ture
print("12.12" < "13.23")


# 복합연산자
# + - * / ** ...
# +=, -=, *=, /=, **=

today = 1230
today += 1

print(today)


# 논리연산자

# and

print(True and True)
print(True and False)
print(10>3 and 3<5)
print(10==1 and 1==5)

#or

print(True or False)
print(False or True)
print(False or False)


# and

print("a" and 10>3 and True and False)

# or

print(0 or 0.0 or False or "a")

print(True or False and "참") # and 연산이 or 연산보다 우선.

#  연산에 우선 순위가 있다.
print(3 * 2 ** 2)
print((3 * 2) ** 2)