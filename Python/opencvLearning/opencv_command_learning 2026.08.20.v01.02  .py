import cv2 

image = cv2.imread(r'C:\Users\lac34\Pictures\wechat_20260819201737_972_15.jpg',1)
#python注释用的是井号，务必记住！
#左边输入绝对路径，记得加上文件类型和r来去除转义
#不写1就默认是1，即显示彩色。写0则表示灰度，该版本改为0
image1 = cv2.GaussianBlur(image, (5,5), 0)
image2 =  cv2.medianBlur(image1,5)
cv2.imshow('image2',image2)#左侧写窗口名称，右侧写imread赋值的变量。
cv2.waitKey()#让窗口长期保持