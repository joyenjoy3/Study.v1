weather = "비"


if weather == "비":
    print("우산을 챙겨주세요.")


study_time = int(input("오늘의 공부시간을 입력해주세요 >"))

# 만약에 오늘 공부할시간이 3시간 이상이라면 파이썬 공부
if study_time >= 3:
    print("오늘은 파이썬 공부를 합시다!")

# 만약에 오늘 공부할 시간이 3시간 미만이라면 오늘은 놀자

if study_time < 3:
    print("오늘은 시간이 별로 없으니까 놀자 !")


odd = input("정수를 입력해수세요 >")
     
#  홀수, 짝수
# 1, 3, 4, 5, 7, / 2 == %1

if odd % 2 == 1:
    print("입력하신 정수는 홀수 입니다.")
else:
    print("입력하신 정수는 짝수 입니다.")

# 13wkfltndml 숫자중에서 7번째 숫자
# 123456-1234567
number = input("주민번호를 입력해주세요 >")
odd = input(number[7])

if odd % 2 == 0: #짝수라면
    print("여성입니다.")
else:  #짝수가 아니라면 == 홀수라면
    print("남성입니다.")