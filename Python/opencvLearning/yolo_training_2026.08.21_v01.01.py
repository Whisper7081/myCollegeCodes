from ultralytics import YOLO

# 加载模型（自动下载）
model = YOLO("yolov8n.pt")

# 推理 - 注意用原始字符串 r"" 避免转义问题
img_path = r"C:\Users\lac34\Pictures\微信图片_20260821162902_80_11.jpg"
results = model(img_path)

# 显示结果（如果图形界面可用）
results[0].show()

# 或者保存结果到当前目录
results[0].save(filename="detected_result.jpg")
