text = "        www.GOOGLE.com        "

# print(len(text))

# txt_capitalize = text.capitalize() # 첫글자를 대문자로 변경

# print(txt_capitalize)

txt_upper = text.upper() #문자열 전체를 대문자로 변경
txt_lower = text.lower() #문자열 전체를 소문자로 변경

print(txt_upper)
print(txt_lower)

# count, find, index # 문자열 검색

g_cnt = text.count('G')

print(g_cnt) # 무자 'G'가 몇번 발생 했는가?

text_naver = text.replace("GOOGLE", "NAVER") #문자열 치환

print(text_naver)

print(text.split())
print(text.split('.')) #인자값에 따라 문자열을 분리
print(text.split('OO'))

print(text)
stp = text.strip() # 문자열 양 옆에 있는 공백만 지워줌
print(stp)