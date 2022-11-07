lunch = input("점심메뉴를 골라주세요 (제육덮밥, 돈까스, 김밥) >")

if lunch == "제육덮밥":
    print("제육덮밥을 먹는다.")
elif lunch == "돈까스":
    print("돈까스을 먹는다.")
elif lunch == "김밥":
    print("김밥을 먹는다.")
else:
    print("점심을 굶는다.")

# and, or
# if문 여러조건을 동시에 판별

# 3의 배수 이면서 짝수인 수를 판별해주는 조건식

number = int(input("정수를 입력해주세요 >"))

if number %3 == 0 and number %2 == 0:
    print("3의 배수이면서 짝수 입니다.")
elif number %3 != 0:
    print("3의 배수가 아닙니다.")
else:
    print("짝수가 아닙니다.")
