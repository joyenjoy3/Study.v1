# index
# 01234
# -5 -4 -3 -2 -1

print ("index"[0])
print ("index"[1])
print ("index"[2])
print ("index"[3])
print ("index"[4])

print ("index"[-4])
print ("index"[-3])
print ("index"[-2])
print ("index"[-1])

# string index

str_ = "String index"

print(str_[0])
print(str_[1])
print(str_[2])
print(str_[3])
print(str_[4])
print(str_[5])
print(str_[6])
print(str_[7])
print(str_[8])
print(str_[9])
print(str_[10])
print(str_[11])

str_silce = "0123456789"

print(str_silce[0:7]) # 0123456  까지 출력됨. 마지막은 차례는 출력 안됨. 주의!
print(str_silce[0:])  #0123456789 맨뒤까지
print(str_silce[:10]) #0123456789 맨 앞 부터
print(str_silce[:]) # 재일 앞부터 재일 뒤까지 출력됨
print(str_silce[-8:-1]) # -1에 마지막 n 요소가 되어서 출력이 안됨.

print(str_silce[0:10:2]) # 0번 요소부터 10번 쩐까지 2개씩 끝어서!
print(str_silce[0:]+str_silce[:-1])

weather = "맑음"
temperature = 20

print("오늘의 날씨는",  weather, "기온은", temperature, "도 입니다.")
print("오늘의 날씨는 %s 기온은 %d 도 입니다."%(weather, temperature))

#포맷 함수
print("오늘의 날씨는 {} 기온은 {} 도 입니다.".format(weather, temperature))

left = "left"
right = "right"
middle = "middle"

# !@<>^
print("({2:>10s}), ({1:^10s}), ({0:<10s})".format(left, middle, right))

# f-string 파이썬 3.6 버전 이상에서 사용 가능

print(f"오늘의 날씨는 {weather}이며, 기온은 {temperature}도 입니다.")

print(f"2곱하기 30의 결과 값 = {2*30}")