def str_to_int(string_number):
    result = int(string_number)
    return result


def str_to_float(string_number):
    result = float(string_number)
    return result


def number_to_str(float_number):
    result = str(float_number)
    return result


# integer와 string 더하기===============================================
def add_string_number(string, float_number):
    # """
    # Input:
    # 	-string: 문자열
    # 	-float_number: 실수 값
    # Output:
    # 	-문자열과 실수 값이 연결된 문자열 값
    # Examples:
    # 	>>> add_string_number("Gachon", 3)
    # 	"Gachon3"
    # 	>>> add_string_number("jiho",14)
    # 	"jiho14"
    # """
    # ===Modify codes below=================

    temp = str(float_number)
    result = string+temp
    return result


# string과 string 더하기================================================
def add_string_string(str_1, str_2):
    # """
    # Input:
    #   -str_1: 문자열
    #   -str_2: 문자열
    # Output:
    # 	-str: 두 문자열의 연결된 문자열 값
    # Examples:
    # 	>>> add_string_string("3", "흐흐흐")
    # 	"3흐흐흐"
    # 	>>> add_string_string("135", "45.76")
    # 	"13545.76"
    # """
    # ===Modify codes below=================

    result = str_1+str_2

    # ======================================
    return result


# 사칙연산==============================================================
def associative_law_add(a, b, c):

    # """
    # <설명>
    # 아래의 연산에 결합법칙을 적용해 계산하여라.
    # (a + b) + c
    #
    # Input:
    # 	-a, b, c: 실수 값
    # Output:
    # 	-결합법칙이 적용되어 계산된 실수 값
    # Examples:
    # 	>>> commutative_law(3, 4, 5)
    # 	12
    # """
    # ===Modify codes below=================
    temp = a+b

    result = temp+c
    return result


def associative_law_mutiple(a, b, c):

    # """
    # <설명>
    #   아래의 연산에 결합법칙을 적용해 계산하여라.
    #   (a * b) * c
    # Input:
    # 	-a, b, c: 실수 값
    # Output:
    # 	-결합법칙이 적용되어 계산된 실수 값
    # Examples:
    # 	>>> associative_law_mutiple(3, 4, 5)
    # 	60
    # """
    # ===Modify codes below=================
    temp = a*b
    result = temp*c

    # ======================================

    return result


def distributive_law(a, b, c):

    # """
    # <설명>
    #   아래의 연산에 분배법칙을 적용해 계산하여라.
    #   a * (b + c)
    # Input:
    # 	-a, b, c: 실수 값
    # Output:
    # 	-분배법칙이 적용되어 계산된 실수 값
    # Examples:
    # 	>>> distributive_law(3, 4, 5)
    # 	27
    # """
    # ===Modify codes below=================
    temp = b+c

    result = a*temp
    # ======================================

    return result


# 지수연산=============================================================

def exponent(base, power):

    # """
    # <설명>
    #   다음의 곱셈연산을 지수연산으로 바꿔 계산하여라.
    #   base * base * base * ... * base
    # Input:
    # 	-base, power: 실수 값
    # Output:
    # 	-지수연산이 적용되어 계산된 값
    # Examples:
    # 	>>> exponent(3, 4)
    # 	81
    # """
    # ===Modify codes below=================
    result = base**power
    # ======================================

    return result


def main():
    print("Str_to_int Test")
    print(str_to_int("56"))  # Expected Result: 56
    print("====> ", str_to_int("27") == 27)  # Expected Result: True
    print("Str_to_int Test Closed \n")

    print("str_to_float Test")
    print(str_to_float("8.4501"))  # Expected Result: 8.4501
    print("====> ", str_to_float("3.4") == 3.4)  # Expected Result: True
    print(str_to_float("6.74") == 9.8)  # Expected Result: False
    print("Str_to_float Test Closed \n")

    print("number_to_str Test")
    print(number_to_str(56))  # Expected Result: "56"
    print("====> ", number_to_str(4.751) == "4.751")  # Expected Result: True
    print(number_to_str(3) == "17")  # Expected Result: False
    print("number_to_str Test Closed \n")

    print("add_string_number Test")
    print(add_string_number("67", 5))  # Expected Result: "675"
    print(add_string_number("Gachon", 4) == 2)  # Expected Result: False
    print("====> ", add_string_number("Gachon", 15) == "Gachon15")
    # Expected Result: True
    print("add_string_number Test Closed \n")

    print("add_string_string Test")
    print(add_string_string("1.4", "1.5"))  # Expected Result: "1.41.5"
    print(add_string_string("이길", "여") == 15)  # Expected Result: False
    print("====> ", add_string_string("이길", "여") == "이길여") # Expected Result: True
    print("add_string_string Test Closed \n")

    print("associative_law_add Test")
    print(associative_law_add(3, 5, 4))  # Expected Result: 12
    print(associative_law_add(10, 5, 67) == 15)  # Expected Result: False
    print("====> ", associative_law_add(10, 5, 5) == 20) # Expected Result: True
    print("associative_law_add Test iClosed \n")

    print("associative_law_mutiple Test")
    print(associative_law_mutiple(3, 5, 2))  # Expected Result: 30
    print("====> ", associative_law_mutiple(10, 5, 1) == 50)
    # Expected Result: True
    print("associative_law_mutiple Test Closed \n")

    print("distributive_law Test")
    print(distributive_law(6, 7, 3))  # Expected Result: 60
    print("====> ", distributive_law(2, 4, 1) == 10) # Expected Result: True
    print("distributive_law Test Closed \n")

    print("Exponent Test")
    print(exponent(3, 5))  # Expected Result: 243
    print(exponent(10, 5) == 15)  # Expected Result: False
    print("====> ", exponent(2, 10) == 1024)  # Expected Result: True
    print("Exponent Test Closed \n")


if __name__ == '__main__':
    main()
