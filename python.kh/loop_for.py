# for i in "일이삼사오":
#    print(i)

# 1부터 30까지의 수 중에서 3의 배수들의 합을 구하시오.
# 3의 배수는 어떻게 구하면 될까요?
# 짝수 % 2 == 0
# / 2 == 2의 배수와 같다.

sum = 0

for i in range(1, 30+1):
    if i % 3 == 0:
        print("{} + {} = ".format(sum, i), end = "")
        sum += i
print(sum)

list_2nd = [[1, 2, 3], ["a", "b", "c"]]

for i in list_2nd:
    for j in i:
        print(j)

for i in range(1, 3):
    for j in range(1, 3):
        print("첫번째 for문의 반복 {}번, 두번째 for문의 반복{}번".format(i, j))


print("2단부터 9단까지 구구단 출력")
for i in range(2, 9+1):
    for j in range(1, 9+1):
        print(f"{i} X {j} = {i*j}", end = "\t")
    print()