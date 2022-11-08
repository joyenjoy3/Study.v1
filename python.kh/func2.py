#지역변수 (Local Variable), 전역변수 (Global Variable)

# 지역변수
def jeju_potato():
    potato = "고구마"
    print(potato)

jeju_potato()


# 전역변수
potato = "감자" # 변수를 먼저 선언.

def jeju_potato():
    global potato
    print(potato)
    potato = "고구마" # 지역변수
    print(potato)

jeju_potato()



# 가변매개변수

def add(*args): 
    sum = 0
    for i in args:
        sum += i
        print(sum)

add(10, 20, 30, 40)


# 키워드 매개변수

# 키워드 = 특정값 형태로 {"키워드":"특정값"}

def star_player(**kwargs):
    for i in kwargs.items():
        print(i)

star_player(축구  = "손흥민", 야구 = "박용택", 농구 = "허재")