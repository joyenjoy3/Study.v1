i = 0

while True:
    print("{}번째 반복입니다.".format(i))
    i += 1
    if i > 10:
        break


numbers = [10, 20, 30, 400, 50]

for i in numbers:
    if i < 200:
        continue
    print("{}은 200의상의 숫자입니다.".format(i))
