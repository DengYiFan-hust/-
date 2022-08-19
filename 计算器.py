# 程 序 员 大 帅 哥： 刘 凯 凯
# 开 发 时 间： 2022-08-19 17:25
# coding=utf-8
import re
#计算圆的面积函数
def roundarea(d):
  y=d*d*3.1415926;
  print(y)
#计算长方形的面积函数
def rectanglearea(e,f):
  y=e*f;
  print(y)
#计算正方形的面积
def squarearea(g):
  y=g*g;
  print(y)
#计算梯形的面积
def ladderarea(m,n,o):
  y=(m+n)*o/2;
  print(y)
# 判断用户输入字符串是否是float    如果包含两个（或以上）小数点，return False
# 否则（只剩一个或者没有小数点），去掉字符串中的小数点，然后判断是否全是由数字组成，是，return True，否，return False
def is_number(num):
  pattern = re.compile(r'(.*)\.(.*)\.(.*)')
  if pattern.match(num):
    return False
  return num.replace(".", "").isdigit()
print("智能计算图形面积小程序")
c=0;
tag=0;
while tag==0:
  c = input("请输入你所要计算的图形的类型（如果是圆形请输入round ，  如果是长方形请输入rectangle，如果是正方形请输入 square ）：");
  c = c.strip();
  if  c=='round' or  c=='rectangle' or  c=='square'or  c=='ladder':
    tag = 1;
    if c=='round':
     banjing = 0
     while banjing == 0:
      d = input("请输入圆的半径长度:");
      if True != is_number(d):
        print("输入错误，请重新输入")
      else:
        banjing = 1;
        print("输入正确，正在计算圆的面积")
        print(roundarea(float(d)));
    elif c=='rectangle':
      banjing=0;
      while banjing == 0:
       e= input("请输入长方形的长:")
       f=input("请输入长方形的宽:")
       if True != is_number(e) or True != is_number(f):
          print("输入错误，请重新输入")
       else:
             banjing = 1;
             print("输入正确，正在计算长方形的面积")
             print(rectanglearea(float(e),float(f)));
    elif c == 'square':
      banjing = 0;
      while banjing == 0:
        g = input("请输入正方形的边长:")
        if True != is_number(g) :
          print("输入错误，请重新输入")
        else:
          banjing = 1;
          print("输入正确，正在计算正方形的面积")
          print(squarearea(float(g)));
    elif c == 'ladder':
      banjing = 0;
      while banjing == 0:
        m = input("请输入梯形的上底长:")
        n = input("请输入梯形的下底长:")
        o = input("请输入梯形的高:")
        if True != is_number(m) or True != is_number(n) or True != is_number(o):
          print("输入错误，请重新输入")
        else:
          banjing = 1;
          print("输入正确，正在计算梯形的面积")
          print(ladderarea(float(m),float(n),float(o)));
  else:

     print("输入有误，请检查输入数据并重新输入：")
