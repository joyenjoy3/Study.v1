class BreadMold:
    catagory = "빵"

bread1 = BreadMold()
bread2 = BreadMold()
bread3 = BreadMold()

bread1.price = 3000
bread2.catagory = "붕어빵"
bread3.catagory = "잉어빵"

print(bread1.catagory, bread2.catagory, bread3.catagory)

# dir() 이름공간에 있는 모든 속성을 리스트로 반환

print(dir(bread1))
print(dir(str))

# __init__ 생성자 매서드
# __del__ 소멸자 매서드
class BreadMold:
    clategory = "빵"

    def __init__(self, category, price):
        self.clategory = category
        self.price = price
        print("빵을 만들었습니다.")
    
    def __del__(self):
        print("빵이 없어졌습니다.")

bread1 = BreadMold("붕어빵", 3000)
bread1 = BreadMold("빵", 1000)
bread2 = BreadMold("잉어빵", 4000)
print("{}의 가격은 {}원 입니다.".format(bread1.clategory, bread1.price))
print("{}의 가격은 {}원 입니다.".format(bread2.clategory, bread2.price))

# 상속
# super, 부모
# sub, 자식

class ParentRestaurant:
    price = 15000

    def __init__(self, name, menu, recipe):
        self.name = name
        self.menu = menu
        self.recipe = recipe
    
    def __str__(self):
        return "가게 이름 : {}, 가게 메뉴 : {}, 메뉴의 조리법 : {}". format(self.name, self.menu, self.recipe)
    
    def __del__(self):
        pass

class ChildRestaurant(ParentRestaurant):
    price = 20000  # 부모 클래스 재정의
    maketing = "온라인 마케팅" # 자식 클래스에서 새로운 속성 추가

    def __init__(self, name, menu, recipe, marketing):
        ParentRestaurant.__init__(self, name, menu, recipe)
        self.marketing = marketing

restaurant_info = ChildRestaurant("자식의 가게", "붕어빵", "붕어빵을 굽는다.")
print(restaurant_info.price)