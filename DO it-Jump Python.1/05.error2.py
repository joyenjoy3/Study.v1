try:
    a = [1, 2]
    print(a[3])
    4/0
except ZeorDivisionError:
    print("0으로 나눌 수 없습니다.")
except IndexError:
    print("인덱싱할 수 없습니다.")
