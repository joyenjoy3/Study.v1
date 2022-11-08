class BreadMold :
    category = "크림빵" # 속성 == 일반적 변수

bread = BreadMold()
bread.price = 3000

# 참조연산자 .format()
print("{}의 가격은 {}입니다.".format(bread.category, bread.price))

# int(), str(), float(), bool(), tuple()..... type()
# 모두 클래스 였다. (위 내장함수들.)

number = 1
# 1 = 데이터 int  인스턴스(객체)로 사용해 왔다. 