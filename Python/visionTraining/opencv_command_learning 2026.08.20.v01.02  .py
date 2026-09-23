import cv2 

image = cv2.imread(r'C:\Users\lac34\Pictures\wechat_20260819201737_972_15.jpg',1)
image1 = cv2.GaussianBlur(image, (5,5), 0)
image2 =  cv2.medianBlur(image1,5)
cv2.imshow('image2',image2)
cv2.waitKey()

