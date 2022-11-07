def menu():
    print("오늘의 메뉴")
    print("오늘 점심메뉴는 제육볶음입니다.")
    print("내일의 메뉴")
    print("내일의 점심메뉴는 돈까스입니다.")

menu()


def add(num1, num2):
    print(num1 + num2)

add(1, 2)

def add2(text1, text2):
    '''문자열 두개 (성, 이름)을 입력받아서 합쳐서 출력
    args
       text1 : 성을 받는 문자열
        text2 : 이름을 받는 문자열
    '''
    text = text1 + text2
    return text

print(add2("홍", "길동"))